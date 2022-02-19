/********************************************************
*                - GPIO_interface.h                          *                    
*                - Created: 8 / 2 / 2022               *
*                - Author : Mohamed Khaled             *
*                - Note : 
*                                                       *
******************** Gurad *****************************/ 

#ifndef GPIO_INTERFACE_H 
#define GPIO_INTERFACE_H   

 #include "STD_TYPE.h" 

 
 
  #define GPIOA_PORT   0 
  #define GPIOB_PORT   1
  #define GPIOC_PORT   2
  #define GPIOD_PORT   3
  #define GPIOE_PORT   4 
  #define GPIOH_PORT   5
  

/*  
  Set the mode of the bin  
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15  
  - mode 
   00: Input (reset state)
   01: General purpose output mode
   10: Alternate function mode
   11: Analog mode  
*/  


  #define INPUT_MODE       (0b00)
  #define GENERAL_MODE     (0b01)
  #define ALTERNATE_MODE   (0b00)
  #define ANALOG_MODE      (0b01)
  
 void MGPIO_vSetPinMode(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_u8Mode); 
 
 /* 
    Set the bit output type  
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15 
 - outputType  
    0: Output push-pull (reset state)
    1: Output open-drain
 
*/  

  #define PushPull_Output     0 
  #define OpenDrain_Output    1 

 void MGPIO_vSetPinOutType(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_OutType);
  
 

 
/*  
  Set the bin  speed  
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15  
  - Pin Output Speed 
     00: Low speed
     01: Medium speed
     10: High speed
     11: Very high speed   
*/   

    #define LowSpeed           (0b00)
    #define MediumSpeed        (0b01)
    #define HighSpeed          (0b00)
    #define VeryHighSpeed      (0b01)

 void MGPIO_vSetPinOutSpead(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_OutSpead); 
 
 
 
  /*  
  Set the pin Pull up / Down 
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15  
  - pull-up/pull-down 
     00: No pull-up, pull-down
     01: Pull-up
     10: Pull-down
     11: Reserved     
  */ 
     
    #define NO_PullUpDown           (0b00)
    #define PullUp                  (0b01)
    #define PullDown                (0b00)
   
   
   void MGPIO_vSetPinPull(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_PinPull);

   
   
   
   
   
  /*  
    
    Read the Pin Val
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15    
  
  */ 
    u8 MGPIO_u8PinVal(u8 Copy_u8Prot , u8 Copy_u8Pin ); 
    
    
    
    
    
   /*  
    - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
    - pin 0 -> 15  
    - LOCK 
 
  */
    
   void  MGPIO_PinLock(u8 Copy_u8Prot , u8 Copy_u8Pin );   
   
   
 /*  
    - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
    - pin 0 -> 15  
    - ALT FUNCTION 
    
            0000: AF0
            0001: AF1
            0010: AF2
            0011: AF3
            0100: AF4
            0101: AF5
            0110: AF6
            0111: AF7
            1000: AF8
            1001: AF9
            1010: AF10
            1011: AF11
            1100: AF12
            1101: AF13
            1110: AF14
            1111: AF15    
   */
   
    void  MGPIO_vSetAltPin(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_u8ALT ); 
   
   
   



#endif
