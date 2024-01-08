#pragma once
#include <iostream>

class chargeData
{
public:
	int chargeAmount(int& data);
	int ballance(int& ballanceAmount);

	chargeData(int);
	chargeData();
	~chargeData();

private:
	int amount;
};

chargeData::chargeData(int data)
{
	if (data > 0) {
		amount = 0;
	};

	return;
}

chargeData::chargeData() 
{
	amount = 0;
	return;
}

chargeData::~chargeData()
{
}

int chargeData::chargeAmount(int& data) {

	//data += amount;
	return data;
};

int chargeData::ballance(int& cashAmount) {
	int ballanceData = amount + cashAmount;

	if (ballanceData != 0) {


		if (ballanceData > 0) {
			std::cout << "Amount payed by andvance\n";
			
		};

		if (ballanceData < 0) {
			std::cout << "Debt not payed totaly\n";
			
		};
	}
	else {
		std::cout << "Charged amount is 0\n";
		
	};

	return ballanceData;
};
