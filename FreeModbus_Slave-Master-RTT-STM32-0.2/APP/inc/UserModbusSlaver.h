#ifndef	USER_MODBUS_SLAVER_H
#define USER_MODBUS_SLAVER_H
/* ----------------------- Modbus includes ----------------------------------*/
#include "mb.h"
#include "mbport.h"
/* ----------------------- Defines ------------------------------------------*/
#define DISCRETE_INPUT_START        1
#define DISCRETE_INPUT_NDISCRETES   16
#define COIL_START                  1
#define COIL_NCOILS                 64
#define REG_INPUT_START             1
#define REG_INPUT_NREGS             100
#define REG_HOLDING_START           1
#define REG_HOLDING_NREGS           100

//===========================�ڱ��ּĴ����У�������ַ��Ӧ�Ĺ��ܶ���========================
#define          HD_RESERVE                     0		  //����
#define          HD_CPU_USAGE_MAJOR             1         //��ǰCPU�����ʵ�����λ
#define          HD_CPU_USAGE_MINOR             2         //��ǰCPU�����ʵ�С��λ

//===========================������Ĵ����У�������ַ��Ӧ�Ĺ��ܶ���========================
#define          IN_RESERVE                     0		  //����

//===========================����Ȧ�У�������ַ��Ӧ�Ĺ��ܶ���============================
#define          CO_RESERVE                     2		  //����

//===========================����ɢ�����У�������ַ��Ӧ�Ĺ��ܶ���=========================
#define          DI_RESERVE                     1		  //����

/*--------------------------Extern Functions------------------------------------*/
extern UCHAR xMBUtilGetBits( UCHAR * ucByteBuf, USHORT usBitOffset, UCHAR ucNBits );
extern void  xMBUtilSetBits( UCHAR * ucByteBuf, USHORT usBitOffset, UCHAR ucNBits,UCHAR ucValue );

#endif
