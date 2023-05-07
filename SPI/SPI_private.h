/*
 * SPI_private.h
 *
 *  Created on: 11Apr.,2023
 *      Author: osama
 */

#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

/*SPI Control register  */
#define SPCR 	*((volatile u8 *)(0x2D))

#define SPCR_SPIE		7			//interrupt enable
#define SPCR_SPE		6			//enable spi

#define SPCR_DORD		5			//Data order
#define SPCR_MSTR		4			//Master/Slave
#define SPCR_CPOL		3			//Clock polarity
#define SPCR_CPHA		2			//clock phase
#define SPCR_SPR1		1			//OSc
#define SPCR_SPR0		0           //OSc



#define	SPSR	*((volatile u8 *)(0x2E))
#define SPSR_SPIF		7			//interrupt flag
#define SPSR_SPI2X		0			//double the speed

/*Data Register is write or read  */
#define SPDR	*((volatile u8 *)(0x2F))


#endif /* SPI_PRIVATE_H_ */
