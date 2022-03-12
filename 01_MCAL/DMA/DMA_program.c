/********************************************************
*                - DMA_program.c                        *                    
*                - Created: 20 / 2 / 2022               *
*                - Author : Mohamed Khaled              *
*                - Note : 
*                                                       *
******************** code *****************************/  

#include #


 void MDMA_vInit(void){ 

  // Disable strea 
 DMA2->Stream_ID[Copy_StreamID].CR &= ~(1<<0); 
 
 // wait for enable bit to equal zero 
 while(GETBIT(DMA2->Stream_ID[Copy_StreamID].CR,0) != 0 ); 
 
 //Select channel0 
 DMA2->Stream_ID[Copy_StreamID].CR &= ~(0b111 << 25);  
 
 //configure stream periority to high periority 
 DMA2->Stream_ID[Copy_StreamID].CR |= (0b10<< 16);   
 
 //Memory burst transfer configuration 
 DMA2->Stream_ID[Copy_StreamID].CR |= (0b10<< 23);  
 
 //Peripheral burst transfer configuration 
 DMA2->Stream_ID[Copy_StreamID].CR |= (0b10<< 21);  
  
  // Memory data size->half word
  DMA2->Stream_ID[Copy_StreamID].CR |= (0b01<< 13);  
  
  // Peripheral data size->half wprd 
 DMA2->Stream_ID[Copy_StreamID].CR |= (0b01<< 11);   
 
 
 //Transfer complete interrupt enable
 DMA2->Stream_ID[Copy_StreamID].CR |= (0b1<< 4);   

    
    

 
 //fifo configration 
 // half word 
 DMA2->Stream_ID[Copy_StreamID].FCR |= (1<<0);
 

 
	 
 }



void MDMA_vSetAdress(u32 *ptr_u8SrcAdd , u32 *ptr_u8DistAdd , u32 Copy_u32Size , u8 Copy_StreamID){
  
  //Source adress 
  DMA2->Stream_ID[Copy_StreamID].PAR = ptr_u8SrcAdd;
  
  //Destination adress 
  DMA2->Stream_ID[Copy_StreamID].M0AR = ptr_u8DistAdd; 
  
  //Total Numbers of bytes 
    DMA2->Stream_ID[Copy_StreamID].NDTR = Copy_u32Size;
    
   
	
} 



void MDMA_vDmaEnable(u8 Copy_u8DMAId){ 
   //Clear status register 
    DMA2->LISR = 0;
    DMA2->HISR = 0; 
    // Enable streaming 
  	DMA2->Stream_ID[Copy_StreamID].CR |= (1<<0); 
}