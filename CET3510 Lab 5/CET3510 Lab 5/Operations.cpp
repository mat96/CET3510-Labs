#include "Operations.h"
#include <iostream>

	///All Operations here are written in assembly for the purpse of the lab
void Operations::SignedAddition(short int FirstNum, short int SecondNum, short int &OutAnswer)
{
	int UnusedInt = 9; // 9 is not used or called


	short int Answer;
	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		ADD AX, BX;
		MOV Answer, AX;
		JO True;
		JNO False;
	}

	if (UnusedInt = -1)
	{

	True:
		std::cout << " Overflow Flag = 1\n";

	}
	else if (UnusedInt = -2)
	{

	False:
		std::cout << "Overflow Flag = 0\n";
	}

	 
	OutAnswer = Answer;

	return;

}

void Operations::SignedSubtraction(short int FirstNum, short int SecondNum, short int &OutAnswer)
{
	int UnusedInt = 9; // 9 is not used or called 
	short int Answer;

	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		SUB AX, BX;
		MOV Answer, AX;
		JO True;
		JO False;
	}

	if (UnusedInt = -1)
	{

	True:
		std::cout << " Overflow Flag = 1\n";

	}
	else if (UnusedInt = -2)
	{

	False:
		std::cout << "Overflow Flag = 0\n";
	}

	OutAnswer = Answer;

	return;
}

void Operations::SignedMultiplication(short int FirstNum, short int SecondNum, short int &OutAnswer)
{

	short int Answer;
	int UnusedInt = 9; // 9 is not used 

	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		IMUL BX;
		MOV Answer, AX;
		JO True;
		JNO False;
	}

	if (UnusedInt = -1)
	{

	True:
		std::cout << " Overflow Flag = 1\n";

	}
	else if (UnusedInt = -2)
	{

	False:
		std::cout << "Overflow Flag = 0\n";
	}


	OutAnswer = Answer;

	return;
}

void Operations::SignedDivision(short int FirstNum, short int SecondNum, short int &OutAnswer)
{

	short int Answer;
	int UnusedInt = 9; // 9 is not used 

	

	_asm
	{
		MOV DX, 0;
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		IDIV BX;
		MOV Answer, AX;  
		JO True;
		JNO False;
		

	}

	if (UnusedInt = -1)
	{

	True:
		std::cout << " Overflow Flag = 1\n";

	}
	else if (UnusedInt = -2)
	{

	False:
		std::cout << "Overflow Flag = 0\n";
	}


	OutAnswer = Answer;
	return;

}

							

///Here starts the unsigned operations, again written in x86 assembly				
void Operations::UnsignedAddition(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	int UnusedInt = 9; // 9 is not used 


	// use carry flag for unsigned operations
	unsigned short int Answer;
	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		ADD AX, BX;
		MOV Answer, AX;
		JC True;
		JNC False;
	}

	if (UnusedInt = -1)
	{

	True:
		std::cout << " Carry Flag = 1\n";

	}
	else if (UnusedInt = -2)
	{

	False:
		std::cout << "Carry Flag = 0\n";
	}

	OutAnswer = Answer;


	return;
}

void Operations::UnsignedSubtraction(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	// use carry flag for unsigned operations
	int UnusedInt = 9;
	unsigned short Answer;
	_asm
	{
		MOV CX, FirstNum;
		MOV DX, SecondNum;
		SUB CX, DX;
		MOV Answer, CX;
		JC True;
		JNC False;
	}

	if (UnusedInt = -1)
	{
        True:
		std::cout << " Carry Flag = 1\n" ;

	}
	else if (UnusedInt = -2)
	{
		False:
		std::cout << "Carry Flag = 0\n";
	}

	OutAnswer = Answer;

	return;
}

void Operations::UnsignedMultiplication(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	// use carry flag for unsigned operation
	int UnusedInt = 9;

	unsigned short Answer;

	_asm
	{
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		MUL BX;
		MOV Answer, AX;
		JC True;
		JNC False;

	}

	if (UnusedInt = -1)
	{
	True:
		std::cout << " Carry Flag = 1\n";

	}
	else if (UnusedInt = -2)
	{
	False:
		std::cout << "Carry Flag = 0\n";
	}


	OutAnswer = Answer;

	return;
}

void Operations::UnsignedDivision(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer)
{
	// use carry flag for unsigned operation
	int UnusedInt = 9;

	unsigned short Answer; 
	_asm
	{
		MOV DX, 0;
		MOV AX, FirstNum;
		MOV BX, SecondNum;
		DIV BX;
		MOV Answer, AX;  
		JC True;
		JNC False;

	}

	if (UnusedInt = -1)
	{
	True:
		std::cout << " Carry Flag = 1\n";

	}
	else if (UnusedInt = -2)
	{
	False:
		std::cout << "Carry Flag = 0\n";
	}

	OutAnswer = Answer;
	return;
}

