/********************************************************
*                - NVIC_private                          *                    
*                - Created: 13 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** code ***************************** */
/*            MCAL                                      */

#include "NVIC_private.h"
#include "NVIC_interface.h"

/************************** HAL ************************/ 


/*************************LIB *************************/  

#include "STD_TYPE.h" 
#include "BIT_MATH.h" 

/******************************************************/ 




void MNVIC_vInterruptEnable(u8 Copy_u8IntNum){
     
     //NVIC_ISER0
    if (Copy_u8IntNum <= 31){
        
        NVIC_ISER0 = (1U << Copy_u8IntNum); 
    }
    
     //NVIC_ISER1 
     else if(Copy_u8IntNum <= 63){
         Copy_u8IntNum -= 32; 
          NVIC_ISER1 = (1U << Copy_u8IntNum);   
     }  
     
     // NVIC_ISER2 
      else if(Copy_u8IntNum <= 84){
         Copy_u8IntNum -= 64; 
          NVIC_ISER2 = (1U << Copy_u8IntNum);   
     }
    
} 
 
 
 
 void MNVIC_vInterruptDisable(u8 Copy_u8IntNum){
     
      if (Copy_u8IntNum <= 31){
        
        NVIC_ICER0 = (1U << Copy_u8IntNum); 
    }
    
    
     else if(Copy_u8IntNum <= 63){
         Copy_u8IntNum -= 32; 
          NVIC_ICER1 = (1U << Copy_u8IntNum);   
     }  
     
    
      else if(Copy_u8IntNum <= 84){
         Copy_u8IntNum -= 64; 
          NVIC_ICER2 = (1U << Copy_u8IntNum);   
     }
     
     
     
     
 } 
 
 
 void MNVIC_vPendingEnable(u8 Copy_u8IntNum){
         
    if (Copy_u8IntNum <= 31){
        
        NVIC_ISPR0 = (1U << Copy_u8IntNum); 
    }
    
     
     else if(Copy_u8IntNum <= 63){
         Copy_u8IntNum -= 32; 
          NVIC_ISPR1 = (1U << Copy_u8IntNum);   
     }  
     
     
      else if(Copy_u8IntNum <= 84){
         Copy_u8IntNum -= 64; 
          NVIC_ISPR2 = (1U << Copy_u8IntNum);   
     }     
 } 


     
 void MNVIC_vPendingDisable(u8 Copy_u8IntNum){
     
     if (Copy_u8IntNum <= 31){
        
        NVIC_ICPR0 = (1U << Copy_u8IntNum); 
    }
    
     
     else if(Copy_u8IntNum <= 63){
         Copy_u8IntNum -= 32; 
          NVIC_ICPR1 = (1U << Copy_u8IntNum);   
     }  
     
     
      else if(Copy_u8IntNum <= 84){
         Copy_u8IntNum -= 64; 
          NVIC_ICPR2 = (1U << Copy_u8IntNum);   
     }     
     
     
 }  



 u8 MNVIC_u8IntRead(u8 Copy_u8IntNum) { 
 
 
    u8 L_PinVal = 0; 
     if (Copy_u8IntNum <= 31){
        
        L_PinVal = GETBIT( NVIC_IABR0,Copy_u8IntNum); 
    }
    
     
     else if(Copy_u8IntNum <= 63){
         Copy_u8IntNum -= 32; 
          L_PinVal = GETBIT( NVIC_IABR1 , Copy_u8IntNum);
     }  
     
     
      else if(Copy_u8IntNum <= 84){
         Copy_u8IntNum -= 64; 
          L_PinVal = GETBIT( NVIC_IABR2,Copy_u8IntNum);    
     }  


     return L_PinVal ;    
 } 
 
 
 
 
  /* 
  GROUP_PRIORITY_CFG0						0U 
  GROUP_PRIORITY_CFG1						1U 
  GROUP_PRIORITY_CFG2						2U
  GROUP_PRIORITY_CFG3						3U
  GROUP_PRIORITY_CFG4						4U
*/
 
 void MNVIC_vSetConfg(u8 Copy_u8confg){ 
  
  /* Safty reset */ 
  SCB_AIRCR  = 0xFA050000;
 
   switch(Copy_u8confg){  

     case GROUP_PRIORITY_CFG0 : SCB_AIRCR =   PASS_G4S0; break;
     case GROUP_PRIORITY_CFG1 : SCB_AIRCR =   PASS_G3S1; break;
     case GROUP_PRIORITY_CFG2 : SCB_AIRCR =   PASS_G2S2; break;
     case GROUP_PRIORITY_CFG3 : SCB_AIRCR =   PASS_G4S0; break;
     case GROUP_PRIORITY_CFG4 : SCB_AIRCR =   PASS_G4S0; break;
   
   
   }
 
 
 } 
 
 
 
 
  void MNVIC_vsetGSPriority(u8 Copy_IntID , u8 Copy_u8SubPriority , u8 Copy_u8GroubPriority , u8 Copy_u8confg ){
          
   if(Copy_IntID <= 240){
          
     switch(Copy_u8confg){  
         case GROUP_PRIORITY_CFG0 : NVIC_IRP[Copy_IntID] = (u8)(Copy_u8GroubPriority<<4); break;
         case GROUP_PRIORITY_CFG1 : NVIC_IRP[Copy_IntID] = (u8)(Copy_u8GroubPriority<<5) | (u8)(Copy_u8SubPriority<<4); break;
         case GROUP_PRIORITY_CFG2 : NVIC_IRP[Copy_IntID] = (u8)(Copy_u8GroubPriority<<6) | (u8)(Copy_u8SubPriority<<4); break;
         case GROUP_PRIORITY_CFG3 : NVIC_IRP[Copy_IntID] = (u8)(Copy_u8GroubPriority<<7) | (u8)(Copy_u8SubPriority<<4); break;
         case GROUP_PRIORITY_CFG4 : NVIC_IRP[Copy_IntID] = (u8)(Copy_u8SubPriority<<4); break;
        }   
          
          
     }          
  }






