#pragma once


class Operations
{
public:

	/// All of these operations will be done in x86 assembly

	void SignedAddition(short int FirstNum, short int SecondNum, short int &OutAnswer);
	void SignedSubtraction(short int FirstNum, short int SecondNum, short int &OutAnswer);
	void SignedMultiplication();
	void SignedDivision();

	void UnsignedAddition(unsigned short FirstNum, unsigned short SecondNum, unsigned short &OutAnswer);
	short int UnsignedSubtraction();
	short int UnsignedMultiplication();
	short int UnsignedDivision();

};
