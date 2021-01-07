#ifndef  _AFIO_PRIVATE_H
#define  _AFIO_PRIVATE_H
typedef struct
{
	volatile u32	EVCR;
	volatile u32	MAPR;
	volatile u32	EXTICR1;
	volatile u32	EXTICR2;
	volatile u32	EXTICR3;
	volatile u32	EXTICR4;
	
}MAFIO;

/**************************************************************/
#define	AFIO 	((volatile MAFIO *)0x40010000)
/**************************************************************/




















#endif
