#include "hardware/pwm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"
#include "hardware/clocks.h"
#include "ws2812.pio.h"
#include <ctype.h>
#include "pico/binary_info.h"
#include "hardware/i2c.h"
#include "pico/time.h"
#include "hardware/gpio.h"
#include "hardware/adc.h"