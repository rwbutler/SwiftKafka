#ifndef rdkafka_shim_h
#define rdkafka_shim_h
#ifdef __APPLE__ && __x86_64__
#include "/usr/local/include/librdkafka/rdkafka.h"
#elif __APPLE__ && __aarch64__
#include "/opt/homebrew/include/librdkafka/rdkafka.h"
#else
#include "/usr/include/librdkafka/rdkafka.h"
#endif
#endif
