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

// get/set D2 aliases
#define D2_TRIS                 TRISAbits.TRISA0
#define D2_LAT                  LATAbits.LATA0
#define D2_PORT                 PORTAbits.RA0
#define D2_WPU                  WPUAbits.WPUA0
#define D2_OD                   ODCONAbits.ODCA0
#define D2_ANS                  ANSELAbits.ANSA0
#define D2_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define D2_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define D2_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define D2_GetValue()           PORTAbits.RA0
#define D2_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define D2_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define D2_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define D2_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define D2_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define D2_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define D2_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define D2_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set D3 aliases
#define D3_TRIS                 TRISAbits.TRISA1
#define D3_LAT                  LATAbits.LATA1
#define D3_PORT                 PORTAbits.RA1
#define D3_WPU                  WPUAbits.WPUA1
#define D3_OD                   ODCONAbits.ODCA1
#define D3_ANS                  ANSELAbits.ANSA1
#define D3_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define D3_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define D3_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define D3_GetValue()           PORTAbits.RA1
#define D3_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define D3_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define D3_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define D3_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define D3_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define D3_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define D3_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define D3_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS                 TRISAbits.TRISA2
#define D4_LAT                  LATAbits.LATA2
#define D4_PORT                 PORTAbits.RA2
#define D4_WPU                  WPUAbits.WPUA2
#define D4_OD                   ODCONAbits.ODCA2
#define D4_ANS                  ANSELAbits.ANSA2
#define D4_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define D4_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define D4_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define D4_GetValue()           PORTAbits.RA2
#define D4_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define D4_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define D4_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define D4_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define D4_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define D4_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define D4_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS                 TRISAbits.TRISA3
#define D5_LAT                  LATAbits.LATA3
#define D5_PORT                 PORTAbits.RA3
#define D5_WPU                  WPUAbits.WPUA3
#define D5_OD                   ODCONAbits.ODCA3
#define D5_ANS                  ANSELAbits.ANSA3
#define D5_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define D5_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define D5_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define D5_GetValue()           PORTAbits.RA3
#define D5_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define D5_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define D5_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define D5_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define D5_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define D5_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define D5_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

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