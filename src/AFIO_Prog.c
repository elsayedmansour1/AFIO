#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"AFIO_INT.h"
#include"AFIO_Priv.h"
#include"AFIO_Config.h"



void	MAFIO_VidSelectEXTI(u8 Copy_u8Port,u8 Copy_u8Line_Number)
{
	if     (Copy_u8Line_Number<4)
	{
	AFIO->EXTICR1&= ~ ( ( 0b1111 )    << ( Copy_u8Line_Number * 4 ));
	AFIO->EXTICR1|=( Copy_u8Port )    << ( Copy_u8Line_Number * 4 );	
	}
	else if(Copy_u8Line_Number<8)
	{
	AFIO->EXTICR2&= ~ ( ( 0b1111 )    << ( Copy_u8Line_Number * 4 ));	
	AFIO->EXTICR2|=( Copy_u8Port )    << ( Copy_u8Line_Number * 4 );	
	}
	else if(Copy_u8Line_Number<12)
	{
	AFIO->EXTICR3&= ~ ( ( 0b1111 )    << ( Copy_u8Line_Number * 4 ));	
	AFIO->EXTICR3|=( Copy_u8Port )    << ( Copy_u8Line_Number * 4 );	
	}
	else if(Copy_u8Line_Number<16)
	{
	AFIO->EXTICR4&= ~ ( ( 0b1111 )    << ( Copy_u8Line_Number * 4 ));	
	AFIO->EXTICR4|=( Copy_u8Port )    << ( Copy_u8Line_Number * 4 );	
	}
}
