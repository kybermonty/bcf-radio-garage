#ifndef _APPLICATION_H
#define _APPLICATION_H

#ifndef FIRMWARE
#define FIRMWARE "garage-controller"
#endif

#ifndef VERSION
#define VERSION "1.0"
#endif

#define LED_STRIP_COUNT 144
#define LED_STRIP_TYPE 3

#include <bcl.h>

typedef struct
{
    uint8_t channel;
    float value;
    bc_tick_t next_pub;

} event_param_t;

typedef struct
{
    bc_tag_temperature_t self;
    event_param_t param;

} temperature_tag_t;

typedef struct
{
    bc_tag_humidity_t self;
    event_param_t param;

} humidity_tag_t;

typedef struct
{
    bc_tag_lux_meter_t self;
    event_param_t param;

} lux_meter_tag_t;

#endif
