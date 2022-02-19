/********************************************************
*                - STK_private.h                          *                    
*                - Created: 17 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/

#ifndef STK_PRIVATE_H 
#define STK_PRIVATE_H 

 #include "STD_TYPE.h" 
 
 #define STK_BaseAdress 0xE000E010 
 
 #define STK_CTRL 			(*((vu32*) (STK_BaseAdress+0x00))) 
 #define STK_LOAD 			(*((vu32*) (STK_BaseAdress+0x04)))
 #define STK_VAL 			(*((vu32*) (STK_BaseAdress+0x08))) 
 #define STK_CALIB 			(*((vu32*) (STK_BaseAdress+0x0C)))
 

#endif 


// struct method 


/*
 #define STK_BASE 			(((volatile S_STK_t *) (STK_BaseAdress+0x00))) 


typedef struct { 

    u32 STK_CTRL 
    u32 STK_LOAD 
    u32 STK_VAL 
    u32 STK_CALIB 
        
}S_STK_t; 



*/ 





