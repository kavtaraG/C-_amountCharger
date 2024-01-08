#pragma once
#include <iostream>

class payable
{
public:
	int payAmount(int& amounData) ;

	payable(int);
	payable();
	~payable();

private:
	int amount;
};


payable::payable(int amountData)
{
	if (amount > 0) {
		amount;
	};
	return;
}

payable::payable() {
	
	return;
}

payable::~payable()
{
}

int payable::payAmount(int& amountData)  {
	//amountData--;
	return amountData;
};

