/********************************************************************/
/********************************************************************/
/******  Name        : Osama Gamil  	  					*********/
/******  File Name   : DIO_interface.h    					*********/
/******  Layer	     :	MCAL		 	  					*********/
/******  Date 	     : 22/3/2023		  					*********/
/******  Description : function prototype 					*********/
/********************************************************************/
/********************************************************************/


/********************************************************************************/
/**************************Interfacing macro ************************************/
/********************************************************************************/
#ifndef GIE_INTERFACE_H_
#define GIE_INTERFACE_H_

/*the 3 interrupts pins chose between them to activate any Interrupt */
#define EXTI0   1 
#define EXTI1	2	
#define EXTI2	3




/* Function to activate the Global Interrupts */
void EXIT_voidGlobalActivate(void);

void EXIT_voidGlobalDeActivate(void);


#endif /* DIO_INTERFACE_H_ */
