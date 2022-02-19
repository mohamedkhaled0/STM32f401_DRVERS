/********************************************************
*                - GPIO_program.c                      *                    
*                - Created: 8 / 2 / 2022               *
*                - Author : Mohamed Khaled             *
*                - Note : 
*                                                       *
******************** code  *****************************/   
  
/******************** LIB  *****************************/ 
  #include "STD_TYPE.h" 
  #include "BIT_MATH.h"


/******************** MCAL *******************************/
 #include "GPIO_private.h" 
 #include "GPIO_interface.h" 
 
/********************** HAL *********************************/
 
 

 
 /* 
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15  
  - mode 
   00: Input (reset state)
   01: General purpose output mode
   10: Alternate function mode
   11: Analog mode  
*/ 
 void MGPIO_vSetPinMode(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_u8Mode){
     
     switch (Copy_u8Prot){  
      case GPIOA_PORT : GPIOA_MODER |= (u32) (Copy_u8Mode << (2*Copy_u8Pin)); break;
      case GPIOB_PORT : GPIOB_MODER |= (u32) (Copy_u8Mode << (2*Copy_u8Pin)); break;
      case GPIOC_PORT : GPIOC_MODER |= (u32) (Copy_u8Mode << (2*Copy_u8Pin)); break;
      case GPIOD_PORT : GPIOD_MODER |= (u32) (Copy_u8Mode << (2*Copy_u8Pin)); break;
      case GPIOE_PORT : GPIOE_MODER |= (u32) (Copy_u8Mode << (2*Copy_u8Pin)); break;
      case GPIOH_PORT : GPIOH_MODER |= (u32) (Copy_u8Mode << (2*Copy_u8Pin)); break;
     }
     
 }   
 
 
 /*  
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15  
  - outputType  
    0: Output push-pull (reset state)
    1: Output open-drain 
*/ 
 
 
  void MGPIO_vSetPinOutType(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_OutType){
                                                                              
      switch(Copy_u8Prot){                                                    
      case GPIOA_PORT : GPIOA_OTYPER |= (u32) (Copy_OutType << (Copy_u8Pin)); break;
      case GPIOB_PORT : GPIOB_OTYPER |= (u32) (Copy_OutType << (Copy_u8Pin)); break;
      case GPIOC_PORT : GPIOC_OTYPER |= (u32) (Copy_OutType << (Copy_u8Pin)); break;
      case GPIOD_PORT : GPIOD_OTYPER |= (u32) (Copy_OutType << (Copy_u8Pin)); break;
      case GPIOE_PORT : GPIOE_OTYPER |= (u32) (Copy_OutType << (Copy_u8Pin)); break;
      case GPIOH_PORT : GPIOH_OTYPER |= (u32) (Copy_OutType << (Copy_u8Pin)); break;
      }
  } 
    
    
 /*
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15  
  - Pin Output Speed 
     00: Low speed
     01: Medium speed
     10: High speed
     11: Very high speed   
*/ 
   
   
   
  
    void MGPIO_vSetPinOutSpead(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_OutSpead){
        
          
        switch(Copy_u8Prot){  
        
          case GPIOA_PORT : GPIOA_OSPEEDR |= (u32) (Copy_OutSpead << (2*Copy_u8Pin)); break;
          case GPIOB_PORT : GPIOB_OSPEEDR |= (u32) (Copy_OutSpead << (2*Copy_u8Pin)); break;
          case GPIOC_PORT : GPIOC_OSPEEDR |= (u32) (Copy_OutSpead << (2*Copy_u8Pin)); break;
          case GPIOD_PORT : GPIOD_OSPEEDR |= (u32) (Copy_OutSpead << (2*Copy_u8Pin)); break;
          case GPIOE_PORT : GPIOE_OSPEEDR |= (u32) (Copy_OutSpead << (2*Copy_u8Pin)); break;
          case GPIOH_PORT : GPIOH_OSPEEDR |= (u32) (Copy_OutSpead << (2*Copy_u8Pin)); break;
            
      }
        
    }  
     
     
   /*  

  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15  
  - pull-up/pull-down 
     00: No pull-up, pull-down
     01: Pull-up
     10: Pull-down    
  */
   
   
  void MGPIO_vSetPinPull(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_PinPull){   
     
     switch(Copy_u8Prot){  
        
          case GPIOA_PORT : GPIOA_PUPDR |= (u32) (Copy_PinPull << (2*Copy_u8Pin)); break;
          case GPIOB_PORT : GPIOB_PUPDR |= (u32) (Copy_PinPull << (2*Copy_u8Pin)); break;
          case GPIOC_PORT : GPIOC_PUPDR |= (u32) (Copy_PinPull << (2*Copy_u8Pin)); break;
          case GPIOD_PORT : GPIOD_PUPDR |= (u32) (Copy_PinPull << (2*Copy_u8Pin)); break;
          case GPIOE_PORT : GPIOE_PUPDR |= (u32) (Copy_PinPull << (2*Copy_u8Pin)); break;
          case GPIOH_PORT : GPIOH_PUPDR |= (u32) (Copy_PinPull << (2*Copy_u8Pin)); break;
      }
   
  }




  /*
      Set the pin output Data
      - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
      - pin 0 -> 15

      */


     
  /*  
    
    Read the Pin Val
  - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
  - pin 0 -> 15    
  
  */ 
        
    
    u8 MGPIO_u8ReadPin(u8 Copy_u8Prot , u8 Copy_u8Pin ){ 
        u8 L_u8pin ; 
         switch(Copy_u8Prot){ 
           case GPIOA_PORT : L_u8pin =  GETBIT(GPIOA_IDR,Copy_u8Pin); break;
           case GPIOB_PORT : L_u8pin =  GETBIT(GPIOB_IDR,Copy_u8Pin); break;
           case GPIOC_PORT : L_u8pin =  GETBIT(GPIOC_IDR,Copy_u8Pin); break;
           case GPIOD_PORT : L_u8pin =  GETBIT(GPIOD_IDR,Copy_u8Pin); break;
           case GPIOE_PORT : L_u8pin =  GETBIT(GPIOE_IDR,Copy_u8Pin); break;
           case GPIOH_PORT : L_u8pin =  GETBIT(GPIOH_IDR,Copy_u8Pin); break;
       } 
       
       return L_u8pin; 
       
    }
  
  
   /*  
    - GPIOA - GPIOB - GPIOC- GPIOD - GPIOE - GPIOH
    - pin 0 -> 15  
    - LOCK 
  */
  
  
  void  MGPIO_PinLock(u8 Copy_u8Prot , u8 Copy_u8Pin ){
       
  
       switch(Copy_u8Prot){
           
            case GPIOA_PORT :
            SETBIT(GPIOA_LCKR,16U);
            SETBIT(GPIOA_LCKR, Copy_u8Pin); 
            while(GITBIT(GPIOA_LCKR,16U)==1); 
            break; 
            
            case GPIOB_PORT :
            SETBIT(GPIOB_LCKR,16U);
            SETBIT(GPIOB_LCKR, Copy_u8Pin); 
            while(GITBIT(GPIOB_LCKR,16U)==1); 
            break; 
            
            
            case GPIOC_PORT :
            SETBIT(GPIOC_LCKR,16U);
            SETBIT(GPIOC_LCKR, Copy_u8Pin); 
            while(GITBIT(GPIOC_LCKR,16U)==1); 
            break;  
            
            case GPIOD_PORT :
            SETBIT(GPIOD_LCKR,16U);
            SETBIT(GPIOD_LCKR, Copy_u8Pin); 
            while(GITBIT(GPIOD_LCKR,16U)==1); 
            break; 
             
            case GPIOE_PORT :
            SETBIT(GPIOE_LCKR,16U);
            SETBIT(GPIOE_LCKR, Copy_u8Pin); 
            while(GITBIT(GPIOE_LCKR,16U)==1); 
            break;  
            
            case GPIOH_PORT :
            SETBIT(GPIOH_LCKR,16U);
            SETBIT(GPIOH_LCKR, Copy_u8Pin); 
            while(GITBIT(GPIOH_LCKR,16U)==1); 
            break; 
      
            
       }
      
    }  
     
     
     
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
     
      
  
  
      void  MGPIO_vSetAltPin(u8 Copy_u8Prot , u8 Copy_u8Pin , u8 Copy_u8ALT ) { 
      
        if (Copy_u8Pin <= 7)
        {
          switch(Copy_u8Prot){
           
            case GPIOA_PORT : GPIOA_AFRL |= (u32)(Copy_u8ALT << (Copy_u8Pin * 2)); break;
            case GPIOB_PORT : GPIOB_AFRL |= (u32)(Copy_u8ALT << (Copy_u8Pin * 2)); break;
            case GPIOC_PORT : GPIOC_AFRL |= (u32)(Copy_u8ALT << (Copy_u8Pin * 2)); break;
            case GPIOD_PORT : GPIOD_AFRL |= (u32)(Copy_u8ALT << (Copy_u8Pin * 2)); break;
            case GPIOE_PORT : GPIOE_AFRL |= (u32)(Copy_u8ALT << (Copy_u8Pin * 2)); break;
            case GPIOH_PORT : GPIOH_AFRL |= (u32)(Copy_u8ALT << (Copy_u8Pin * 2)); break;
          }
        } 
        else {
        switch(Copy_u8Prot){
          case GPIOA_PORT : GPIOA_AFRH |= (u32)(Copy_u8ALT << ((Copy_u8Pin % 8 ) * 2)); break;
          case GPIOB_PORT : GPIOB_AFRH |= (u32)(Copy_u8ALT << ((Copy_u8Pin % 8 ) * 2)); break;
          case GPIOC_PORT : GPIOC_AFRH |= (u32)(Copy_u8ALT << ((Copy_u8Pin % 8 ) * 2)); break;
          case GPIOD_PORT : GPIOD_AFRH |= (u32)(Copy_u8ALT << ((Copy_u8Pin % 8 ) * 2)); break;
          case GPIOE_PORT : GPIOE_AFRH |= (u32)(Copy_u8ALT << ((Copy_u8Pin % 8 ) * 2)); break;
          case GPIOH_PORT : GPIOH_AFRH |= (u32)(Copy_u8ALT << ((Copy_u8Pin % 8 ) * 2)); break; 
        }
        }
          
      } 

  
  
 
 
 
 
