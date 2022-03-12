/********************************************************
*                - SPI_interface.h                     *                    
*                - Created: 21 / 2 / 2022              *
*                - Author : Mohamed Khaled             *
*                - Note : 
*                                                      *
******************** Gurad *****************************/ 




#ifndef SPI_INTERFACE_H 
#define SPI_INTERFACE_H  

#include "STD_TYPE.h" 
#include "SPI_private.h" 


/****** SPI NUM *************/
 #define SPI1   0U 
 #define SPI2   1U
 #define SPI3   2U
 #define SPI4   3U 


/******** Clock plarity *******/ 
 #define CLK_IDEAL_0   0U 
 #define CLK_IDEAL_1   1U   
 
 
 /******** Clock phase *******/ 
 #define READ_FRIST_EDGE   0U 
 #define WRITE_FRIST_EDGE   1U   
 
 
 /******** Device Mode  *******/ 
 #define SPI_MASTER   1U 
 #define SPI_SLAVE    0U   
 
 
  /******** Data size *******/ 
 #define DATA_SIZE_8     0U 
 #define DATA_SIZE_16    1U  
 
    
 /******** Baud  rate  *******/   
  #define  fPCLK2     0b000
  #define  fPCLK4     0b001  
  #define  fPCLK8     0b010  
  #define  fPCLK16    0b011  
  #define  fPCLK32    0b100  
  #define  fPCLK64    0b101  
  #define  fPCLK128   0b110   
  #define  fPCLK256   0b111   
  
  
  /******** Data Direction *******/ 
 #define DATA_DIR_LSB     1U 
 #define DATA_DIR_MSB     0U    
 
 
  /******** BIDirection mode  *******/ 
 #define BI_DI_ON      1U 
 #define BI_DI_OFF     0U 
  
  
  
  
  
 
 /*		Function Take  : CLK_IDEAL_0
						- SPINumber  		: (SPIX) X{1,2,.....,6} 
						- DeviceMode    : SPI_MASTER   , SPI_SLAVE
						- ClockPolarity : CLK_IDEAL_0  , CLK_IDEAL_1  ( The ideal state by low or high )
						- ClockPhase    : READ_FRIST_EDGE , WRITE_FRIST_EDGE  ( Read The Writ or Write then read ) -->Write frist to make a place can rread from it 
						- DataSize      : DATA_SIZE_8  , DATA_SIZE_16
						- DataDir       : DATA_DIR_MSB , DATA_DIR_LSB
						- NssMode       : NSS_MODE_SW  , NSS_MODE_HW
						- ssm 					: Automatic make ss low and after high but only when have only one slave 
						- SSI           : Force in  hardware --> value of bin
						- BiDirMode     : Bi_Dir_ON    , Bi_Dir_OFF
						- RX Only       : Resive only bit 10
						- BuadRate      : 
						- EN SPI				: Enable SPIx 
				To Iniat The SPI 
		
		*/ 
        
        
        
    void MSPI_voidInit(u8 Copy_u8SPINumber ,u8 Copy_u8DeviceMode ,u8 Copy_u8ClockPolarity ,u8 Copy_u8ClockPhase ,u8 Copy_u8DataSize ,u8 Copy_u8DataDir , u8 Copy_u8NssMode,u8 Copy_u8BaudRate ,u8 Copy_u8BiDirMode) ;
 
    /*  Disable SPI  API    
    
      - Fuction take : SPI Number  
      - Function return : void 
  
    
    */    
 
     void MSPI_vSPIDisable(u8 Copy_u8SPINumber);  
     
    
     
     /*  Enable SPI  API    
    
      - Fuction take : SPI Number  
      - Function return : void 
  
     
    */
     
     void MSPI_vSPIEnable(u8 Copy_u8SPINumber); 

     

     /*  Transive Function     
      Fuction take : SPI Number   , Data you want to send 
      Function return :  date you want to recive 
    */
         
     u8 MSPI_vWriteData(u8 Copy_u8SPINumber , Copy_u8Data); 




#endif 