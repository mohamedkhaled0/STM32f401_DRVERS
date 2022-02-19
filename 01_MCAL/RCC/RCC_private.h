/********************************************************
*                - RCC_private.h                          *                    
*                - Created: 8 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H 


#include "STD_TYPE.h"

 /*  RCC BaseAdress       */  
 #define RCC_BaseAdress 0x40023800
 
 
 
 /*       registers       */  
 
 
  #define RCC_CR						(*((vu32*) (RCC_BaseAdress+0x00)))
  #define RCC_PLLCFGR					(*((vu32*) (RCC_BaseAdress+0x04)))
  #define RCC_CFGR						(*((vu32*) (RCC_BaseAdress+0x08)))
  #define RCC_CIR						(*((vu32*) (RCC_BaseAdress+0x0C)))
  #define RCC_AHB1RSTR					(*((vu32*) (RCC_BaseAdress+0x10)))
  #define RCC_AHB2RSTR					(*((vu32*) (RCC_BaseAdress+0x14)))
  #define RCC_AHB3RSTR					(*((vu32*) (RCC_BaseAdress+0x18)))
  #define RCC_APB1RSTR					(*((vu32*) (RCC_BaseAdress+0x20)))
  #define RCC_APB2RSTR					(*((vu32*) (RCC_BaseAdress+0x24)))
  #define RCC_AHB1ENR					(*((vu32*) (RCC_BaseAdress+0x30)))
  #define RCC_AHB2ENR					(*((vu32*) (RCC_BaseAdress+0x34)))
  #define RCC_AHB3ENR					(*((vu32*) (RCC_BaseAdress+0x38)))
  #define RCC_APB1ENR					(*((vu32*) (RCC_BaseAdress+0x40)))
  #define RCC_APB2ENR					(*((vu32*) (RCC_BaseAdress+0x44)))
  #define RCC_AHB1LPENR				    (*((vu32*) (RCC_BaseAdress+0x50)))
  #define RCC_AHB2LPENR				    (*((vu32*) (RCC_BaseAdress+0x54)))
  #define RCC_AHB3LPENR				    (*((vu32*) (RCC_BaseAdress+0x58)))
  #define RCC_APB1LPENR				    (*((vu32*) (RCC_BaseAdress+0x60)))
  #define RCC_APB2LPENR				    (*((vu32*) (RCC_BaseAdress+0x64)))
  #define RCC_BDCR						(*((vu32*) (RCC_BaseAdress+0x70)))
  #define RCC_CSR						(*((vu32*) (RCC_BaseAdress+0x74)))
  #define RCC_SSCGR						(*((vu32*) (RCC_BaseAdress+0x80)))
  #define RCC_PLLI2SCFGR				(*((vu32*) (RCC_BaseAdress+0x84)))




#endif 


