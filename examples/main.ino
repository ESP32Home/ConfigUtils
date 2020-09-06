#include <Arduino.h>
#include <ArduinoJson.h>

#include <ConfigUtils.h>

DynamicJsonDocument config(5*1024);//5 KB

void setup() {

    Serial.begin(115200);

    //required 'data' folder with 'config.json'
    //flash the file system with the platformio command :
    //>pio run -t uploadfs
    load_json(config,"/config.json");
    //now you can configure any component with json
    //below just a pretty print
    serializeJsonPretty(config, Serial);
}

void loop() {
  delay(10000);
}
