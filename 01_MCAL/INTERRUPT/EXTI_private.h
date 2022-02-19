/********************************************************
*                - EXTI_private.h                          *                    
*                - Created: 16 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef EXTI_PRIVATE_H 
#define EXTI_PRIVATE_H 

 #include "STD_TYPE.h"
  
 
 #define EXTI_BaseAdress 0x4001 3C00  
  
       
 #define EXTI_IMR 			(*((vu32*) (EXTI_BaseAdress+0x00))) 
 #define EXTI_EMR 			(*((vu32*) (EXTI_BaseAdress+0x04)))
 #define EXTI_RTSR 			(*((vu32*) (EXTI_BaseAdress+0x08))) 
 #define EXTI_FTSR 			(*((vu32*) (EXTI_BaseAdress+0x0c)))
 #define EXTI_SWIER 		(*((vu32*) (EXTI_BaseAdress+0x10))) 
 #define EXTI_PR 			(*((vu32*) (EXTI_BaseAdress+0x14)))
 

#endif 


/*struct method try it yourself*/