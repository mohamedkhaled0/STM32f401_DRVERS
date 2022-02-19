 /********************************************************
*                - BIT_MATH.h                          *
*                - Created: 8 / 2 / 2022                *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** Gurad *****************************/   


#ifndef BIT_MATH_H
#define BIT_MATH_H

  #define SETBIT(RIG,BIT) RIG |= (1U<<BIT)
  #define CLRBIT(RIG,BIT) RIG &= ~(1U<<BIT)
  #define TOGBIT(RIG,BIT) RIG ^= (1U<<BIT)
  #define GETBIT(RIG,BIT) (RIG >> BIT)& 1U


#endif
