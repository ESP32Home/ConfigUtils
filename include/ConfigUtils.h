#include <ArduinoJson.h>

bool load_config(JsonDocument &config,bool verbose=false);
bool save_config(JsonDocument &config);

bool load_json(JsonDocument &config,const char* FileName,bool verbose=false);
bool save_json(JsonDocument &config,const char* FileName);

void timelog(String Text);
