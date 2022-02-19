/********************************************************
*                - NVIC_private.h                          *                    
*                - Created: 13 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef NVIC_PRIVATE_H 
#define NVIC_PRIVATE_H 

  #include "STD_TYPE.h"
  
 
  #define NVIC_BaseAdress 0xE000E100 
  
  #define NVIC_ISER0			(*((vu32*) (NVIC_BaseAdress+0x100)))
  #define NVIC_ISER1            (*((vu32*) (NVIC_BaseAdress+0x104))) 
  #define NVIC_ISER2            (*((vu32*) (NVIC_BaseAdress+0x108)))  
  
  
  
  #define NVIC_ICER0			(*((vu32*) (NVIC_BaseAdress+0x180)))
  #define NVIC_ICER1            (*((vu32*) (NVIC_BaseAdress+0x184))) 
  #define NVIC_ICER2            (*((vu32*) (NVIC_BaseAdress+0x188)))
  
  
  #define NVIC_ISPR0			(*((vu32*) (NVIC_BaseAdress+0x200)))
  #define NVIC_ISPR1            (*((vu32*) (NVIC_BaseAdress+0x204))) 
  #define NVIC_ISPR2            (*((vu32*) (NVIC_BaseAdress+0x208))) 
  
  
  #define NVIC_ICPR0			(*((vu32*) (NVIC_BaseAdress+0x280)))
  #define NVIC_ICPR1            (*((vu32*) (NVIC_BaseAdress+0x284))) 
  #define NVIC_ICPR2            (*((vu32*) (NVIC_BaseAdress+0x288))) 
  
  
 #define NVIC_IABR0			(*((vu32*) (NVIC_BaseAdress+0x300)))
 #define NVIC_IABR1	       	(*((vu32*) (NVIC_BaseAdress+0x304)))
 #define NVIC_IABR2 		(*((vu32*) (NVIC_BaseAdress+0x308)))

  
  
  
  // no derefrence 
  #define NVIC_IRP			    ((vu8*) (NVIC_BaseAdress+0x400))
  
  
  
  #define SCB_BaseAdress        0xE000ED00  
  
  #define SCB_AIRCR             (*((vu32*) (SCB_BaseAdress+0x0C)))
  
 
  


#endif 


