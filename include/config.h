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

