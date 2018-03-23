#include <iostream>
#include <stdio.h>
#include <string>
#include"Operations.h"

void Introduction();
void Calculator();
bool AskToCalculateAgain();
int AskOperation();
Operations Assembly; // Instantiates assembly functions to main.cpp through classes

int main()
{
	bool bCalculateAgain = false; 

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
	

	std::cout << "This is a calculator where you will be able to perform "
		"arithmetic operations with signed and unsigned integers\n";

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
		std::cout << "Please enter a valid response";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> Answer;
	}


	// Signed integer Arithmetic Operations 
	if (Answer == 1)
	{
		short int FirstNum;
		short int SecondNum;
		std::cout << "First Number: ";
		std::cin >> FirstNum;
		std::cout << "Second number: ";
		std::cin >> SecondNum;
		//scanf_s("%d %d",&FirstNum, &SecondNum);

		short int OutAnswer; // The results will be referenced here

		switch (AskOperation())
		{
			

		case 1:
		{
			
			//Signed Addition 
			 Assembly.SignedAddition(FirstNum, SecondNum, OutAnswer);

			//Prints Decimal Sum
			std::cout << "Decimal: "<< FirstNum << " + " << SecondNum << " = " << OutAnswer;

			// Prints Hexadecimal sum
			std::cout << "Hexadecimal: " << std::hex << FirstNum << " + " << std::hex << SecondNum
				<< " = " << std::hex << OutAnswer;
				
			break;
		}

		case 2:
		{
			//TODO  Insert signed subtraction here

			break;

		}

		case 3:
		{

			//TODO Insert signed multiplication here
			break;
		}


		case 4:
		{
			//TODO Insert signed Division here
			break;

		}

		default:
		{


		}

		}
	
	}


	//Unsigned integer Arithmetic Operations
	else if (Answer == 2)
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
			std::cout << "Decimal: " << FirstNum << " + " << SecondNum << " = " << OutAnswer;

			// Prints Hexadecimal sum
			std::cout << "Hexadecimal: " << std::hex << FirstNum << " + " << std::hex << SecondNum
				<< " = " << std::hex << OutAnswer;
			break;
		}

		case 2:
		{
			//TODO  Insert unsigned subtraction here

			break;

		}

		case 3:
		{

			//TODO Insert unsigned multiplication here
			break;
		}


		 default:
		{
			//TODO Insert unsigned Division here
			break;

		}
		// end of switch statment
	
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

	std::cout << "Would you like to use the calulator again?";
	std::string Response = "";

	std::getline(std::cin, Response);
	std::cout << std::endl;

	return (Response[0] == 'y') || (Response[0] == 'Y');


}



	

