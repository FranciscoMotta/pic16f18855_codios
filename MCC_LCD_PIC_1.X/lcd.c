#include "lcd.h"

/*********************************************************************
 * Function:        void lcd_init(void)
 *
 * Overview:        LCD Initialize function. This function run the Funtion set config,
 *                  Display ON/OFF Control and Entry Mode set. Find more info in Hitachi
 *                  HD44780 Datasheet. Call this function API before LCD operation.
 *
 * Note:            Based on HD44780 datasheet and http://web.alfredstate.edu/faculty/weimandn/lcd/lcd_initialization/lcd_initialization_index.html
 ********************************************************************/
void lcd_init(void) 
{
    TRISRS = 0;     //RS pin as output
    TRISEN = 0;     //E  pin as output
    DATA_TRIS = 0x00;
    RS = 0;          
    EN = 0; 
    DATA_PORT = 0; 
    
    __delay_ms(120); //Power on reset delay

    //--------------------Reset procedure through software--------
    
    lcd_cmd(0x30);     //Function set instruction special case
    __delay_ms(5);     // delay > 4.1 ms 
    lcd_cmd(0x30);     //Second instance of the special case of Function set instruction
    __delay_us(120);   //delay > 100 us
    lcd_cmd(0x32);     //Third instance of the special case of Function set instruction
    __delay_us(120);   //delay > 100 us
    
    //--------------------Reset procedure through software ends---
    
    lcd_cmd(FOUR_BIT & LINES_5X7); //Real Function Set - 4-bit interface - 5x7 dots - multiple lines  
    __delay_us(60);                //delay > 53 us or check Busy Flag
    
    lcd_cmd(DOFF & CURSOR_OFF & BLINK_OFF);  //Display OFF
    __delay_us(60);                          //delay > 53 us or check Busy Flag
    
    lcd_clear();        //Clear Display DDRAM
    __delay_ms(4);      //delay > 3 ms or check Busy Flag
    
    //Cursor move/increment from left to right and display do not shift (I/D=1 and S=0)
    lcd_cmd(INCREMENT_CURSOR_NOT_SHIFT); //Entry mode set
    __delay_us(60);           //delay > 53 us or check Busy Flag
    
    //Display ON/OFF control entry
    lcd_cmd(DON & CURSOR_OFF & BLINK_OFF); //Display ON - Cursor OFF - Blink OFF
    __delay_us(60);                        //delay > 53 us or check Busy Flag
}


/*********************************************************************
 * Function:        void lcd_putc(char c)
 *
 * Input:           byte to transmit
 *
 * Overview:        Send to LCD a single byte in 4-bit operation
 *
 * Note:            None
 ********************************************************************/
void lcd_putc(char c){
    DATA_PORT = 0;
    RS = 1;
    DATA_PORT = c & 0xF0;
    en_pulse();
    DATA_PORT = ((c & 0x0F) << 4);
    en_pulse();
    __delay_us(50);

}

/*********************************************************************
 * Function:        void lcd_clear(void)
 *
 * Overview:        Clear LCD display
 *
 * Note:            None
 ********************************************************************/
void lcd_clear(void) {
    lcd_cmd(0x01);
}

/*********************************************************************
 * Function:        void lcd_home(void)
 *
 * Overview:        Move cursor to home
 *
 * Note:            None
 ********************************************************************/
void lcd_home(void) {
    lcd_cmd(0x02);
}

/*********************************************************************
 * Function:        void lcd_print(char *data)
 *
 * Input:           String to transmit
 *
 * Output:          None
 *
 * Overview:        Transmit a string to LCD
 *
 * Note:            None
 ********************************************************************/
void lcd_print(char *data) {
    while (*data)        //¿null ptr?
    {
        lcd_putc(*data); // Send byte to LCD
        data++;          // Increment buffer data
    }
}

/*********************************************************************
 * Function:        void lcd_goto(int x, int y)
 *
 * Input:           char x: column 
 *                  char y: row
 *
 * Overview:        Position cursor on the x and y position
 *
 * Note:            None
 ********************************************************************/
void lcd_goto(char x, char y) {
    char position;
    switch (y) {
        case 1: position = 0x80 | x;
            break;
        case 2: position = 0xC0 | x;
            break;
        default: position = 0x80 | x;
            break;
    }
    lcd_cmd(position);
}



/*********************************************************************
 * Function:        void lcd_cmd(char data)
 *
 * Input:           char data: command to transmit 
 *
 * Output:          None
 *
 * Overview:        Send a data in command mode to LCD
 *
 * Note:            RS pin -> 0 to entry in command mode
 ********************************************************************/
void lcd_cmd(char data) {
    RS = 0;
    DATA_PORT = data & 0xF0;
    en_pulse();
    DATA_PORT = ((data & 0x0F) << 4);
    en_pulse();
    __delay_ms(2);
}


/*********************************************************************
 * Function:        void en_pulse(void)
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        Generate a Enable pulse width by 1 us (1000 ns). 
 *                  todo: verify timing characteristics in data sheet.
 *
 * Note:            None
 ********************************************************************/
void en_pulse(void) {
    EN = 1;
    __delay_us(5);
    EN = 0;
    __delay_us(5);

}

/*********************************************************************
 * Function:        void lcd_save_char(char addr, char c)
 *
 * PreCondition:    None
 *
 * Input:           None
 *
 * Output:          None
 *
 * Side Effects:    None
 *
 * Overview:        None
 *
 * Note:            None
 ********************************************************************/
void lcd_save_char(char addr, char c[]) {
    int i;
    lcd_cmd(0x40 + (addr * 8));
    for (i = 0; i < 8; i++) {
        lcd_putc(c[i]);
    }
}
