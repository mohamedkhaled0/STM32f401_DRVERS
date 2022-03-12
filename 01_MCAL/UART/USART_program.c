/********************************************************
*                - USART_program.c                          *                    
*                - Created: 24 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** code ***************************** */
/*            MCAL                                      */

#include "USART_private.h"
#include "USART_interface.h"

/************************** HAL ************************/ 


/*************************LIB *************************/  

#include "STD_TYPE.h" 
#include "BIT_MATH.h" 

/******************************************************/ 




void MUSART_vInit(void) { 


 #if USART_STATUS == USART_ENABLE 
  
 /********* Transmitter -> Enable / Disable ***********/
  #if TRANSMITTER_STATUS == TRANSMITTER_ENABLE 
   SETBIT(USART1-> CR , 3U ); 
   
  #elseif TRANSMITTER_STATUS == TRANSMITTER_DISABLE 
   CLRBIT(USART1-> CR , 3U ); 
   
   #endif
  
   
/********* Reciever -> Enable / Disable ***********/ 
  #if RECEIVER_STATUS == RECEIVER_ENABLE 
   SETBIT(USART1-> CR , 2U ); 
   
  #elseif RECEIVER_STATUS == RECEIVER_DISABLE  
   CLRBIT(USART1-> CR , 2U ); 
   
  #endif
   
 /********* Parity Control -> Enable / Disable ***********/ 
  #if PARITY_CONTROL == PARITY_ENABLE 
   SETBIT(USART1-> CR , 10U ); 
   
  #elseif PARITY_CONTROL == PARITY_DISABLE  
   CLRBIT(USART1-> CR , 10U ); 
 
   #endif 
   
   
  /********* Parity TEYPE -> Even  / Odd ***********/ 
  #if PARITY_TEYPE == ODD_PARITY 
   SETBIT(USART1-> CR , 9U ); 
   
  #elseif PARITY_TEYPE == EVEN_PARITY  
   CLRBIT(USART1-> CR , 9U ); 
  
  #endif 
  
  
   /********* Word Length -> 8-bit  / 9-bit  ***********/  
   
  #if WORD_LENGTH == _9BIT_LENGTH 
   SETBIT(USART1-> CR , 12U ); 
   
  #elseif WORD_LENGTH == _8BIT_LENGTH  
   CLRBIT(USART1-> CR , 12U ); 
  
  #endif  
  
  
  
  
  
  
  
  
  
 
 
 
  SETBIT(USART1-> CR , 13U );  
 #elseif USART_STATUS == USART_DISABLE  
   CLRBIT(USART1-> CR , 13U );
   
 #endif
 
    
    
    
}