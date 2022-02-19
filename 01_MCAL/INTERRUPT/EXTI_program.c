/********************************************************
*                - EXTI_program.c                          *                    
*                - Created: 16 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/


//Line Enable 
void MEXTI_vLineEnable(u8 Copy_LineNum){ 
 
     EXTI_IMR |= (1U<<Copy_LineNum);
 } 
 

 //Line Disable
 void MEXTI_vLineDisable(u8 Copy_LineNum){ 
 
     EXTI_IMR &= ~(1U<<Copy_LineNum);
     
 }  
 
 
 
 
  
 
 void MEXTI_vEventType(u8 Copy_LineNum , eventType_t Copy_eventType){
     switch(Copy_eventType){
         
         case Rising_trigger: EXTI_RTSR |= (1U<<Copy_LineNum); break;  
         
         case Falling_trigger:EXTI_FTSR |= (1U<<Copy_LineNum);  break;
 
         
     }
 } 
 void 
 
 
 
 
 
 
 void MEXTI_vSofwareIntEnable(u8 Copy_LineNum){
     
     EXTI_SWIER |= (1U<<Copy_LineNum); 
 } 
 
 
  
 void MEXTI_voidSelectPort(u8 Copy_u8LineNum, u8 Copy_u8PortID){ 
 
 
    if (Copy_LineNum <= 3){ 

        SYSCFG_EXTICR1 &= ~(0b1111)<<(4*Copy_LineNum); 
        SYSCFG_EXTICR1 
    } 
    else if (Copy_LineNum <=7){
        Copy_LineNum -= 4; 
    }
        /*.....*/
     
     
 } 
  
 
 