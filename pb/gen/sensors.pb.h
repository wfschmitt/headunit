/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.8-dev at Sat Dec  3 21:39:03 2016. */

#ifndef PB_HU_SENSORS_PB_H_INCLUDED
#define PB_HU_SENSORS_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _HU_SensorEvent {
    pb_callback_t nightMode;
/* @@protoc_insertion_point(struct:HU_SensorEvent) */
} HU_SensorEvent;

typedef struct _HU_SensorEvent_DayNightMode {
    bool isNight;
/* @@protoc_insertion_point(struct:HU_SensorEvent_DayNightMode) */
} HU_SensorEvent_DayNightMode;

/* Default values for struct fields */

/* Initializer values for message structs */
#define HU_SensorEvent_init_default              {{{NULL}, NULL}}
#define HU_SensorEvent_DayNightMode_init_default {0}
#define HU_SensorEvent_init_zero                 {{{NULL}, NULL}}
#define HU_SensorEvent_DayNightMode_init_zero    {0}

/* Field tags (for use in manual encoding/decoding) */
#define HU_SensorEvent_nightMode_tag             10
#define HU_SensorEvent_DayNightMode_isNight_tag  1

/* Struct field encoding specification for nanopb */
extern const pb_field_t HU_SensorEvent_fields[2];
extern const pb_field_t HU_SensorEvent_DayNightMode_fields[2];

/* Maximum encoded size of messages (where known) */
/* HU_SensorEvent_size depends on runtime parameters */
#define HU_SensorEvent_DayNightMode_size         2

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SENSORS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
