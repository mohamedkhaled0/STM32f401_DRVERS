/********************************************************
*                - GPIO_private.h                          *                    
*                - Created: 8 / 2 / 2022               *
*                - Author : Mohamed Khaled             *
*                - Note : 
*                                                       *
******************** Gurad *****************************/  




#ifndef GPIO_PRIVATE_H 
#define GPIO_PRIVATE_H 

  #include "STD_TYPE.h" 
 

    /* Base Adress Of GPIO Rigsters */ 
    #define  GPIOA_BASE_ADDRESS									0x40020000
    #define  GPIOB_BASE_ADDRESS									0x40020400
    #define  GPIOC_BASE_ADDRESS									0x40020800
    #define  GPIOD_BASE_ADDRESS									0x40020C00
    #define  GPIOE_BASE_ADDRESS									0x40021000
    #define  GPIOH_BASE_ADDRESS									0x40021C00   
    
    
    
    /* GPIOA  Rgister Map */ 
    #define  GPIOA_MODER									(*((vu32*) (GPIOA_BASE_ADDRESS +0X00)))			
    #define  GPIOA_OTYPER									(*((vu32*) (GPIOA_BASE_ADDRESS +0X04)))			
    #define  GPIOA_OSPEEDR								    (*((vu32*) (GPIOA_BASE_ADDRESS +0X08)))			
    #define  GPIOA_PUPDR									(*((vu32*) (GPIOA_BASE_ADDRESS +0X0C)))			
    #define  GPIOA_IDR										(*((vu32*) (GPIOA_BASE_ADDRESS +0X10)))			
    #define  GPIOA_ODR										(*((vu32*) (GPIOA_BASE_ADDRESS +0X14)))			
    #define  GPIOA_BSRR										(*((vu32*) (GPIOA_BASE_ADDRESS +0X18)))			
    #define  GPIOA_LCKR										(*((vu32*) (GPIOA_BASE_ADDRESS +0X1C)))			
    #define  GPIOA_AFRL										(*((vu32*) (GPIOA_BASE_ADDRESS +0X20)))			
    #define  GPIOA_AFRH										(*((vu32*) (GPIOA_BASE_ADDRESS +0X24)))	   
    
    
    /* GPIOB  Rgister Map */  
    #define  GPIOB_MODER									(*((vu32*) (GPIOB_BASE_ADDRESS +0X00)))
    #define  GPIOB_OTYPER									(*((vu32*) (GPIOB_BASE_ADDRESS +0X04)))
    #define  GPIOB_OSPEEDR								    (*((vu32*) (GPIOB_BASE_ADDRESS +0X08)))
    #define  GPIOB_PUPDR									(*((vu32*) (GPIOB_BASE_ADDRESS +0X0C)))
    #define  GPIOB_IDR										(*((vu32*) (GPIOB_BASE_ADDRESS +0X10)))
    #define  GPIOB_ODR										(*((vu32*) (GPIOB_BASE_ADDRESS +0X14)))
    #define  GPIOB_BSRR										(*((vu32*) (GPIOB_BASE_ADDRESS +0X18)))
    #define  GPIOB_LCKR										(*((vu32*) (GPIOB_BASE_ADDRESS +0X1C)))
    #define  GPIOB_AFRL										(*((vu32*) (GPIOB_BASE_ADDRESS +0X20)))
    #define  GPIOB_AFRH										(*((vu32*) (GPIOB_BASE_ADDRESS +0X24)))
      
      
    /* GPIOC  Rgister Map */  
    #define  GPIOC_MODER									(*((vu32*) (GPIOC_BASE_ADDRESS +0X00)))
    #define  GPIOC_OTYPER									(*((vu32*) (GPIOC_BASE_ADDRESS +0X04)))
    #define  GPIOC_OSPEEDR								    (*((vu32*) (GPIOC_BASE_ADDRESS +0X08)))
    #define  GPIOC_PUPDR									(*((vu32*) (GPIOC_BASE_ADDRESS +0X0C)))
    #define  GPIOC_IDR										(*((vu32*) (GPIOC_BASE_ADDRESS +0X10)))
    #define  GPIOC_ODR										(*((vu32*) (GPIOC_BASE_ADDRESS +0X14)))
    #define  GPIOC_BSRR										(*((vu32*) (GPIOC_BASE_ADDRESS +0X18)))
    #define  GPIOC_LCKR										(*((vu32*) (GPIOC_BASE_ADDRESS +0X1C)))
    #define  GPIOC_AFRL										(*((vu32*) (GPIOC_BASE_ADDRESS +0X20)))
    #define  GPIOC_AFRH										(*((vu32*) (GPIOC_BASE_ADDRESS +0X24)))
      
      
    /* GPIOD  Rgister Map */ 
     #define  GPIOD_MODER									(*((vu32*) (GPIOD_BASE_ADDRESS +0X00)))
     #define  GPIOD_OTYPER									(*((vu32*) (GPIOD_BASE_ADDRESS +0X04)))
     #define  GPIOD_OSPEEDR								    (*((vu32*) (GPIOD_BASE_ADDRESS +0X08)))
     #define  GPIOD_PUPDR									(*((vu32*) (GPIOD_BASE_ADDRESS +0X0C)))
     #define  GPIOD_IDR										(*((vu32*) (GPIOD_BASE_ADDRESS +0X10)))
     #define  GPIOD_ODR										(*((vu32*) (GPIOD_BASE_ADDRESS +0X14)))
     #define  GPIOD_BSRR							        (*((vu32*) (GPIOD_BASE_ADDRESS +0X18)))
     #define  GPIOD_LCKR								    (*((vu32*) (GPIOD_BASE_ADDRESS +0X1C)))
     #define  GPIOD_AFRL								    (*((vu32*) (GPIOD_BASE_ADDRESS +0X20)))
     #define  GPIOD_AFRH									(*((vu32*) (GPIOD_BASE_ADDRESS +0X24)))    
      
    /* GPIOE  Rgister Map */
     #define  GPIOE_MODER									(*((vu32*) (GPIOE_BASE_ADDRESS +0X00)))
     #define  GPIOE_OTYPER									(*((vu32*) (GPIOE_BASE_ADDRESS +0X04)))
     #define  GPIOE_OSPEEDR							        (*((vu32*) (GPIOE_BASE_ADDRESS +0X08)))
     #define  GPIOE_PUPDR									(*((vu32*) (GPIOE_BASE_ADDRESS +0X0C)))
     #define  GPIOE_IDR										(*((vu32*) (GPIOE_BASE_ADDRESS +0X10)))
     #define  GPIOE_ODR										(*((vu32*) (GPIOE_BASE_ADDRESS +0X14)))
     #define  GPIOE_BSRR									(*((vu32*) (GPIOE_BASE_ADDRESS +0X18)))
     #define  GPIOE_LCKR									(*((vu32*) (GPIOE_BASE_ADDRESS +0X1C)))
     #define  GPIOE_AFRL									(*((vu32*) (GPIOE_BASE_ADDRESS +0X20)))
     #define  GPIOE_AFRH									(*((vu32*) (GPIOE_BASE_ADDRESS +0X24)))
      
    /* GPIOH  Rgister Map */ 
    
    #define  GPIOH_MODER									(*((vu32*) (GPIOH_BASE_ADDRESS +0X00)))
    #define  GPIOH_OTYPER									(*((vu32*) (GPIOH_BASE_ADDRESS +0X04)))
    #define  GPIOH_OSPEEDR								    (*((vu32*) (GPIOH_BASE_ADDRESS +0X08)))
    #define  GPIOH_PUPDR									(*((vu32*) (GPIOH_BASE_ADDRESS +0X0C)))
    #define  GPIOH_IDR										(*((vu32*) (GPIOH_BASE_ADDRESS +0X10)))
    #define  GPIOH_ODR										(*((vu32*) (GPIOH_BASE_ADDRESS +0X14)))
    #define  GPIOH_BSRR										(*((vu32*) (GPIOH_BASE_ADDRESS +0X18)))
    #define  GPIOH_LCKR										(*((vu32*) (GPIOH_BASE_ADDRESS +0X1C)))
    #define  GPIOH_AFRL										(*((vu32*) (GPIOH_BASE_ADDRESS +0X20)))
    #define  GPIOH_AFRH										(*((vu32*) (GPIOH_BASE_ADDRESS +0X24)))	
    
    
    
    
    
    
    
    
    
#endif
