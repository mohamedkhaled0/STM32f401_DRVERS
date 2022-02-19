/********************************************************
*                - RCC_private                          *                    
*                - Created: 8 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** code ***************************** / 


/************************* MCAL **********************/ 

#include "RCC_private.h"
#include "RCC_interface.h"

/************************** HAL ************************/ 


/*************************LIB *************************/  

#include "STD_TYPE.h"
#include "BIT_MATH.h"

/******************************************************/ 


MRCC_voidEnableClock (BusName_t BusName , u8 Copy_u8pinName){
       if (Copy_u8pinName <= 31){
           
           switch(BusName) {
               case AHB1 : SETBIT(RCC_AHB1ENR,Copy_u8pinName);   break;
               case AHB2 : SETBIT(RCC_AHB2ENR,Copy_u8pinName);  break;
               case AHB3 : SETBIT(RCC_AHB3ENR,Copy_u8pinName);  break;
               case APP1 : SETBIT(RCC_APB1ENR,Copy_u8pinName);  break;
               case APP2 : SETBIT(RCC_APB2ENR,Copy_u8pinName);  break;
           }
       } 
       else {
           /*Wrong enter */
       }
      
} 



void MRCC_voidDisableClock (BusName_t BusName , u8 Copy_u8pinName){
    if (Copy_u8pinName <= 31){
           
           switch(BusName) {
               case AHB1 : CLRBIT(RCC_AHB1ENR,Copy_u8pinName); break;
               case AHB2 : CLRBIT(RCC_AHB2ENR,Copy_u8pinName); break;
               case AHB3 : CLRBIT(RCC_AHB3ENR,Copy_u8pinName); break;
               case APP1 : CLRBIT(RCC_APB1ENR,Copy_u8pinName); break;
               case APP2 : CLRBIT(RCC_APB2ENR,Copy_u8pinName); break;
           }
       } 
       else {
           /*Wrong enter */
       }
}





