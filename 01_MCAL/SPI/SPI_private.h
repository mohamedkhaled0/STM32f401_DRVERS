/********************************************************
*                - SPI_private.h                         *                    
*                - Created: 21 / 2 / 2022                *
*                - Author : Mohamed Khaled               *
*                - Note : 
*                                                        *
******************** Gurad *****************************/

#ifndef SPI_PRIVATE_H 
#define SPI_PRIVATE_H  

#include "STD_TYPE.h" 


 #define SPI1_BaseAdress 0x40013000 
 #define SPI2_BaseAdress 0x40003800 
 #define SPI3_BaseAdress 0x40003C00  
 #define SPI4_BaseAdress 0x40013400  
 
 // SPI1 registers
 
  #define SPI1_CR1 			(*((vu32*) (SPI1_BaseAdress + 0x00)))
  #define SPI1_CR2 			(*((vu32*) (SPI1_BaseAdress + 0x04)))
  #define SPI1_SR			(*((vu32*) (SPI1_BaseAdress + 0x08)))
  #define SPI1_DR			(*((vu32*) (SPI1_BaseAdress + 0x0C)))
  #define SPI1_CRCPR	    (*((vu32*) (SPI1_BaseAdress + 0x10)))
  #define SPI1_RXCRCR		(*((vu32*) (SPI1_BaseAdress + 0x14)))
  #define SPI1_TXCRCR	    (*((vu32*) (SPI1_BaseAdress + 0x18)))
  #define SPI1_I2SCFGR		(*((vu32*) (SPI1_BaseAdress + 0x1C)))
  #define SPI1_I2SPR		(*((vu32*) (SPI1_BaseAdress + 0x20)))
  
 // SPI2 registers 
  #define SPI2_CR1 			(*((vu32*) (SPI2_BaseAdress + 0x00)))
  #define SPI2_CR2 			(*((vu32*) (SPI2_BaseAdress + 0x04)))
  #define SPI2_SR			(*((vu32*) (SPI2_BaseAdress + 0x08)))
  #define SPI2_DR			(*((vu32*) (SPI2_BaseAdress + 0x0C)))
  #define SPI2_CRCPR	    (*((vu32*) (SPI2_BaseAdress + 0x10)))
  #define SPI2_RXCRCR		(*((vu32*) (SPI2_BaseAdress + 0x14)))
  #define SPI2_TXCRCR	    (*((vu32*) (SPI2_BaseAdress + 0x18)))
  #define SPI2_I2SCFGR		(*((vu32*) (SPI2_BaseAdress + 0x1C)))
  #define SPI2_I2SPR		(*((vu32*) (SPI2_BaseAdress + 0x20)))

//SPI3 regiters 
  #define SPI3_CR1 			(*((vu32*) (SPI3_BaseAdress + 0x00)))
  #define SPI3_CR2 			(*((vu32*) (SPI3_BaseAdress + 0x04)))
  #define SPI3_SR			(*((vu32*) (SPI3_BaseAdress + 0x08)))
  #define SPI3_DR			(*((vu32*) (SPI3_BaseAdress + 0x0C)))
  #define SPI3_CRCPR	    (*((vu32*) (SPI3_BaseAdress + 0x10)))
  #define SPI3_RXCRCR		(*((vu32*) (SPI3_BaseAdress + 0x14)))
  #define SPI3_TXCRCR	    (*((vu32*) (SPI3_BaseAdress + 0x18)))
  #define SPI3_I2SCFGR		(*((vu32*) (SPI3_BaseAdress + 0x1C)))
  #define SPI3_I2SPR		(*((vu32*) (SPI3_BaseAdress + 0x20))) 
  
  
 //SPI4  
  #define SPI4_CR1 			(*((vu32*) (SPI4_BaseAdress + 0x00)))
  #define SPI4_CR2 			(*((vu32*) (SPI4_BaseAdress + 0x04)))
  #define SPI4_SR			(*((vu32*) (SPI4_BaseAdress + 0x08)))
  #define SPI4_DR			(*((vu32*) (SPI4_BaseAdress + 0x0C)))
  #define SPI4_CRCPR	    (*((vu32*) (SPI4_BaseAdress + 0x10)))
  #define SPI4_RXCRCR		(*((vu32*) (SPI4_BaseAdress + 0x14)))
  #define SPI4_TXCRCR	    (*((vu32*) (SPI4_BaseAdress + 0x18)))
  #define SPI4_I2SCFGR		(*((vu32*) (SPI4_BaseAdress + 0x1C)))
  #define SPI4_I2SPR		(*((vu32*) (SPI4_BaseAdress + 0x20))) 
 
  
  
 


#endif 