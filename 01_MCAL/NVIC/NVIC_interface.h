/********************************************************
*                - NVIC_interface                          *                    
*                - Created: 13 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Guard *****************************/ 



#ifndef NVIC_INTERFACE_H 
#define NVIC_INTERFACE_H   
 
#include "NVIC_private.h" 
#include "STD_TYPE.h"



void MNVIC_vInterruptEnable(u8 Copy_u8IntNum);  

void MNVIC_vInterruptDisable(u8 Copy_u8IntNum);  

void MNVIC_vPendingEnable(u8 Copy_u8IntNum);  
 
void MNVIC_vPendingDisable(u8 Copy_u8IntNum);  

u8 MNVIC_u8IntRead(u8 Copy_u8IntNum);  



 
 
  #define  GROUP_PRIORITY_CFG0						0U 
  #define  GROUP_PRIORITY_CFG1						1U 
  #define  GROUP_PRIORITY_CFG2						2U
  #define  GROUP_PRIORITY_CFG3						3U
  #define  GROUP_PRIORITY_CFG4						4U 
  
  #define PASS_G4S0    0x5FA0000
  #define PASS_G3S1    0x5FA0400
  #define PASS_G2S2    0x5FA0500
  #define PASS_G1S3    0x5FA0600
  #define PASS_G0S4    0x5FA0700
  
  
 
 void MNVIC_vSetConfg(u8 Copy_u8confg); 
 
 
 
 void MNVIC_vsetGSPriority(u8 Copy_IntID , u8 Copy_u8SubPriority , u8 Copy_u8GroubPriority , u8 Copy_u8confg )



#endif
;
