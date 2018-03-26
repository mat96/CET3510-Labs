#include <iostream>
#include <stdio.h>
#include <string>
#include"Operations.h"

void Introduction();
void Calculator();
void SignedOperations();
void UnsignedOperations();
bool AskToCalculateAgain();
int AskOperation();
Operations Assembly; // Instantiates assembly functions to main.cpp through classes

int main()
{
	bool bCalculateAgain = false; //assumes user doesn want to calculate again

	do
	{
		Introduction();
		Calculator();
		bCalculateAgain = AskToCalculateAgain();

	} while (bCalculateAgain);


	return 0;




}



void Introduction()
{
	

	std::cout << "Welcome to the Assembly Calculator\n";
	std::cout << "         _____________________\n";
	std::cout << "	|  _________________  |\n";
	std::cout << "	| |            3.14 | |\n";
	std::cout << "	| |_________________| |\n";
	std::cout << "	|  ___ ___ ___   ___  |\n";
	std::cout << "	| | 7 | 8 | 9 | | + | |\n";
	std::cout << "	| |___|___|___| |___| |\n";
	std::cout << "	| | 4 | 5 | 6 | | - | |\n";
	std::cout << "	| |___|___|___| |___| |\n";
	std::cout << "	| | 1 | 2 | 3 | | x | |\n";
	std::cout << "	| |___|___|___| |___| |\n";
	std::cout << "	| | . | 0 | = | | / | |\n";
	std::cout << "	| |___|___|___| |___| |\n";
	std::cout << "	|_____________________|\n";


	std::cout << " I will diplay your answers in decimal and hexadecimal format\n\n";
	
}

void Calculator()
{
	int Answer;
	std::cout << "What kind of numbers would you like to use \n 1)Signed Number\n 2)Unsigned\n";
	std::cin >> Answer;

	//Checks for invalid inputs 
	while (Answer < 1 || Answer > 2)
	{
		std::cout << "Please enter a valid response\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> Answer;
	}


	// Signed integer Arithmetic Operations 
	if (Answer == 1)
	{
		SignedOperations();
		
	}


	//Unsigned integer Arithmetic Operations
	else 
	{
		UnsignedOperations();

	}



	
	return;
}

void SignedOperations()
{

	short int FirstNum;
	short int SecondNum;
	std::cout << "First Number: ";
	std::cin >> FirstNum;
	std::cout << "Second number: ";
	std::cin >> SecondNum;

	short int OutAnswer; // The results will be referenced here


	switch (AskOperation())
	{

	case 1:
	{
		//Signed Addition 

		 Assembly.SignedAddition(FirstNum, SecondNum, OutAnswer);

		//Prints Decimal Sum
		std::cout << "Decimal: " << FirstNum << " + " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " + " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer << std::endl;


		break;
	}

	case 2:
	{
		//Signed Subtraction 

		
		Assembly.SignedSubtraction(FirstNum, SecondNum, OutAnswer);

		//Prints Decimal Sum
		std::cout << "Decimal: " << FirstNum << " - " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " - " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer << std::endl;

		break;

	}

	case 3:
	{

		// Signed Multiplication 
		Assembly.SignedMultiplication(FirstNum, SecondNum, OutAnswer);
			
			//Prints Decimal Sum
			std::cout << "Decimal: " << FirstNum << " * " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " * " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer << std::endl;


		break;
	}


	default :
	{
		/// Signed Division 
		Assembly.SignedDivision(FirstNum, SecondNum, OutAnswer);

		//Prints Decimal Sum
		std::cout << "Decimal: " << FirstNum << " / " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " / " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer << std::endl;
		break;

	}


	}

	return;
}


void UnsignedOperations()
{
	unsigned short FirstNum;
	unsigned short SecondNum;
	std::cout << "First Number: ";
	std::cin >> FirstNum;
	std::cout << "Second number: ";
	std::cin >> SecondNum;


	unsigned short OutAnswer; // The results will be referenced here

	switch (AskOperation())
	{


	case 1:
	{
		//Unsigned Addition operation
		Assembly.UnsignedAddition(FirstNum, SecondNum, OutAnswer);

		// Prints Decimal Sum
		std::cout << "Decimal: " << FirstNum << " + " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " + " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer;
		break;
	}

	case 2:
	{
		//Unsigned Subtraction
		Assembly.UnsignedSubtraction(FirstNum, SecondNum, OutAnswer);

		//Prints Decimal Sum
		std::cout << "Decimal: " << FirstNum << " - " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " - " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer << std::endl;
		break;

	}

	case 3:
	{

		//Unsigned Multiplication here
		Assembly.UnsignedMultiplication(FirstNum, SecondNum, OutAnswer);

		//Prints Decimal Sum
		std::cout << "Decimal: " << FirstNum << " * " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " * " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer << std::endl;
		break;
	}


	default : 
	{
		///Unsigned Division
		Assembly.UnsignedDivision(FirstNum, SecondNum, OutAnswer);

		std::cout << "Decimal: " << FirstNum << " / " << SecondNum << " = " <<
			std::dec << OutAnswer << std::endl;

		// Prints Hexadecimal sum
		std::cout << "Hexadecimal: " << std::hex << FirstNum << " / " << std::hex << SecondNum
			<< " = " << std::hex << OutAnswer << std::endl;
		break;

	}
	

	}

	return;
}



int AskOperation()
{
	int operation;

	std::cout << "Please enter what operation you would like to use\n";
	std::cout << " 1)Addition \n 2)Subtraction\n 3)Multiplication\n 4)Division\n";
	std::cin >> operation;

	//Error checking loop
	while (operation < 1 || operation > 4)
	{
		std::cout << "Please enter a valid response";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> operation;
	}

	return operation;


}

bool AskToCalculateAgain()
{

	std::cout << "Would you like to use the calulator again? (y/n)";
	std::string Response = "";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, Response);
	std::cout << std::endl;

	return (Response[0] == 'y') || (Response[0] == 'Y');


}



	


