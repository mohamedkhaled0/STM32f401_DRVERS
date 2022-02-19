/********************************************************
*                - STK_program.c                          *                    
*                - Created: 17 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Code *****************************/



void MSTK_vInit(void){ 

 #if STK_CLK == AHB 
  STK_CTRL |= (1<<2); 
 #else  
  STK_CTRL &= ~(1<<2); 
 #end if    
}




 void MSTK_vBusyWait(u32 Copy_u32Tick){
     
     /*value in load*/ 
     STK_LOAD = Copy_u32; 
     
     /* Start Counting*/ 
     STK_CTRL |=(1<<0);

     /*polling*/  
      while (GETBIT(STK_CTRL , 16) == 0 );

    /*Stop counting*/ 
     STK_CTRL &= ~(1<<0); 
     
     // Clear value and Load 
     
     STK_LOAD = 0; 
     STK_VAL  = 0; 
    
        
 }  
 
 
 
 
 u32 MSTK_u32ElabsedTime (void){ 
 
   return (STK_LOAD - STK_VAL); 
     
 } 
 
 u32 MSTK_u32RemainTime (void){ 
   return (STK_VAL); 
     
 }
 
 
 