/********************************************************
*                - DMA_private.h                          *                    
*                - Created: 20 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef DMA_PRIVATE_H 
#define DMA_PRIVATE_H  

#include "STD_TYPE.h"

 //DMA Base Adress
   #define DMA2_BaseAdress 0x40026400 
   #define DMA1_BaseAdress 0x40026000 


  #define DMA2 ((DMA_t*)(DMA2_BaseAdress))
  #define DMA1 ((DMA_t*)(DMA1_BaseAdress))
  
  typedef struct { 
    vu32 LISR ; 
	vu32 HISR ; 
	vu32 LIFCR ; 
	vu32 HIFCR ; 
	DMA_Stream_t Stream_ID[8];
  }DMA_t; 
  
  
  
  typedef struct { 
   vu32 CR 
   vu32 NDTR
   vu32 PAR
   vu32 M0AR 
   vu32 M1AR
   vu32 FCR
  } DMA_Stream_t;
 
 

#endif 

