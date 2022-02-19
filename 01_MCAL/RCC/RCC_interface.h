/********************************************************
*                - RCC_interface                          *                    
*                - Created: 8 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/ 



#ifndef RCC_INTERFACE_H 
#define RCC_INTERFACE_H   
 
 #include "RCC_private.h"

 
 typedef enum {  
  AHB1 = 0 , 
  AHB2,
  AHB3,
  APP1, 
  APP2 
 } BusName_t;

 typedef enum {
     HSI_clock = 0 , 
     HSE_clock , 
     PLL_clock
 }ClkSrcName_t; 

typedef enum  {
     PLL_HSI = 0 , 
     Pll_HSE ,
 }PLLSrcNmae_t; 
 
 typedef enum {
     HSE_RC = 0 , 
     HSE_Crystal
 }HSESrcName_t; 
 
 
 void MRCC_voidEnableClock (BusName_t BusName , u8 Copy_u8pinName); 
 void MRCC_voidDisableClock (BusName_t BusName , u8 Copy_u8pinName);
 
 
 




#endif
