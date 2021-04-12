// #define LOGGER_MODULE_NAME "<YourModuleName>"

// -- within a header file named something like trace.h --
enum {
    LOGGER_LEVEL_EMERGENCY,
    LOGGER_LEVEL_ALERT,
    LOGGER_LEVEL_ERROR,
    LOGGER_LEVEL_WARNING,
    LOGGER_LEVEL_NOTICE,
    LOGGER_LEVEL_INFO,
    LOGGER_LEVEL_DEBUG
};
/* each time we compile or run the program,
* we determine what the trace level is.
* this parameter is available to the macros
* without being explicitly passed to them*/

extern unsigned loggerLevel;

// ...

// Our first macro prints if the trace level we selected
// is LOGGER_LEVEL_DEBUG or above.
// The traceLevel is used in the condition
// and the regular parameters are used in the action that follows the IF


#define EMERGENCY(formatstring, ...) \
    { if (traceLevel <= LOGGER_LEVEL_EMERGENCY) \
        { printf("[%12.12s][EMERGENCY] " formatstring "\r\n", LOGGER_MODULE_NAME, __VA_ARGS__); } }

#define ALERT(formatstring, ...) \
    { if (traceLevel <= LOGGER_LEVEL_ALERT) \
        { printf("[%12.12s][ALERT] " formatstring "\r\n", LOGGER_MODULE_NAME, __VA_ARGS__); } }

#define ERROR(formatstring, ...) \
    { if (traceLevel <= LOGGER_LEVEL_ERROR) \
        { printf("[%12.12s][ERROR] " formatstring "\r\n", LOGGER_MODULE_NAME, __VA_ARGS__); } }

#define WARNING(formatstring, ...) \
    { if (traceLevel <= LOGGER_LEVEL_WARNING) \
        { printf("[%12.12s][WARNING] " formatstring "\r\n", LOGGER_MODULE_NAME, __VA_ARGS__); } }

#define NOTICE(formatstring, ...) \
    { if (traceLevel <= LOGGER_LEVEL_NOTICE) \
        { printf("[%12.12s][NOTICE] " formatstring "\r\n", LOGGER_MODULE_NAME, __VA_ARGS__); } }

#define INFO(formatstring, ...) \
    { if (traceLevel <= LOGGER_LEVEL_INFO) \
        { printf("[%12.12s][INFO] " formatstring "\r\n", LOGGER_MODULE_NAME, __VA_ARGS__); } }

#define DEBUG(formatstring, ...) \
    { if (traceLevel <= LOGGER_LEVEL_DEBUG) \
        { printf("[%12.12s][DEBUG] " formatstring "\r\n", LOGGER_MODULE_NAME, __VA_ARGS__); } }






// #define LOG(x, ...) \
//     { printf("\x1b[34m%12.12s: \x1b[39m"x"\x1b[39;49m\r\n", \
//     LOGGER_MODULE_NAME, ##__VA_ARGS__); fflush(stdout); }
// #define WARN(x, ...) \
//     { printf("\x1b[34m%12.12s: \x1b[33m"x"\x1b[39;49m\r\n", \
//     LOGGER_MODULE_NAME, ##__VA_ARGS__); fflush(stdout); }