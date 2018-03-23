#include "Operations.h"

void Operations::SignedAddition(short int FirstNum, short int SecondNum, short int &OutAnswer)
{

	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		ADD AX, BX;
		MOV OutAnswer, AX;
	}
	

	return;
}

void Operations::SignedSubtraction(short int FirstNum, short int SecondNum, short int & OutAnswer)
{

	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		SUB AX, BX;
		MOV OutAnswer, AX;
	}



	return;
}

void Operations::UnsignedAddition(unsigned short FirstNum, unsigned short SecondNum, unsigned short & OutAnswer)
{
	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		ADD AX, BX;
		MOV OutAnswer, AX;

	}



	return;
}
