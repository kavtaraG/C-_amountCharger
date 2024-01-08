// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header1.h"
#include "payable.h"

void userInfo();
void chargeAndPayInfo(chargeData& amount, chargeData& chargeBallance, payable& payAmount);

int main() {

	chargeData chargeAmountFromMain;
	chargeData chargeBallanceFromMain;

	payable payAmountFromMain;

	


	int choise;
	

	userInfo();

	std::cout << "Enter integer: ";
	std::cin >> choise;
	std::cout << "\n";

	while (choise != 0 )
	{
		switch (choise)
		{
		case 1:
			std::cout << "January\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 2:
			std::cout << "February\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 3:
			std::cout << "March\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 4:
			std::cout << "April\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 5:
			std::cout << "May\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 6:
			std::cout << "June\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 7:
			std::cout << "Julay\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 8:
			std::cout << "August\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 9:
			std::cout << "September\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 10:
			std::cout << "Octomber\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 11:
			std::cout << "November\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		case 12:
			std::cout << "December\n";
			chargeAndPayInfo(chargeAmountFromMain, chargeBallanceFromMain, payAmountFromMain);
			break;
		default:
			std::cout << "Invalid input\n";
			break;
		};

		std::cout << "To quit press 0: \n";
		std::cout << "To continiue, press any key: ";
		std::cin >> choise;
		
	
	};

	return 0;
};


void userInfo() {
	std::cout << "*** Wellcome ***\n";
	std::cout << "Choose from 1 to 12 integers,";
	std::cout << " to know charged and payed amounts." << "\n";
	std::cout << "To quite, please press 0. \n";


	return;
};

void chargeAndPayInfo(chargeData& amount, chargeData& chargeBallance, payable& payAmount) {

	int inputData;
	int payData;
	int zero = 0;
	std::cout << "Enter charge amount: ";
	std::cin >> inputData;
	std::cout << "\n";

	std::cout << "Enter pay amount: ";
	std::cin >> payData;
	std::cout << "\n";

	
	int initialAmount = amount.chargeAmount(inputData);
	int finalAmount = payAmount.payAmount(payData); 

	int testPsotive = initialAmount + finalAmount;
	int testNegative = initialAmount - finalAmount;



	if (testNegative != 0) {

		if (testPsotive > 0) {

			if (testNegative < 0) {
				std::cout << "Final ballance is negative, ";
				std::wcout << "ballance is: " << testNegative << "\n";
			};
			
		}
		else {
			
		}	
		std::cout << "Final ballance is positive, ";
		std::cout << "ballance is: " << testPsotive << "\n";

	};

	if (testNegative == 0) {
		std::cout << "Final ballance is zero: " << testNegative << "\n";
	};

	
	return;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
