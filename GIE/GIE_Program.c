/********************************************************************/
/********************************************************************/
/******  Name        : Osama Gamil  	  					*********/
/******  File Name   : DIO_mainProgram.c    				*********/
/******  Layer	     :	MCAL		 	  					*********/
/******  Date 	     : 22/3/2023		  					*********/
/******  Description : function prototype 					*********/
/********************************************************************/
/********************************************************************/


#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"


#include "GIE_interface.h"
#include "GIE_private.h"


/*Page 24 in data sheet 
To activate the Global Interrupt Set Pin number SREG=7  */
void EXIT_voidGlobalActivate(void)
{
	SET_BIT(SREG,SREG_I);
}

void EXIT_voidGlobalDeActivate(void)
{
	CLR_BIT(SREG,SREG_I);
}
