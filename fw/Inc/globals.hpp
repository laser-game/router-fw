#ifndef __GLOBALS_INLUDED__
#define __GLOBALS_INLUDED__

#include "stm32f4xx_hal.h"
#include "hm-trp.hpp"
#include "usb.hpp"

using namespace std;

class Router
{
private:
    Router(){ };
public:
    static Router * instance();
    HMTRP *hmtrp;
    USB *usb;
    void led(uint8_t byte);
};

extern Router *router;

#endif // ifndef __GLOBALS_INLUDED__
