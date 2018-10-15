#pragma once

#include <string>
#include <iostream>
using namespace std;

class Invoice
{
private:
	string partNumber;
	string partDescription;
	int quantity;
	int pricePerItem;
public:
	Invoice(string, string, int, int);
	void setPartnumber(string);
	string getPartnumber();
	void setPartDescription(string);
	string getPartDescription();
	void setQuantity(int);
	int getQuantity();
	void setPricePerItem(int);
	int getPricePerItem();
	int getInvoiceAmount();

};