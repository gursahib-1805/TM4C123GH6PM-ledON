#include <stdint.h>
#include "tm4c123gh6pm.h"

void main(void)
{
    HWREG(SYSCTL_RCGCGPIO) |= 0x20; // Enable PORTF Clock
    HWREG(GPIO_PORTF_BASE + GPIO_O_DEN) |= 0x02; // Enable PF1 as a Digital Signal
    HWREG(GPIO_PORTF_BASE + GPIO_O_DIR) |= 0x02; // Enable PF1 as an output

    while(1)
    {
        HWREG( GPIO_PORTF_BASE + GPIO_O_DATA + (0x02 << 2 ) ) = 0x02;

    }
}
