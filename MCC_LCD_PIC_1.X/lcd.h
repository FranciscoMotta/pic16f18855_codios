/* 
 * File:   lcd.h
 * Author: dignal
 *
 * Created on July 14, 2020, 12:23 AM
 */

#ifndef LCD_H
#define	LCD_H

#include <xc.h>
#include "mcc_generated_files/device_config.h"

#define RS          LATBbits.LATB4    
#define EN          LATBbits.LATB5       
#define TRISRS      TRISBbits.TRISB4    
#define TRISEN      TRISBbits.TRISB5    
#define DATA_TRIS   TRISC               //TRIS DATA PORT
#define DATA_PORT   LATC                //LAT DATA PORT

/****** LCD Predefined Commands ******/
#define HOME_CMD                        0x02
#define FOURBIT_2LINE_5X7               0x28  //Function set -> 101000
#define DISP_ON_CURSOR_OFF_BLINK_OFF    0x0C  //Display ON/OFF Control -> 1100
#define INCREMENT_CURSOR_NOT_SHIFT      0x06  //Entry mode set -> 110

/* Display ON/OFF Control defines */
#define DON         0b00001111  /* Display on      */
#define DOFF        0b00001011  /* Display off     */
#define CURSOR_ON   0b00001111  /* Cursor on       */
#define CURSOR_OFF  0b00001101  /* Cursor off      */
#define BLINK_ON    0b00001111  /* Cursor Blink    */
#define BLINK_OFF   0b00001110  /* Cursor No Blink */

/* Function Set defines */
#define FOUR_BIT   0b00101100  /* 4-bit Interface               */
#define EIGHT_BIT  0b00111100  /* 8-bit Interface               */
#define LINE_5X7   0b00110000  /* 5x7 characters, single line   */
#define LINE_5X10  0b00110100  /* 5x10 characters               */
#define LINES_5X7  0b00111000  /* 5x7 characters, multiple line */

/* Cursor or Display Shift */
#define SHIFT_CUR_LEFT      0b00010000
#define SHIFT_CUR_RIGHT     0b00010100
#define SHIFT_DISP_LEFT     0b00011000
#define SHIFT_DISP_RIGHT    0b00011100

#define LINE_0	   0b10000000
#define NEXT_LINE  0b11000000

void lcd_init();
void lcd_putc(char c);
void lcd_cmd(char data);
void lcd_clear(void) ;
void lcd_home(void);
void lcd_print(char *data);
void lcd_goto(char x, char y);
void lcd_save_char(char addr, char c[]);
void en_pulse(void);


#endif	/* LCD_H */

