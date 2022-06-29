#include <devices.h>
#include <ArduinoLog.h>

devices::devices() {
    Log.begin(LOG_LEVEL_VERBOSE, &Serial);
    Log.notice(F(CR "******************************************" CR));                     // Info string with Newline
    Log.notice(  "***          Logging example                " CR);                       // Info string in flash memory
    Log.notice(F("******************* ")); Log.notice("*********************** " CR);      // two info strings without newline will end up on same line
}

devices::~devices() {

}