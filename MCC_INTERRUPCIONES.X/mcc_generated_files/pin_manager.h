/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set VERDE aliases
#define VERDE_TRIS                 TRISAbits.TRISA0
#define VERDE_LAT                  LATAbits.LATA0
#define VERDE_PORT                 PORTAbits.RA0
#define VERDE_WPU                  WPUAbits.WPUA0
#define VERDE_OD                   ODCONAbits.ODCA0
#define VERDE_ANS                  ANSELAbits.ANSA0
#define VERDE_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define VERDE_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define VERDE_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define VERDE_GetValue()           PORTAbits.RA0
#define VERDE_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define VERDE_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define VERDE_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define VERDE_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define VERDE_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define VERDE_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define VERDE_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define VERDE_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set AMBAR aliases
#define AMBAR_TRIS                 TRISAbits.TRISA1
#define AMBAR_LAT                  LATAbits.LATA1
#define AMBAR_PORT                 PORTAbits.RA1
#define AMBAR_WPU                  WPUAbits.WPUA1
#define AMBAR_OD                   ODCONAbits.ODCA1
#define AMBAR_ANS                  ANSELAbits.ANSA1
#define AMBAR_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define AMBAR_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define AMBAR_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define AMBAR_GetValue()           PORTAbits.RA1
#define AMBAR_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define AMBAR_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define AMBAR_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define AMBAR_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define AMBAR_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define AMBAR_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define AMBAR_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define AMBAR_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set ROJO aliases
#define ROJO_TRIS                 TRISAbits.TRISA2
#define ROJO_LAT                  LATAbits.LATA2
#define ROJO_PORT                 PORTAbits.RA2
#define ROJO_WPU                  WPUAbits.WPUA2
#define ROJO_OD                   ODCONAbits.ODCA2
#define ROJO_ANS                  ANSELAbits.ANSA2
#define ROJO_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ROJO_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ROJO_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ROJO_GetValue()           PORTAbits.RA2
#define ROJO_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ROJO_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ROJO_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define ROJO_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define ROJO_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define ROJO_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define ROJO_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define ROJO_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RA3 aliases
#define IO_RA3_TRIS                 TRISAbits.TRISA3
#define IO_RA3_LAT                  LATAbits.LATA3
#define IO_RA3_PORT                 PORTAbits.RA3
#define IO_RA3_WPU                  WPUAbits.WPUA3
#define IO_RA3_OD                   ODCONAbits.ODCA3
#define IO_RA3_ANS                  ANSELAbits.ANSA3
#define IO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_RA3_GetValue()           PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_RA3_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define IO_RA3_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define IO_RA3_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define IO_RA3_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set S2 aliases
#define S2_TRIS                 TRISAbits.TRISA5
#define S2_LAT                  LATAbits.LATA5
#define S2_PORT                 PORTAbits.RA5
#define S2_WPU                  WPUAbits.WPUA5
#define S2_OD                   ODCONAbits.ODCA5
#define S2_ANS                  ANSELAbits.ANSA5
#define S2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define S2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define S2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define S2_GetValue()           PORTAbits.RA5
#define S2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define S2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define S2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define S2_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define S2_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define S2_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define S2_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/