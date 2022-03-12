/********************************************************
*                - DMA_interface.h                          *                    
*                - Created: 20 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef DMA_INTERFACE_H 
#define DMA_INTERFACE_H 

#include "STD_TYPE.h"


//DMA init
void MDMA_vInit(void);  

//Set the source and destination adress 
void MDMA_vSetAdress(u32 *ptr_u8SrcAdd , u32 *ptr_u8DistAdd , u32 Copy_u32Size);  



// DMA Enable 
void MDMA_vDMAEnable(u8 Copy_u8DMAId);
 
 

#endif 


/*struct method try it yourself*/