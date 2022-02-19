/********************************************************
*                - STK_interface.h                          *                    
*                - Created: 17 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef STK_INTERFACE_H 
#define STK_INTERFACE_H 
 
 
 
 // SysTK init 
#define AHB      0 
#defien AHB/8    1
 
 void MSTK_vInit();  
 void MSTK_vBusyWait(u32 Copy_u32Tick);  
 
 
 u32 MSTK_u32ElabsedTime(void); 
 u32 MSTK_u32RemainTime(void);
 
 
 
 void MSTK_vIntervalSingle(u32 Copy_u32Tick , void (*Copy_vPtr)(void)); 
 void MSTK_vIntervalPeriodic(u32 Copy_u32Tick , void (*Copy_vPtr)(void));
 
 

#endif 
