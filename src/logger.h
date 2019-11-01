#ifndef _LOGGER_H_
#define _LOGGER_H_

#define _LOG_LEVEL 4    // 0~4
#define DEBUG_ENABLE 1  // 0: off 1: on

#define LEVEL_FATAL 0
#define LEVEL_ERROR 1
#define LEVEL_WARNING 2
#define LEVEL_INFO 3
#define LEVEL_DEBUG 4

#define log(level, ...) \
    if (DEBUG_ENABLE) {\
        if(level <= _LOG_LEVEL) { \
            printf("[%s, %d] ", __FUNCTION__, __LINE__); \
            printf( __VA_ARGS__); \
        } \
    } \

#define LOG_FATAL(...) log(LEVEL_FATAL, __VA_ARGS__)
#define LOG_ERROR(...) log(LEVEL_ERROR, __VA_ARGS__)
#define LOG_WARNING(...) log(LEVEL_WARNING, __VA_ARGS__)
#define LOG_INFO(...) log(LEVEL_INFO, __VA_ARGS__)
#define LOG_DEBUG(...) log(LEVEL_DEBUG, __VA_ARGS__)


#endif


