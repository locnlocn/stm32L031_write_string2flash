uint32_t PageError ;
char dddd[4]="abcd";
uint32_t  Address=0x08007F30;// address depends on your needs
uint32_t  data;
data = *(uint32_t *)&dddd ;

FLASH_EraseInitTypeDef f;
 f.TypeErase = FLASH_TYPEERASE_PAGES;
 f.PageAddress = Address;
 f.NbPages = 255;

int main(void)
{

 //  Initialize all 

  HAL_FLASH_Unlock();
                                                                //  HAL_FLASHEx_Erase(&f,&PageError);	
	HAL_FLASH_Program(FLASH_TYPEPROGRAM_WORD ,Address,data);	
	                                                             //HAL_UART_Transmit(&hlpuart1,(__IO uint8_t*)0x08007F30,5,200);

  		 while (1)
			 {
       }
}       
