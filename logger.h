enum {
    LOGGER_LEVEL_EMERGENCY,
    LOGGER_LEVEL_ALERT,
    LOGGER_LEVEL_ERROR,
    LOGGER_LEVEL_WARNING,
    LOGGER_LEVEL_NOTICE,
    LOGGER_LEVEL_INFO,
    LOGGER_LEVEL_DEBUG
};

extern unsigned loggerLevel;

#define EMERGENCY(formatstring, ...) \
    { if (loggerLevel >= LOGGER_LEVEL_EMERGENCY) \
        { printf("\x1b[91m[%12.12s][EMERGENCY]\x1b[39m " formatstring "\r\n", LOGGER_MODULE_NAME, ##__VA_ARGS__); } }

#define ALERT(formatstring, ...) \
    { if (loggerLevel >= LOGGER_LEVEL_ALERT) \
        { printf("\x1b[35m[%12.12s][ALERT    ]\x1b[39m " formatstring "\r\n", LOGGER_MODULE_NAME, ##__VA_ARGS__); } }

#define ERROR(formatstring, ...) \
    { if (loggerLevel >= LOGGER_LEVEL_ERROR) \
        { printf("\x1b[31m[%12.12s][ERROR    ]\x1b[39m " formatstring "\r\n", LOGGER_MODULE_NAME, ##__VA_ARGS__); } }

#define WARNING(formatstring, ...) \
    { if (loggerLevel >= LOGGER_LEVEL_WARNING) \
        { printf("\x1b[32m[%12.12s][WARNING  ]\x1b[39m " formatstring "\r\n", LOGGER_MODULE_NAME, ##__VA_ARGS__); } }

#define NOTICE(formatstring, ...) \
    { if (loggerLevel >= LOGGER_LEVEL_NOTICE) \
        { printf("\x1b[33m[%12.12s][NOTICE   ]\x1b[39m " formatstring "\r\n", LOGGER_MODULE_NAME, ##__VA_ARGS__); } }

#define INFO(formatstring, ...) \
    { if (loggerLevel >= LOGGER_LEVEL_INFO) \
        { printf("\x1b[36m[%12.12s][INFO     ]\x1b[39m " formatstring "\r\n", LOGGER_MODULE_NAME, ##__VA_ARGS__); } }

#define DEBUG(formatstring, ...) \
    { if (loggerLevel >= LOGGER_LEVEL_DEBUG) \
        { printf("\x1b[32m[%12.12s][DEBUG    ]\x1b[39m " formatstring "\r\n", LOGGER_MODULE_NAME, ##__VA_ARGS__); } }
