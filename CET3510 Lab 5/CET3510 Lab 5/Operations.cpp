#include "Operations.h"

	///All Operations here are written in assembly for the purpse of the lab
void Operations::SignedAddition(short int FirstNum, short int SecondNum, short int &OutAnswer)
{
	short int Answer;
	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		ADD AX, BX;
		MOV Answer, AX;
	}

	OutAnswer = Answer;

	return;

}

void Operations::SignedSubtraction(short int FirstNum, short int SecondNum, short int &OutAnswer)
{
	short int Answer;
	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		SUB AX, BX;
		MOV Answer, AX;
	}

	OutAnswer = Answer;

	return;
}

void Operations::SignedMultiplication(short int FirstNum, short int SecondNum, short int &OutAnswer)
{
	short int Answer;
	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		IMUL BX;
		MOV Answer, AX;

	}

	OutAnswer = Answer;

	return;
}

void Operations::SignedDivision(short int FirstNum, short int SecondNum, short int &OutAnswer)
{

	//TODO Fix issues regarding this division
	short int Answer;

	

	_asm
	{
		MOV DX, 0;
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		IDIV BX;
		MOV Answer, AX;  //

	}
	OutAnswer = Answer;
	return;

}

							

///Here starts the unsigned operations, again written in x86 assembly				
void Operations::UnsignedAddition(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	unsigned short int Answer;
	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		ADD AX, BX;
		MOV Answer, AX;

	}

	OutAnswer = Answer;


	return;
}

void Operations::UnsignedSubtraction(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	unsigned short Answer;
	_asm
	{
		MOV CX, FirstNum;
		MOV DX, SecondNum;
		SUB CX, DX;
		MOV Answer, CX;
	}
	OutAnswer = Answer;

	return;
}

void Operations::UnsignedMultiplication(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	unsigned short Answer;

	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		MUL BX;
		MOV Answer, AX;

	}

	OutAnswer = Answer;

	return;
}

void Operations::UnsignedDivision(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	//TODO fix this division error
	unsigned short Answer; 
	_asm
	{
		MOV DX, 0;
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		DIV BX;
		MOV Answer, AX;  

	}

	OutAnswer = Answer;
	return;
}
