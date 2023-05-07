/*
 * SPI_interface.h
 *
 *  Created on: 11Apr.,2023
 *      Author: osama
 */

#ifndef SPI_INTERFACE_H_
#define SPI_INTERFACE_H_


/*avalable config
 * for sync disable interrupt
 * enable spi
 * data order
 * select master or slave
 * select precsalter
 * clk polarity
 * clk phase  */


/*Slave or master disable intterupt
 * enable spi perph
 * Data order
 * select slave or master
 * clk polarity
 * clk phase */
/* Transcive return  Data */
typedef struct {
	u8 Data_order;
	u8 SCK_Polarity;
	u8 SCK_Phase;
	u8 Speed;
	u8 Prescaller;
}SPI_Master_t;

typedef struct {
	u8 Data_order;
	u8 SCK_Polarity;
	u8 SCK_Phase;
}SPI_Slave_t;

/*Master or slave check  */
#define SPI_MASTER 		1
#define SPI_SLAVE		0

/*Data Order */

#define SPI_DORDER_LSB		1
#define SPI_DORDER_MSB		0

/*ClK Phase Select */
#define SPI_Phase_LeadingSample		0
#define SPI_Phase_LeadingSetUp		1


/*Clock polarity */

#define SPI_CLK_POLRasingLead		1
#define SPI_CLK_POLFalinglead		0
/* main 4 functions*/
/*
 * 2-int slave
 * trasverAsync
 * trasverSync
 */

 /*Set Prescaler */
/*Set speed  */
#define SPI_NORSPED		1
#define SPI_DOBSPED		0


#define SPI_4FRE		0
#define SPI_16FRE		1
#define SPI_64FRE		2
#define SPI_128FRE		3

typedef struct{
	u8 * SendString;
	u8 * ReciveString;
}SPI_Chain_t;

void SPI_voidMasterinit(SPI_Master_t * ptrtoSpi);
void SpI_voidSlaveint(SPI_Slave_t * ptrtoSPISlave);

/*Single Data Sync */
u8 SPI_u8TransiveSync(u8  Copy_Data);


/* Sending Asnyc
 * Data and the call bacl function*/
u8 SPI_u8TransiveASync(u8  Copy_SendData,u8 * Copy_ReciveData,void (*PtrToFun)(void ));


/*Sending String Sync */
u8 SPI_u8TransiveSyncString(SPI_Chain_t * PtrToSPI_Chain);

#endif /* SPI_INTERFACE_H_ */
