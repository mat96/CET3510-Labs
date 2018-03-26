#pragma once


class Operations
{
public:

	/// All of these operations will be done in x86 assembly

	void SignedAddition(short int FirstNum, short int SecondNum, short int &OutAnswer);
	void SignedSubtraction(short int FirstNum, short int SecondNum, short int &OutAnswer);
	void SignedMultiplication(short int FirstNum, short int SecondNum, short int &OutAnswer);
	void SignedDivision(short int FirstNum, short int SecondNum, short int &OutAnswer); //Needs Fixin

	void UnsignedAddition(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer);
	void UnsignedSubtraction(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer);
	void UnsignedMultiplication(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer);
	void UnsignedDivision(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer); //needs fixin

};
