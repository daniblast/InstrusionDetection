#ifndef lcd_h_
#define lcd_h_


void Lcd_Port(char a);                              
void Lcd_Cmd(char a);                               

void Lcd_Clear(void);                               
void Lcd_Set_Cursor(char a, char b);                
void Lcd_Init(void);
void Lcd_Write_Char(char a);
void Lcd_Write_String(const char *a);
void Lcd_Shift_Right(void);
void Lcd_Shift_Left(void);
void Lcd_Write_Integer(int v);
void Lcd_Write_Float(float f);

#endif /* lcd_h_ */