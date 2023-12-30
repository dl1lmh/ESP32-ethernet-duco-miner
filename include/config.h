// This is the config-file for Duino-Coin Miner with Ethernet
//
// Please do not modify other files!



/****************** Configure your Mining-Data *********************/

// Change the part in brackets to your Duino-Coin username
const char *DUCO_USER = "USERNAME";
// Change the part in brackets to your mining key (if you enabled it in the wallet)
const char* MINER_KEY = "MINING_KEY";
// Change the part in brackets if you want to set a custom miner name (use Auto to autogenerate, None for no name)
const char *RIG_IDENTIFIER = "ESP32-POE";


/****************** Configure your Network-Settings ****************/

//Choose your Network-Technology... Like to use LAN? Uncomment following line. Otherwise use WLAN
#define USE_LAN

//If you like to use WLAN, set your credentials here!
// Change the part in brackets to your WiFi name
const char *SSID = "WIFI_NAME";
// Change the part in brackets to your WiFi password
const char *WIFI_PASS = "WIFI_PASSWORD";

//Do you like to use static IP? Uncomment next line and set your params
// #define USE_STATIC_IP


/****************** Configure additional Hardware *******************/

// These Settings are optional! 

// Uncomment the line below if you wish to use a DHT sensor (Duino IoT beta)
//#define USE_DHT

// Uncomment the line below if you wish to use an AHT10 or AHT20 sensor (Duino IoT beta)
//#define USE_AHT

// Uncomment the line below if you wish to use an BMP280 sensor (Duino IoT beta)
//#define USE_BMP280

/* If you would like to use mqtt monitoring uncomment
   the ENABLE_MQTT defition line(#define ENABLE_MQTT).
   NOTE: enabling MQTT could slightly decrease hashrate */
//#define ENABLE_MQTT

// Change this to specify MQTT server (ip only - no prefixes)
const char *mqtt_server = "";
// Port mqtt server is listening at (default: 1883)
const int mqtt_port = 1883;

// If optimizations cause problems, change them to -O0 (the default)
#pragma GCC optimize ("-Ofast")

// #include "hwcrypto/sha.h" // Uncomment this line if you're using an older
// version of the ESP32 core and sha_parellel_engine doesn't work for you
#include "sha/sha_parallel_engine.h"  // Include hardware accelerated hashing library

/* If you're using the ESP32-CAM board or other board
  that doesn't support OTA (Over-The-Air programming)
  comment the ENABLE_OTA definition line (#define ENABLE_OTA)
   NOTE: enabling OTA support may decrease the hashrate */
 #define ENABLE_OTA

/* If you want to use the web dashboard uncomment the line below */
// #define WEB_DASHBOARD

/* If you don't want to use the Serial interface comment
  the ENABLE_SERIAL definition line (#define ENABLE_SERIAL)*/
#define ENABLE_SERIAL

// Change this if your board has built-in led on non-standard pin
#define LED_BUILTIN 2
