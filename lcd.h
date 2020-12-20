/*******************************************************************************
 *
 * Module       : lcd.h
 * Description  : Initialise the LCD and display
 * Tool Chain   : HITACHI HD44780
 * Platform     : Code Composer Studio
 * History      :
 * Author       :
 * Notes        : Refer to the HD44780 documentation
 *                Daniel Correia, Romain Ogée, Louis Cotillard - Embedded Systems Group 4
 *
 *******************************************************************************/

#ifndef LCD_H_
#define LCD_H_

#define LCDPORT         GPIO_PORTD_BASE
#define LCDPORTENABLE   SYSCTL_PERIPH_GPIOD
#define RS              GPIO_PIN_0
#define E               GPIO_PIN_1
#define D4              GPIO_PIN_2
#define D5              GPIO_PIN_3
#define D6              GPIO_PIN_6
#define D7              GPIO_PIN_7


void LCD_init(void);                                //LCD initialization
void LCD_Command(unsigned char c);                  //Send command
void LCD_Show(unsigned char d);                     //Show a char

void LCD_Clear(void);                               //Clear the screen
void LCD_Print(char *s, char *d);                   //Print 2 lines
void LCD_PrintLn(char i, char *s);                  //Print specific line
void LCD_PrintJustify(char i, char *s, char *d);    //Print specific line floated left and floated right text
void LCD_Cursor(char x, char y);                    //Set cursor

#endif /* LCD_H_ */
