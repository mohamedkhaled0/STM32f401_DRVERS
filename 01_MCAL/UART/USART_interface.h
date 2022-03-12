/********************************************************
*                - USART_interface                          *                    
*                - Created: 24 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Guard *****************************/ 



#ifndef USART_INTERFACE_H 
#define USART_INTERFACE_H   
 
#include "USART_private.h" 
#include "STD_TYPE.h" 


 /********************* USART_STATUS *****************/ 
 #define USART_ENABLE       1U  
 #define USART_DISABLE      0U 
 
 
 /********************* TRANSMITTER_STATUS *****************/ 
 #define TRANSMITTER_ENABLE       1U  
 #define TRANSMITTER_DISABLE      0U  
 
 
 /********************* RECEIVER_STATUS *****************/ 
 #define RECEIVER_ENABLE       1U  
 #define RECEIVER_DISABLE      0U   
 
 
 /********************* PARITY *****************/ 
 #define EVEN_PARITY          0U  
 #define ODD_PARITY           1U 
 
 #define PARITY_ENABLE        1U 
 #define PARITY_Disable       0U
 
 
  /********************* WORD_LENGTH*****************/ 
 #define _8BIT_LENGTH            0U  
 #define _9BIT_LENGTH            1U
 
 
 /********************* INTERRUPT *****************/ 
 
 #define TCI_ENABLE                   1U  
 #define TCI_DISABLE                  0U
 
 
 #define TXE_ENABLE                   1U   
 #define TXE_DISABLE                  0U 
 
 
 
 
 
 
 
 
 
 
 
 
 

void MUSART_vInit(void); 






#endif 