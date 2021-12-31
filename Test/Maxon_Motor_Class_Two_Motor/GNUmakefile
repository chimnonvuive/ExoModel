# Library Directories
#LIBDIRS += -L/usr/lib

# Static Libraries
STATICLIBS += -lEposCmd

# Include Directories
#INCLUDEDIRS = -I./

all:: motor_control

motor_control: motor_control.cc cmaxonmotor.cc cmaxonmotor.h
	$(CC) $(INCLUDEDIRS) cmaxonmotor.cc -ldl -o $@ $< -lm $(LIBDIRS) $(STATICLIBS)

clean::
	rm -f *.o motor_control 

.PHONY: clean
