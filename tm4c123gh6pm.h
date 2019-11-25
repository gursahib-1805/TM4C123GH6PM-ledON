//----------------------------------------------------------------------------
// FILE         : TM4C123GH6PM.H
// FILE VERSION : 1.0
// PROGRAMMER   : GURSAHIB SINGH
//----------------------------------------------------------------------------
// REVISION HISTORY
//----------------------------------------------------------------------------
//
// 1.0, 2019-11-25, GURSAHIB SINGH
//   - Initial release
//
//----------------------------------------------------------------------------
// INCLUSION LOCK
//----------------------------------------------------------------------------

#ifndef TM4C123GH6PM_H_
#define TM4C123GH6PM_H_

//----------------------------------------------------------------------------
// CONSTANTS
//----------------------------------------------------------------------------
#define HWREG(x)                (*((volatile uint32_t*)(x)))

#define SYSCTL_RCGCGPIO         0x400FE608          //GPIO Run Mode Clock Gating Control Register Address

#define GPIO_PORTF_BASE         0x40025000          // GPIO PORTF Base Register Address
#define GPIO_O_DATA             0x00000000          // Data Register Offset
#define GPIO_O_DEN              0x0000051C          // Digital Enable Register Offset
#define GPIO_O_DIR              0x00000400          // Direction Register Offset

#endif /* TM4C123GH6PM_H_ */

//----------------------------------------------------------------------------
// END TM4C123GH6PM.H
//----------------------------------------------------------------------------
