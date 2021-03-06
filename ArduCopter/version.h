#pragma once

#include "ap_version.h"

#define THISFIRMWARE "APM:Copter V3.5-mav2leds"
#define FIRMWARE_VERSION 3,5,0,FIRMWARE_VERSION_TYPE_DEV

#ifndef GIT_VERSION
#define FIRMWARE_STRING THISFIRMWARE
#else
#define FIRMWARE_STRING THISFIRMWARE " (" GIT_VERSION ")"
#endif
