/********************************************************
*                - EXTI_interface.h                          *                    
*                - Created: 16 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef EXTI_INTERFACE_H 
#define EXTI_INTERFACE_H 

 #include "STD_TYPE.h"
 #include "EXTI_private.h"
 
 //Line Enable 
 void MEXTI_vLineEnable(u8 Copy_LineNum);  
 //Line Disable 
 void MEXTI_vLineDisable(u8 Copy_LineNum);  
 
 // select Rising or falling Edge 
typedef enum { 
 Rising_trigger = 0 , Falling_trigger
    
}eventType_t;
   
 
void MEXTI_vEventType(u8 Copy_LineNum , eventType_t Copy_eventType);  


void MEXTI_voidSelectPort(  u8 Copy_u8LineNum, u8 Copy_u8PortID);


// software interrupt enable 
void MEXTI_vSofwareIntEnable(u8 Copy_LineNum); 
 
 

#endif 
