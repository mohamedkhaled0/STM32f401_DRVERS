/********************************************************
*                - USART_private.h                          *                    
*                - Created: 24 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef USART_PRIVATE_H 
#define USART_PRIVATE_H 

  #include "STD_TYPE.h"
  
 
  #define USART1_BaseAdress 0x40011000   
  
  
  #define USART1 ((volatile UART_st*)( UART1_BaseAdress ))
   
  typedef struct { 
  
    vu32 SR;
    vu32 DR; 
    vu32 BRR; 
    vu32 CR1; 
    vu32 CR2; 
    vu32 CR3; 
    vu32 GTPR; 
    
  } USART_st;
  
  

  
  
  
  
  
 
  


#endif 


