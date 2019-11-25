/*
 * tm4c123gh6pm.h
 *
 *  Created on: Nov 25, 2019
 *  Author: Gursahib Singh
 */
#ifndef TM4C123GH6PM_H_
#define TM4C123GH6PM_H_

#define HWREG(x)                (*((volatile uint32_t*)(x)))

#define SYSCTL_RCGCGPIO         0x400FE608          //GPIO Run Mode Clock Gating Control Register Address

#define GPIO_PORTF_BASE         0x40025000          // GPIO PORTF Base Register Address
#define GPIO_O_DATA             0x00000000          // Data Register Offset
#define GPIO_O_DEN              0x0000051C          // Digital Enable Register Offset
#define GPIO_O_DIR              0x00000400          // Direction Register Offset

#define NVIC_ST_CTRL    0xE000E010                  // SysTick Control and Status Register
#define NVIC_ST_RELOAD  0xE000E014                  // SysTick Reload Register
#define NVIC_ST_CURRENT 0xE000E018                  // SysTick Current Register

#endif /* TM4C123GH6PM_H_ */
