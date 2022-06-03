#include <Arduino.h>

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

// #include<SPI.h>
// #include<Wire.h>
// void setup() {
// // Open serial communications and wait for port to open:
// Serial.begin(115200);
// while (!Serial) {
// ; // wait for serial port to connect. Needed for native USB port only
// }
// }

// bool isDec = false;
// uint8 dec = 3;
// uint8 decCount = 0;

// void loop() {
//   byte ch; // run over and over
//   String chStr;
//   if (Serial.available()) {
    
//     ch = Serial.read();
//     if (ch == 59) return; // skip ; ASCII character
//     switch (ch)
//     {
//     case 48:
//       chStr = '0';
//       break;
//     case 49:
//       chStr = '1';
//       break;
//     case 50:
//       chStr = '2';
//       break;
//     case 51:
//       chStr = '3';
//       break;
//     case 52:
//       chStr = '4';
//       break;
//     case 53:
//       chStr = '5';
//       break;
//     case 54:
//       chStr = '6';
//       break;
//     case 55:
//       chStr = '7';
//       break;
//     case 56:
//       chStr = '8';
//       break;
//     case 57:
//       chStr = '9';
//       break;
//     case 46:
//       isDec = true;
//       chStr = '.';
//       break;
//     case 45:
//       chStr = '-';
//       break;
//     default:
//       break;
//     }
//     // for (int i=0, i<15, i++){
//     if (isDec)
//     {
//       for (int j=0; j<3; i++)
//       {
//       String chStr = Serial.read();
//       }
//     }
    
    
//     // }
//   Serial.print(chStr);
//   }
// }

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
// const char *password = "Thinkalpha3"; //Enter your WIFI password

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

// #include <SPI.h>
// #include <Wire.h>
// #include "TRIGGER_WIFI.h"               /*Includes ESP8266WiFi.h and WiFiClientSecure.h, just have these two libraries downloaded before*/
// #include "TRIGGER_GOOGLESHEETS.h"       /*Library file for Google Sheets, has to be used after Wi-Fi Client Secure declaration, here everything is in Trigger_WIFI.h, so using it after Trigger_WIFI.h*/ 

// /**********Google Sheets Definations***********/
// char column_name_in_sheets[][7] = {"value1","value2","value3"};
//                         /*1. The Total no of column depends on how many value you have created in Script of Sheets;2. It has to be in order as per the rows decided in google sheets*/
// String Sheets_GAS_ID = "AKfycbz4oq_BH3m8PQfFNRJguIFWP6bn1tsdGQBsy86hgxEtNFHr3fxuhLuzMU3uYaIcJL73";                                         /*This is the Sheets GAS ID, you need to look for your sheets id*/
// int No_of_Parameters = 3;                                                                /*Here No_of_Parameters decides how many parameters you want to send it to Google Sheets at once, change it according to your needs*/
// /*********************************************/

// void setup() 
// {
//   Serial.begin(115200);
//   while (!Serial);

//   WIFI_Connect(ssid,password);                                                     /*Provide you Wi-Fi SSID and password to connect to Wi-Fi*/
//   Google_Sheets_Init(column_name_in_sheets, Sheets_GAS_ID, No_of_Parameters );         /*Sets the column name for Google Sheets, the GAS ID, and the No of Parameter we want to send*/        
// }

// void loop() 
// {
//   float a[] = {1,2};
//   float b[] = {2,3};
//   float c[] = {3,4};                           /*Demo values that has to be sent to google sheets, you can use sensor values*/

//   Data_to_Sheets(No_of_Parameters,  a,  b, c);         /*1. This function accepts multiple float parameter, here No_of_Parameters decides how many parameters you want to send to Google Sheets; 2. The values sent should be in order as per the column in Google Sheets*/

//   Serial.println();
//   delay(10000);                                       /*10 Sec Delay, Here 10 second delay is just used so that we can see the data pushed to sheets one by one
//                                                         There is nothing like a minimum delay between two data push*/
// }



// #include <Arduino.h>
// #include <ESP8266WiFi.h>
// #include <Firebase_ESP_Client.h>
// #include <Wire.h>
// #include <NTPClient.h>
// #include <WiFiUdp.h>

// // Provide the token generation process info.
// #include "addons/TokenHelper.h"
// // Provide the RTDB payload printing info and other helper functions.
// #include "addons/RTDBHelper.h"

// // Insert your network credentials
// #define WIFI_SSID "ThinkAlpha3"
// #define WIFI_PASSWORD "Thinkalpha3"

// // Insert Firebase project API Key
// #define API_KEY "AIzaSyCxnuZF6pkHTwT0wFW_G76DKiZqW9ZYMF4"

// // Insert Authorized Email and Corresponding Password
// #define USER_EMAIL "khoi.nguyenq320@gmail.com"
// #define USER_PASSWORD "nSTTe7Ba2TDLXew"

// // Insert RTDB URLefine the RTDB URL
// #define DATABASE_URL "https://readgait-default-rtdb.asia-southeast1.firebasedatabase.app/"

// // Define Firebase objects
// FirebaseData fbdo;
// FirebaseAuth auth;
// FirebaseConfig config;

// // Variable to save USER UID
// String uid;

// // Database main path (to be updated in setup with the user UID)
// String databasePath;
// // Database child nodes
// String rPath = "/roll";
// String pPath = "/pitch";
// String yPath = "/yaw";
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

//     json.set(rPath.c_str(), String(Serial.read()));
//     json.set(pPath.c_str(), String(Serial.read()));
//     json.set(yPath.c_str(), String(Serial.read()));
//     json.set(timePath, String(timestamp));
//     Serial.printf("Set json... %s\n", Firebase.RTDB.setJSON(&fbdo, parentPath.c_str(), &json) ? "ok" : fbdo.errorReason().c_str());
//   }
// }

#include<iostream>
#include<stdint.h>
#include<string>
#include<Wire.h>
#include<EthernetClient.h> //Uncomment this library to work with ESP8266
#include<ESP8266WiFi.h> //Uncomment this library to work with ESP8266
using std::byte;
using std::string;
using std::to_string;

char jsonBuffer[500] = "[";

const char ssid[] = "Shiba Home"; //  Your network SSID (name)
const char pass[] = "wifihuroi"; // Your network password
WiFiClient client; // Initialize the WiFi client library

const char server[] = "api.thingspeak.com"; // ThinkSpeak Server
const uint8_t nDec = 3;
const uint8_t nParams = 3;
uint8_t nCount = 0;
string numStr[nParams] = {};

/* Collect data once every 15 seconds and post data to ThingSpeak channel once every 2 minutes */
unsigned long lastConnectionTime = 0; // Track the last connection time
unsigned long lastUpdateTime = 0; // Track the last update time
const unsigned long postingInterval = 5L * 1000L; // Post data every 1/6 minutes
const unsigned long updateInterval = 0.2L * 1000L; // Update once every 0.02 seconds

char readASCII(volatile byte ch)
{
    switch (ch)
        {
        case 48:
            return '0';
            break;
        case 49:
            return '1';
            break;
        case 50:
            return '2';
            break;
        case 51:
            return '3';
            break;
        case 52:
            return '4';
            break;
        case 53:
            return '5';
            break;
        case 54:
            return '6';
            break;
        case 55:
            return '7';
            break;
        case 56:
            return '8';
            break;
        case 57:
            return '9';
            break;
        case 45:
            return '-';
            break;
        case 46:
            return '.';
            break;
        default:
            return '\0';
            break;
        }
}

// Updates the ThingSpeakchannel with data
void httpRequest(char* jsonBuffer) {
  /* JSON format for data buffer in the API
   *  This examples uses the relative timestamp as it uses the "delta_t". You can also provide the absolute timestamp using the "created_at" parameter
   *  instead of "delta_t".
   *   "{\"write_api_key\":\"YOUR-CHANNEL-WRITEAPIKEY\",\"updates\":[{\"delta_t\":0,\"field1\":-60},{\"delta_t\":15,\"field1\":200},{\"delta_t\":15,\"field1\":-66}]
   */
  // Format the data buffer as noted above
  char data[500] = "{\"write_api_key\":\"GZHU353VO5AELV3X\",\"updates\":"; // Replace YOUR-CHANNEL-WRITEAPIKEY with your ThingSpeak channel write API key
  strcat(data,jsonBuffer);
  strcat(data,"}");
  // Close any connection before sending a new request
  client.stop();
  string data_length = to_string(strlen(data)+1); //Compute the data buffer length
  Serial.println(data);
  // POST data to ThingSpeak
  if (client.connect(server, 80)) {
    client.println("POST /channels/1710162/bulk_update.json HTTP/1.1"); // Replace YOUR-CHANNEL-ID with your ThingSpeak channel ID
    client.println("Host: api.thingspeak.com");
    client.println("User-Agent: mw.doc.bulk-update (Arduino ESP8266)");
    client.println("Connection: close");
    client.println("Content-Type: application/json");
    client.println(strcat((char*)"Content-Length: ",data_length.c_str()));
    client.println();
    client.println(data);
  }
  else {
    Serial.println("Failure: Failed to connect to ThingSpeak");
  }
  delay(250); //Wait to receive the response
  client.parseFloat();
  string resp = to_string(client.parseInt());
  Serial.println(strcat((char*)"Response code:",resp.c_str())); // Print the response code. 202 indicates that the server has accepted the response
  jsonBuffer[0] = '['; //Reinitialize the jsonBuffer for next batch of data
  jsonBuffer[1] = '\0';
  lastConnectionTime = millis(); //Update the last conenction time
}

// Updates the josnBuffer with data
void updatesJson(char* jsonBuffer){
  /* JSON format for updates paramter in the API
   *  This examples uses the relative timestamp as it uses the "delta_t". You can also provide the absolute timestamp using the "created_at" parameter
   *  instead of "delta_t".
   *   "[{\"delta_t\":0,\"field1\":-70},{\"delta_t\":3,\"field1\":-66}]"
   */
  // Format the jsonBuffer as noted above

  strcat(jsonBuffer,"{\"delta_t\":");
  unsigned long deltaT = (millis() - lastUpdateTime)/1000;
  size_t lengthT = String(deltaT).length();
  char temp[4];
  String(deltaT).toCharArray(temp,lengthT+1);
  strcat(jsonBuffer,temp);
  strcat(jsonBuffer,",");
  // long rssi = WiFi.RSSI(); 
  strcat(jsonBuffer, "\"field1\":");
  // lengthT = String(rssi).length();
  // String(rssi).toCharArray(temp,lengthT+1);
  strcat(jsonBuffer,"11");
  strcat(jsonBuffer,"},");
  // If posting interval time has reached 2 minutes, update the ThingSpeak channel with your data
  if (millis() - lastConnectionTime >=  postingInterval) {
        size_t len = strlen(jsonBuffer);
        Serial.println(len);
        jsonBuffer[len-1] = ']';
        httpRequest(jsonBuffer);
  }
  lastUpdateTime = millis(); // Update the last update time
}

void printWiFiStatus() {
  // Print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // Print your device IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // Print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}


void setup()
{
  Serial.begin(115200);
  // Attempt to connect to WiFi network
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    WiFi.begin(ssid, pass);  // Connect to WPA/WPA2 network. Change this line if using open or WEP network
    delay(10000);  // Wait 10 seconds to connect
  }
  Serial.println("Connected to wifi");
  // printWiFiStatus(); // Print WiFi connection information
}

void loop() {
  // If update time has reached 1 second, then update the jsonBuffer
  if (millis() - lastUpdateTime >=  updateInterval) {
    updatesJson(jsonBuffer);
  }
}

