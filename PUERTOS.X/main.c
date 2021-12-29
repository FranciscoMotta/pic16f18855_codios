/*
 * File:   main.c
 * Author: jmott
 *
 * Created on 27 de diciembre de 2021, 04:28 PM
 */


// CONFIGURACIONES

// PIC16F18855 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FEXTOSC = OFF    // External Oscillator mode selection bits (Oscillator not enabled)
#pragma config RSTOSC = HFINT1  // Power-up default value for COSC bits (HFINTOSC (1MHz))
#pragma config CLKOUTEN = OFF   // Clock Out Enable bit (CLKOUT function is disabled; i/o or oscillator function on OSC2)
#pragma config CSWEN = ON       // Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable bit (FSCM timer enabled)

// CONFIG2
#pragma config MCLRE = ON       // Master Clear Enable bit (MCLR pin is Master Clear function)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config LPBOREN = OFF    // Low-Power BOR enable bit (ULPBOR disabled)
#pragma config BOREN = ON       // Brown-out reset enable bits (Brown-out Reset Enabled, SBOREN bit is ignored)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (VBOR) set to 1.9V on LF, and 2.45V on F Devices)
#pragma config ZCD = OFF        // Zero-cross detect disable (Zero-cross detect circuit is disabled at POR.)
#pragma config PPS1WAY = ON     // Peripheral Pin Select one-way control (The PPSLOCK bit can be cleared and set only once in software)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable bit (Stack Overflow or Underflow will cause a reset)

// CONFIG3
#pragma config WDTCPS = WDTCPS_31// WDT Period Select bits (Divider ratio 1:65536; software control of WDTPS)
#pragma config WDTE = ON        // WDT operating mode (WDT enabled regardless of sleep; SWDTEN ignored)
#pragma config WDTCWS = WDTCWS_7// WDT Window Select bits (window always open (100%); software control; keyed access not required)
#pragma config WDTCCS = SC      // WDT input clock selector (Software Control)

// CONFIG4
#pragma config WRT = OFF        // UserNVM self-write protection bits (Write protection off)
#pragma config SCANE = available// Scanner Enable bit (Scanner module is available for use)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (Low Voltage programming enabled. MCLR/Vpp pin function is MCLR.)

// CONFIG5
#pragma config CP = OFF         // UserNVM Program memory code protection bit (Program Memory code protection disabled)
#pragma config CPD = OFF        // DataNVM code protection bit (Data EEPROM code protection disabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.


#include <xc.h>

/*DEFINES*/

#define MHZ_1 0B000
#define MHZ_2 0B001
#define MHZ_4 0B010
#define MHZ_8 0B011
#define MHZ_12 0B100
#define MHZ_16 0B101
#define MHZ_32 0B110
#define RESERVED 0B111

/*SUBFUNCIONES*/
void init_oscilador_high_freq(char freq);

/*PRINCIPAL*/
void main(void) {
    /*CONFIGURACIONES DEL OSCILADOR*/
    init_oscilador_high_freq(MHZ_4);

    /*CONFIGURACIÓN DEL PIN DE SALIDA*/
    TRISAbits.TRISA3 = 0; // Pin A0 como salida

    /*LIMPIAMOS EL PUERTO*/
    LATA = 0X00;
    
    /*COLOCAMOS UN ESTADO AL PIN A0*/
    LATAbits.LATA3 = 1; // Pin A0 encendido
    
    while (1);
    return;
}

void init_oscilador_high_freq(char freq) {
    OSCCON1 = 0x62; //  HFINTOSC con div 4
    OSCCON2 = 0X00; // Switching no desactivador
    OSCFRQ = freq; // Frecuencia inicial de 4Mhz
}
