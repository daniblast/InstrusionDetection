/*******************************************************************************
 *
 * Module       : keypad.c
 * Description  : Keypad configuration
 * Tool Chain   : 4x4 Keypad
 * Platform     : Code Composer Studio
 * History      :
 * Author       : Daniel Correia, Romain Ogée, Louis Cotillard - Embedded Systems Group 4
 * Notes        :
 *
 *******************************************************************************/

#ifndef KEYPAD_H_
#define KEYPAD_H_



#endif /* KEYPAD_H_ */

// include the library:
#include <Keypad.h>
#include <LiquidCrystal.h>

// Associating LCD interface pins with the TM4C123GXL pins related, to initialize the library
const int rs = 23, e = 24, d4 = 25, d5 = 26, d6 = 27, d7 = 28;
//        PD_0     PD_1    PD_2     PD_3      PD_6     PD_7
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);
const int ROW_NUM = 4; // There are four rows
const int COLUMN_NUM = 4; // There are four columns
char keys[ROW_NUM][COLUMN_NUM] = {
  {'1','2','3', 'F'}, // Presenting the keypad with its rows and columns
  {'4','5','6', 'E'},
  {'7','8','9', 'D'},
  {'A','0','B', 'C'}
};

byte pin_rows[ROW_NUM] = {3, 4, 5, 6}; // Connecting pins of the keypad to the row
byte pin_column[COLUMN_NUM] = {7, 8, 9, 10};  // Connecting pins of the keypad to the column

Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup() {
  Serial.begin(9600);
  // Setting up the number of rows and columns of the LCD:
  lcd.begin(20, 1);




}
