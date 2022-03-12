/*******************************************************
*                - SPI_program.c                       *                    
*                - Created: 21 / 2 / 2022              *
*                - Author : Mohamed Khaled             *
*                - Note :                              
*                                                      *
******************** code *****************************/ 


  
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
                        
                           fPCLK/2       0b000 
                           fPCLK/4       0b001
                           fPCLK/8       0b010
                           fPCLK/16      0b011
                           fPCLK/32      0b100
                           fPCLK/64      0b101
                           fPCLK/128     0b110
                           fPCLK/256     0b111
                         
                           
						- EN SPI				: Enable SPI To Iniat The SPI 
	 
                     
                      
        
        */ 


    void MSPI_voidInit(u8 Copy_u8SPINumber ,u8 Copy_u8DeviceMode ,u8 Copy_u8ClockPolarity ,u8 Copy_u8ClockPhase ,u8 Copy_u8DataSize ,u8 Copy_u8DataDir , u8 Copy_u8NssMode,u8 Copy_u8BaudRate ,u8 Copy_u8BiDirMode){
        
         switch(Copy_u8SPINumber) {
              
              
               // device mode 
              case SPI1:  
                if (Copy_u8DeviceMode == SPI_MASTER) 
                {
                   SETBIT(SPI1_CR1, 2U);  
                } 
                else {
                    
                    CLRBIT(SPI1_CR1,2U);
                } 
                
                // clock plority 
                if (Copy_u8ClockPolarity == CLK_IDEAL_1) 
                {
                   SETBIT(SPI1_CR1, 1U);  
                } 
                else {
                    
                    CLRBIT(SPI1_CR1, 1U);
                } 
                  
                // clock phase 
                if (Copy_u8ClockPhase == WRITE_FRIST_EDGE) 
                {
                   SETBIT(SPI1_CR1, 0U);  
                } 
                else {
                    
                    CLRBIT(SPI1_CR1, 0U);
                }  
                
                // Data size 
                
                if (Copy_u8DataSize == DATA_SIZE_16) 
                {
                   SETBIT(SPI1_CR1, 11U);  
                } 
                else {
                    
                   CLRBIT(SPI1_CR1, 11U);
                }  
            
                // Data Direction 
                if (Copy_u8DataDir == DATA_DIR_LSB) 
                {
                   SETBIT(SPI1_CR1, 7U);  
                } 
                else {
                    
                    CLRBIT(SPI1_CR1, 7U);
                } 
                
                // Bidirection mode 
                if (Copy_u8BiDirMode == BI_DI_ON) 
                {
                   SETBIT(SPI1_CR1, 14U);  
                } 
                else {
                    
                    CLRBIT(SPI1_CR1, 14U);
                }
                // select baud rate 
                if (Copy_u8BaudRate <= 2b111 ){  
                  
                    SPI1_CR1 |= (Copy_u8BaudRate<<3);
                   
                } 

            break;   
            
            
            /*  
            
             Copy and complete if you want to use SPI2 , 3 or 4


            */ 
              
              
         }        
        
        
        
        
    } 
    
    
    
    
    /*  Enable SPI  API    
    
      Fuction take : SPI Number  
      Function return : void 
  
    
    */ 
    
    void MSPI_vSPIDisable(u8 Copy_u8SPINumber) { 
    
        switch(Copy_u8SPINumber){
            
            case SPI1 : CLRBIT(SPI1_CR1 , 6U)   break; 
            case SPI2 : CLRBIT(SPI2_CR1 , 6U)   break;
            case SPI3 : CLRBIT(SPI3_CR1 , 6U)   break;
            case SPI4 : CLRBIT(SPI4_CR1 , 6U)   break;    
            
        } 
        
    } 
     
     
    /*  Disable SPI  API    
    
      Fuction take : SPI Number  
      Function return : void 
  
    
    */
    
    
     
    void MSPI_vSPIEnable(u8 Copy_u8SPINumber) { 
    
        switch(Copy_u8SPINumber){
            
            case SPI1 : SETBIT(SPI1_CR1 , 6U)  break; 
            case SPI2 : SETBIT(SPI2_CR1 , 6U)  break; 
            case SPI3 : SETBIT(SPI3_CR1 , 6U)  break; 
            case SPI4 : SETBIT(SPI4_CR1 , 6U)  break;  
        }
        
        
    } 
    
    
    
    /*  Transive Function     
    
      Fuction take : SPI Number   , Data you want to send 
      Function return :  date you want to recive 
    */
    
    
    u32 MSPI_vWriteData(u8 Copy_u8SPINumber,Copy_u32Data){ 
    
       u32 Local_u32Data = 0; 
       
       switch(Copy_u8SPINumber){ 
         
          case SPI1 :  
          
          
           SPI1_DR = Copy_u8Data ; 
          
            /*
               waiting until tx buffer is embty and then transmit 
               
               0: Tx buffer not empty
               1: Tx buffer empty
            
            
            */ 
          
          
            while( GETBIT(SPI_SR,1) == 0 ) 
           
             
              
              
              /* waiting untill RX buffer is empty and then read the value 
                 Bit 0 RXNE: Receive buffer not empty
                   0: Rx buffer empty
                   1: Rx buffer not empty 
              */
             while(GETBIT(SPI_SR ,0) == 1 ) 
            
              Local_u32Data =  SPI1_DR ; 
            
            
            break; 
            
         
           
           
       }  

     return ;        
    }
  
   
   
   
   
  
  
  
  
  