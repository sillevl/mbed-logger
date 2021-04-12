# Serial Logger/Debugger for mbed

```cpp
#include "logger.h"

// ...

#define LOGGER_MODULE_NAME "DEMO"
unsigned loggerLevel = LOGGER_LEVEL_DEBUG;

// ...

EMERGENCY("emergency");
ALERT("alert");
ERROR("error");
WARNING("warning");
NOTICE("notice");
INFO("info");
DEBUG("notice");
```

## Example output

![Example output](./img/example_output.png)