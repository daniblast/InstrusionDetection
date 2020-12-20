/*******************************************************************************
 *
 * Module       : main.c
 * Description  : System initialisation
 * Tool Chain   : Tiva TM4C123G Launchpad Board
 * Platform     : Code Composer Studio
 * History      :
 * Author       : Daniel Correia, Romain Ogée, Louis Cotillard - Embedded Systems Group 4
 * Notes        : Refer to the Tiva Family documentation and to http://groups.ist.utl.pt/~rsense.daemon/SisEmb/Intrusion%20Detector/
 *
 *******************************************************************************/

#include <stdbool.h>
#include <stdint.h>
#include <lcd.h>

#include "driverlib/sysctl.h"

int main(void) {

        SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);

        LCD_init();

        while (1) {
            LCD_Print("Hello World!", "...................."); //Print 2 lines

            SysCtlDelay(80000000/3); //Delay
            LCD_Clear();

            LCD_PrintLn(0, "Embedded");
            SysCtlDelay(8000000/3); //Delay

            LCD_PrintLn(1, "Systems");

            SysCtlDelay(80000000/3); //Delay
            LCD_Clear();
        }

}
