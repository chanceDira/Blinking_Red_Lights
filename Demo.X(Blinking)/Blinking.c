/*
 * File:   Blinking.c
 * Author: PANEL TECH
 *
 * Created on July 18, 2021, 1:01 AM
 */

// CONFIG
#pragma config FOSC = EXTRC     // Oscillator Selection bits (RC oscillator)
#pragma config WDTE = ON        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 8000000
void main(void) {
//    TRISD=0b00000000;
//    while(1){
//         PORTDbits.RD0=1;
//        __delay_ms(1000);
//        
//        PORTDbits.RD0=0;
//        __delay_ms(1000);
//    }
    
    TRISD = 0x00;
    PORTD = 0x00; // port d

while (1)
{
	PORTDbits.RD0 = 1;
	__delay_ms(1000);
	PORTDbits.RD0 = 0;

    PORTDbits.RD2 = 1;
	__delay_ms(1000);
	PORTDbits.RD2 = 0;
    
	PORTDbits.RD1 = 1;
	__delay_ms(1000);
	PORTDbits.RD1 = 0;


//	PORTDbits.RD0 = 1;
//	__delay_ms(2000);
//	PORTDbits.RD0 = 0;
} 
    
         
    
    return;
}
