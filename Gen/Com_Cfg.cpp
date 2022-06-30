/*******************************************************************************************************************************
FileName:                                               Com_Cfg.c
AUTOSAR Version:                                          4.2.2
******************************************************************************************************************************/
/******************************************************************************************************************************
 **                                                     Includes                                                             **
 ******************************************************************************************************************************/
#include "../inc/Com.h"
#include "Com_Cfg.h"
#include "../Inc/Com_Types.h"
#include "../Platform_Types.h"
#include "../MainWindow.h"
 /*****************************************************************************************************************************
  **                                         Post-Build Configuration variables values                                       **
  *****************************************************************************************************************************/

extern Ui::MainWindowClass ui_extern;

/* ComSignal Buffers */
uint8 ComSignal0Buffer[1];
uint8 ComSignal1Buffer[1];
uint8 ComSignal2Buffer[1];
uint8 ComSignal3Buffer[1];
uint8 ComSignal4Buffer[1];
uint8 ComSignal5Buffer[1];
uint8 ComSignal6Buffer[1];
uint8 ComSignal7Buffer[1]; //8
uint8 ComSignal8Buffer[1]; //4

// /* ComGroupSignal Buffers */
// uint8 ComGroupSignal0Buffer[2];
// uint8 ComGroupSignal1Buffer[2];

/* Com IPdu Buffers */
uint8 ComIPdu0Buffer[2]; // signals 1 bit
uint8 ComIPdu1Buffer[2]; // signals of speed and tachometer

void Com_CbkSignal0TxAck(void)
{
    //printf("Com_CbkSignal0TxAck\n");
}

void Com_CbkSignal1TxAck(void)
{
    //UARTprintf("Com_CbkSignal1TxAck\n");
}
void Com_CbkSignal2TxAck(void)
{
    //printf("Com_CbkSignal0TxAck\n");
}

void Com_CbkSignal3TxAck(void)
{
    //UARTprintf("Com_CbkSignal1TxAck\n");
}
void Com_CbkSignal4TxAck(void)
{
    //printf("Com_CbkSignal0TxAck\n");
}

void Com_CbkSignal5TxAck(void)
{
    //UARTprintf("Com_CbkSignal1TxAck\n");
}
void Com_CbkSignal6TxAck(void)
{
    //printf("Com_CbkSignal0TxAck\n");
}

void Com_CbkSignal7TxAck(void)
{
    //UARTprintf("Com_CbkSignal1TxAck\n");
}
void Com_CbkSignal8TxAck(void)
{
    //printf("Com_CbkSignal0TxAck\n");
}




Com_Type Com =
{
    .ComConfig =
    {
        .ComSignal =
        {
            { //
             .ComBitPosition = 0, // position within ipdu
             .ComBitSize = 1,	  // size in bits
             .ComHandleId = 0,
             .ComNotification = &Com_CbkSignal0TxAck, // only in sender side we may not need it
             .ComSignalEndianness = LITTLE_ENDIAN, // can be omitted	  // 
             .ComSignalLength = 1, // size in bytes
             .ComSignalType = UINT8,// type of signal
             .ComTransferProperty = TRIGGERED, // 
             .ComUpdateBitPosition = 7, // can be omitted
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE, //initial value
             .ComBufferRef = ComSignal0Buffer // value stored of the signal
            },
            { //1
             .ComBitPosition = 1,
             .ComBitSize = 1,
             .ComHandleId = 1,
             .ComNotification = &Com_CbkSignal1TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 1,
             .ComSignalType = UINT8,
             .ComTransferProperty = TRIGGERED,
             .ComUpdateBitPosition = 8,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal1Buffer
            },
            { //2
             .ComBitPosition = 2,
             .ComBitSize = 1,
             .ComHandleId = 2,
             .ComNotification = &Com_CbkSignal2TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 1,
             .ComSignalType = UINT8,
             .ComTransferProperty = TRIGGERED,
             .ComUpdateBitPosition = 9,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal2Buffer
            },
            { //3
             .ComBitPosition = 3,
             .ComBitSize = 3,
             .ComHandleId = 3,
             .ComNotification = &Com_CbkSignal3TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 1,
             .ComSignalType = UINT8,
             .ComTransferProperty = TRIGGERED,
             .ComUpdateBitPosition = 10,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal3Buffer
            },
            { //
             .ComBitPosition = 4,
             .ComBitSize = 1,
             .ComHandleId = 4,
             .ComNotification = &Com_CbkSignal4TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 11,
             .ComSignalType = UINT8,
             .ComTransferProperty = TRIGGERED,
             .ComUpdateBitPosition = 8,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal0Buffer
            },
            {
             .ComBitPosition = 5,
             .ComBitSize = 1,
             .ComHandleId = 5,
             .ComNotification = &Com_CbkSignal5TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 12,
             .ComSignalType = UINT8,
             .ComTransferProperty = TRIGGERED,
             .ComUpdateBitPosition = 17,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal1Buffer
            },
            {
             .ComBitPosition = 6,
             .ComBitSize = 1,
             .ComHandleId = 6,
             .ComNotification = &Com_CbkSignal6TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 13,
             .ComSignalType = UINT8,
             .ComTransferProperty = TRIGGERED,
             .ComUpdateBitPosition = 8,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal2Buffer
            },
            {
             .ComBitPosition = 0,
             .ComBitSize = 8,
             .ComHandleId = 8,
             .ComNotification = &Com_CbkSignal7TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 1,
             .ComSignalType = UINT8,
             .ComTransferProperty = PENDING,
             .ComUpdateBitPosition = 11,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal3Buffer
            },
            { //Tachomemter

             .ComBitPosition = 8,
             .ComBitSize = 4,
             .ComHandleId = 9,
             .ComNotification = &Com_CbkSignal8TxAck,
             .ComSignalEndianness = LITTLE_ENDIAN,
             .ComSignalLength = 1,
             .ComSignalType = UINT8,
             .ComTransferProperty = PENDING,
             .ComUpdateBitPosition = 12,
             .ComSignalInitValue = COM_SIGNAL_INIT_VALUE,
             .ComBufferRef = ComSignal3Buffer
            }
        }
       }
};