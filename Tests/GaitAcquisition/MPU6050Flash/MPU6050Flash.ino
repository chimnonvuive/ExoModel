// /*
//    Arduino and MPU6050 Accelerometer and Gyroscope Sensor Tutorial
//    by Dejan, https://howtomechatronics.com
// */
// #include <Wire.h>
// const int MPU = 0x68;  // MPU6050 I2C address
// float AccX, AccY, AccZ;
// float GyroX, GyroY, GyroZ;
// float accAngleX, accAngleY, gyroAngleX, gyroAngleY, gyroAngleZ;
// float roll, pitch, yaw;
// float AccErrorX, AccErrorY, GyroErrorX, GyroErrorY, GyroErrorZ;
// float elapsedTime, currentTime, previousTime;
// int c = 0;
// void setup() {
//   Serial.begin(19200);
//   Wire.begin();                 // Initialize comunication
//   Wire.beginTransmission(MPU);  // Start communication with MPU6050 // MPU=0x68
//   Wire.write(0x6B);             // Talk to the register 6B
//   Wire.write(0x00);             // Make reset - place a 0 into the 6B register
//   Wire.endTransmission(true);   //end the transmission
//   /*
//   // Configure Accelerometer Sensitivity - Full Scale Range (default +/- 2g)
//   Wire.beginTransmission(MPU);
//   Wire.write(0x1C);                  //Talk to the ACCEL_CONFIG register (1C hex)
//   Wire.write(0x10);                  //Set the register bits as 00010000 (+/- 8g full scale range)
//   Wire.endTransmission(true);
//   // Configure Gyro Sensitivity - Full Scale Range (default +/- 250deg/s)
//   Wire.beginTransmission(MPU);
//   Wire.write(0x1B);                   // Talk to the GYRO_CONFIG register (1B hex)
//   Wire.write(0x10);                   // Set the register bits as 00010000 (1000deg/s full scale)
//   Wire.endTransmission(true);
//   delay(20);
//   */
//   // Call this function if you need to get the IMU error values for your module
//   calculate_IMU_error();
//   delay(20);
// }
// void loop() {
//   // === Read acceleromter data === //
//   Wire.beginTransmission(MPU);
//   Wire.write(0x3B);  // Start with register 0x3B (ACCEL_XOUT_H)
//   Wire.endTransmission(false);
//   Wire.requestFrom(MPU, 6, true);  // Read 6 registers total, each axis value is stored in 2 registers
//   //For a range of +-2g, we need to divide the raw values by 16384, according to the datasheet
//   AccX = (Wire.read() << 8 | Wire.read()) / 16384.0;  // X-axis value
//   AccY = (Wire.read() << 8 | Wire.read()) / 16384.0;  // Y-axis value
//   AccZ = (Wire.read() << 8 | Wire.read()) / 16384.0;  // Z-axis value
//   // Calculating Roll and Pitch from the accelerometer data
//   accAngleX = (atan(AccY / sqrt(pow(AccX, 2) + pow(AccZ, 2))) * 180 / PI) - 0.58;       // AccErrorX ~(0.58) See the calculate_IMU_error()custom function for more details
//   accAngleY = (atan(-1 * AccX / sqrt(pow(AccY, 2) + pow(AccZ, 2))) * 180 / PI) + 1.58;  // AccErrorY ~(-1.58)
//   // === Read gyroscope data === //
//   previousTime = currentTime;                         // Previous time is stored before the actual time read
//   currentTime = millis();                             // Current time actual time read
//   elapsedTime = (currentTime - previousTime) / 1000;  // Divide by 1000 to get seconds
//   Wire.beginTransmission(MPU);
//   Wire.write(0x43);  // Gyro data first register address 0x43
//   Wire.endTransmission(false);
//   Wire.requestFrom(MPU, 6, true);                    // Read 4 registers total, each axis value is stored in 2 registers
//   GyroX = (Wire.read() << 8 | Wire.read()) / 131.0;  // For a 250deg/s range we have to divide first the raw value by 131.0, according to the datasheet
//   GyroY = (Wire.read() << 8 | Wire.read()) / 131.0;
//   GyroZ = (Wire.read() << 8 | Wire.read()) / 131.0;
//   // Correct the outputs with the calculated error values
//   GyroX = GyroX + 0.56;  // GyroErrorX ~(-0.56)
//   GyroY = GyroY - 2;     // GyroErrorY ~(2)
//   GyroZ = GyroZ + 0.79;  // GyroErrorZ ~ (-0.8)
//   // Currently the raw values are in degrees per seconds, deg/s, so we need to multiply by sendonds (s) to get the angle in degrees
//   gyroAngleX = gyroAngleX + GyroX * elapsedTime;  // deg/s * s = deg
//   gyroAngleY = gyroAngleY + GyroY * elapsedTime;
//   yaw = yaw + GyroZ * elapsedTime;
//   // Complementary filter - combine acceleromter and gyro angle values
//   roll = 0.96 * gyroAngleX + 0.04 * accAngleX;
//   pitch = 0.96 * gyroAngleY + 0.04 * accAngleY;

//   // Print the values on the serial monitor
//   Serial.print(roll);
//   Serial.print("/");
//   Serial.print(pitch);
//   Serial.print("/");
//   Serial.println(yaw);
// }
// void calculate_IMU_error() {
//   // We can call this funtion in the setup section to calculate the accelerometer and gyro data error. From here we will get the error values used in the above equations printed on the Serial Monitor.
//   // Note that we should place the IMU flat in order to get the proper values, so that we then can the correct values
//   // Read accelerometer values 200 times
//   while (c < 200) {
//     Wire.beginTransmission(MPU);
//     Wire.write(0x3B);
//     Wire.endTransmission(false);
//     Wire.requestFrom(MPU, 6, true);
//     AccX = (Wire.read() << 8 | Wire.read()) / 16384.0;
//     AccY = (Wire.read() << 8 | Wire.read()) / 16384.0;
//     AccZ = (Wire.read() << 8 | Wire.read()) / 16384.0;
//     // Sum all readings
//     AccErrorX = AccErrorX + ((atan((AccY) / sqrt(pow((AccX), 2) + pow((AccZ), 2))) * 180 / PI));
//     AccErrorY = AccErrorY + ((atan(-1 * (AccX) / sqrt(pow((AccY), 2) + pow((AccZ), 2))) * 180 / PI));
//     c++;
//   }
//   //Divide the sum by 200 to get the error value
//   AccErrorX = AccErrorX / 200;
//   AccErrorY = AccErrorY / 200;
//   c = 0;
//   // Read gyro values 200 times
//   while (c < 200) {
//     Wire.beginTransmission(MPU);
//     Wire.write(0x43);
//     Wire.endTransmission(false);
//     Wire.requestFrom(MPU, 6, true);
//     GyroX = Wire.read() << 8 | Wire.read();
//     GyroY = Wire.read() << 8 | Wire.read();
//     GyroZ = Wire.read() << 8 | Wire.read();
//     // Sum all readings
//     GyroErrorX = GyroErrorX + (GyroX / 131.0);
//     GyroErrorY = GyroErrorY + (GyroY / 131.0);
//     GyroErrorZ = GyroErrorZ + (GyroZ / 131.0);
//     c++;
//   }
//   //Divide the sum by 200 to get the error value
//   GyroErrorX = GyroErrorX / 200;
//   GyroErrorY = GyroErrorY / 200;
//   GyroErrorZ = GyroErrorZ / 200;
//   // Print the error values on the Serial Monitor
//   Serial.print("AccErrorX: ");
//   Serial.println(AccErrorX);
//   Serial.print("AccErrorY: ");
//   Serial.println(AccErrorY);
//   Serial.print("GyroErrorX: ");
//   Serial.println(GyroErrorX);
//   Serial.print("GyroErrorY: ");
//   Serial.println(GyroErrorY);
//   Serial.print("GyroErrorZ: ");
//   Serial.println(GyroErrorZ);
// }
// /*
// Code language: Arduino (arduino)
// Code Description: So first we need to include the Wire.h library which is used for the I2C communication and define some variables needed storing the data.

// In the setup section, we need initialize the wire library and reset the sensor through the power management register. In order to do that we need to take a look at the datasheet of the sensor from where we can see the register address.

// MPU6050 Power Management Register x6B
// Also, if we want, we can select the Full-Scale Range for the accelerometer and the gyroscope using their configuration registers. For this example, we will use the default +- 2g range for the accelerometer and 250 degrees/s range for the gyroscope, so I will leave this part of the code commented.

// Configure Accelerometer Sensitivity - Full Scale Range (default +/- 2g)
// Wire.beginTransmission(MPU);
// Wire.write(0x1C);  //Talk to the ACCEL_CONFIG register (1C hex)
// Wire.write(0x10);  //Set the register bits as 00010000 (+/- 8g full scale range)
// Wire.endTransmission(true);
// // Configure Gyro Sensitivity - Full Scale Range (default +/- 250deg/s)
// Wire.beginTransmission(MPU);
// Wire.write(0x1B);  // Talk to the GYRO_CONFIG register (1B hex)
// Wire.write(0x10);  // Set the register bits as 00010000 (1000deg/s full scale)
// Wire.endTransmission(true);
// */

/*
 *  Simple HTTP get webclient test
 */

/*
 *  Simple HTTP get webclient test
 */

// #include <ESP8266WiFi.h>

// // Replace with your network credentials
// const char* ssid = "ThinkAlpha3";
// const char* password = "Thinkalpha3";

// unsigned long previousMillis = 0;
// unsigned long interval = 30000;
// int incomingByte = 0; // for incoming serial data

// void initWiFi() {
//   WiFi.mode(WIFI_STA);
//   WiFi.begin(ssid, password);
//   Serial.print("Connecting to WiFi ..");
//   while (WiFi.status() != WL_CONNECTED) {
//     Serial.print('.');
//     delay(1000);
//   }
//   Serial.println(WiFi.localIP());
// }

// void setup() {
//   Serial.begin(115200);
//   initWiFi();
//   Serial.print("RRSI: ");
//   Serial.println(WiFi.RSSI());
// }

// void loop() {
//   // unsigned long currentMillis = millis();
//   // // if WiFi is down, try reconnecting every CHECK_WIFI_TIME seconds
//   // if ((WiFi.status() != WL_CONNECTED) && (currentMillis - previousMillis >=interval)) {
//   //   Serial.print(millis());
//   //   Serial.println("Reconnecting to WiFi...");
//   //   WiFi.disconnect();
//   //   WiFi.begin(ssid, password);
//   //   Serial.println(WiFi.localIP());
//   //   //Alternatively, you can restart your board
//   //   //ESP.restart();
//   //   Serial.println(WiFi.RSSI());
//   //   previousMillis = currentMillis;
//   // }
//   Serial.print(Serial.read(),HEX);
//   // if (Serial.available()) {
//   //   Serial.println("I received: ");
//   //   // read the incoming byte:
//   //   while (Serial.available()) {
//   //      incomingByte = Serial.read();
//   //      Serial.print(incomingByte, HEX);
//   //      Serial.print(",");
//   //      if (!Serial.available()) delayMicroseconds(1200);
//   //   }
//   //   Serial.println();
//   // }
//   Serial.print("\n");
// }

// #include<SPI.h>

// char buff[]="Hello Slave\n";

// void setup() {
//  Serial.begin(115200); /* begin serial with 9600 baud */
//  SPI.begin();  /* begin SPI */
// }

// void loop() {
//  for(int i=0; i<sizeof buff; i++)  /* transfer buff data per second */
//   SPI.transfer(buff[i]); 
//  delay(1000);  
// }

void setup() {
// Open serial communications and wait for port to open:
Serial.begin(115200);
while (!Serial) {
; // wait for serial port to connect. Needed for native USB port only
}
}
void loop() { // run over and over
if (Serial.available()) {
Serial.write(Serial.read());
delay(1000);
}
}

// #include <OneWire.h>
// #include <DallasTemperature.h>
// #include <ESP8266WiFi.h>
// #include <ESP8266WiFiMulti.h>
// #include <WiFiUdp.h>
// #include <ArduinoOTA.h>
// #include <ESP8266WebServer.h>
// #include <ESP8266mDNS.h>
// #include <FS.h>

// #define ONE_HOUR 3600000UL

// #define TEMP_SENSOR_PIN 5

// OneWire oneWire(TEMP_SENSOR_PIN);        // Set up a OneWire instance to communicate with OneWire devices

// DallasTemperature tempSensors(&oneWire); // Create an instance of the temperature sensor class

// ESP8266WebServer server(80);    // Create a webserver object that listens for HTTP request on port 80

// File fsUploadFile;                                    // a File variable to temporarily store the received file

// ESP8266WiFiMulti wifiMulti;    // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'

// const char *OTAName = "ESP8266";         // A name and a password for the OTA service
// const char *OTAPassword = "esp8266";

// const char* mdnsName = "esp8266";        // Domain name for the mDNS responder

// WiFiUDP UDP;                   // Create an instance of the WiFiUDP class to send and receive UDP messages

// IPAddress timeServerIP;        // The time.nist.gov NTP server's IP address
// const char* ntpServerName = "time.nist.gov";

// const int NTP_PACKET_SIZE = 48;          // NTP time stamp is in the first 48 bytes of the message

// byte packetBuffer[ NTP_PACKET_SIZE];     // A buffer to hold incoming and outgoing packets

// #include <ESP8266WiFi.h>
// #include <WiFiClient.h>
// #include <ESP8266WebServer.h>

// /* Set these to your desired credentials. */
// const char *ssid = "ThinkAlpha3"; //Enter your WIFI ssid
// const char *password = "thinkalpha3"; //Enter your WIFI password

// ESP8266WebServer server(80);

// void handleRoot() {
//   server.send(200, "text/html", 
//   "<form action=\"/LED_BUILTIN_on\" method=\"get\" id=\"form1\"></form><button type=\"submit\" form=\"form1\" value=\"On\">On</button><form action=\"/LED_BUILTIN_off\" method=\"get\" id=\"form2\"></form><button type=\"submit\" form=\"form2\" value=\"Off\">Off</button>");
// }
// void handleSave() {
//   if (server.arg("pass") != "") {
//     Serial.println(server.arg("pass"));
//   }
// }
// void setup() {
//   pinMode(LED_BUILTIN, OUTPUT);
//   delay(3000);
//   Serial.begin(115200);
//   Serial.println();
//   Serial.print("Configuring access point...");
//   WiFi.begin(ssid, password);
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }
//   Serial.println("");
//   Serial.println("WiFi connected");
//   Serial.println("IP address: ");
//   Serial.println(WiFi.localIP());
//   server.on ( "/", handleRoot );
//   server.on ("/save", handleSave);
//   server.begin();
//   Serial.println ( "HTTP server started" );
//   server.on("/LED_BUILTIN_on", []() {
//     digitalWrite(LED_BUILTIN, 1);
//     Serial.println("on");
//     handleRoot();
//   });
//   server.on("/LED_BUILTIN_off", []() {
//     digitalWrite(LED_BUILTIN, 0);
//     Serial.println("off");
//     handleRoot();
//   });
// }
// void loop() {
//   server.handleClient();
// }


// #include <Arduino.h>
// #include <ESP8266WiFi.h>
// #include <Firebase_ESP_Client.h>
// #include <Wire.h>
// #include <NTPClient.h>
// #include <WiFiUdp.h>
// FirebaseData fbdo;
// FirebaseAuth auth;
// FirebaseConfig config;

// // Variable to save USER UID
// String uid;

// // Database main path (to be updated in setup with the user UID)
// String databasePath;
// // Database child nodes
// String tempPath = "/roll";
// String humPath = "/pitch";
// String presPath = "/yaw";
// String timePath = "/timestamp";

// // Parent Node (to be updated in every loop)
// String parentPath;

// FirebaseJson json;

// // Define NTP Client to get time
// WiFiUDP ntpUDP;
// NTPClient timeClient(ntpUDP, "pool.ntp.org");

// // Variable to save current epoch time
// int timestamp;

// // BME280 sensor
// // Adafruit_BME280 bme; // I2C
// float temperature;
// float humidity;
// float pressure;

// // Timer variables (send new readings every three minutes)
// unsigned long sendDataPrevMillis = 0;
// unsigned long timerDelay = 2000;

// // Initialize BME280
// void initBME(){
  
//   if (!Serial.available()) {
//     Serial.println("Could not find a valid BME280 sensor, check wiring!");
//     while (1);
//   }
// }

// // Initialize WiFi
// void initWiFi() {
//   WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
//   Serial.print("Connecting to WiFi ..");
//   while (WiFi.status() != WL_CONNECTED) {
//     Serial.print('.');
//     delay(1000);
//   }
//   Serial.println(WiFi.localIP());
//   Serial.println();
// }

// // Function that gets current epoch time
// unsigned long getTime() {
//   timeClient.update();
//   unsigned long now = timeClient.getEpochTime();
//   return now;
// }

// void setup(){
//   Serial.begin(115200);

//   // Initialize BME280 sensor
//   initBME();
//   initWiFi();
//   timeClient.begin();

//   // Assign the api key (required)
//   config.api_key = API_KEY;

//   // Assign the user sign in credentials
//   auth.user.email = USER_EMAIL;
//   auth.user.password = USER_PASSWORD;

//   // Assign the RTDB URL (required)
//   config.database_url = DATABASE_URL;

//   Firebase.reconnectWiFi(true);
//   fbdo.setResponseSize(4096);

//   // Assign the callback function for the long running token generation task */
//   config.token_status_callback = tokenStatusCallback; //see addons/TokenHelper.h

//   // Assign the maximum retry of token generation
//   config.max_token_generation_retry = 5;

//   // Initialize the library with the Firebase authen and config
//   Firebase.begin(&config, &auth);

//   // Getting the user UID might take a few seconds
//   Serial.println("Getting User UID");
//   while ((auth.token.uid) == "") {
//     Serial.print('.');
//     delay(1000);
//   }
//   // Print user UID
//   uid = auth.token.uid.c_str();
//   Serial.print("User UID: ");
//   Serial.println(uid);

//   // Update database path
//   databasePath = "/UsersData/" + uid + "/readings";
// }

// void loop(){

//   // Send new readings to database
//   if (Firebase.ready() && (millis() - sendDataPrevMillis > timerDelay || sendDataPrevMillis == 0)){
//     sendDataPrevMillis = millis();

//     //Get current timestamp
//     timestamp = getTime();
//     Serial.print ("time: ");
//     Serial.println (timestamp);

//     parentPath= databasePath + "/" + String(timestamp);

//     json.set(tempPath.c_str(), String(Serial.read()));
//     json.set(humPath.c_str(), String(Serial.read()));
//     json.set(presPath.c_str(), String(Serial.read()));
//     json.set(timePath, String(timestamp));
//     Serial.printf("Set json... %s\n", Firebase.RTDB.setJSON(&fbdo, parentPath.c_str(), &json) ? "ok" : fbdo.errorReason().c_str());
//   }
// }
