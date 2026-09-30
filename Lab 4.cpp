// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <limits>

int main()
{
	int beginningInventory = 50;

	char drinkChoice, sizeChoice, memberChoice;
	int quantity;
	std::string foodName;
	std::string sizeName;
	std::string tipAdd;
	std::int32_t chosentipAmount;
	double unitPrice = 0.0;
	double subtotal = 0.0;
	double total = 0.0;

	std::cout << "---Menu---";
	std::cout << "Items";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::setw(15) << "Small (s)";
	std::cout << std::setw(15) << "Medium (m)";
	std::cout << std::setw(15) << "Large (l)";
	std::cout << std::setw(18) << "-------------------------------------------------------------------------Fries" << std::setw(15) << "$1.00" << std::setw(15) << "$1.50" << std::setw(15) << "$2.00" << std::endl;
	std::cout << std::setw(18) << "Burger" << std::setw(15) << "$1.00" << std::setw(15) << "$1.50" << std::setw(15) << "$2.00" << std::endl;
	std::cout << std::setw(18) << "Pizza" << std::setw(15) << "$1.00" << std::setw(15) << "$1.50" << std::setw(15) << "$2.00" << std::endl;
	std::cout << std::setw(18) << "Soda" << std::setw(15) << "$1.00" << std::setw(15) << "$1.50" << std::setw(15) << "$2.00" << std::endl;
	std::cout << "----------" << std::endl;

	std::cout << "Pick a food item.";
	std::cin >> foodName;
	std::cout << "Pick a size, (s/m/l). ";
	std::cin >> sizeName;
	int itemQuantity;
	std::cout << "Enter item quantity";
	std::cin >> itemQuantity;
	char isMember;
	std::cout << "Are you a member? (Y/N)";
	std::cin >> isMember;
	
	if (foodName == "Pizza" || foodName == "pizza")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Burger" || foodName == "burger")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Fries" || foodName == "fries")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}
	else if (foodName == "Soda" || foodName == "soda")
	{
		if (sizeName == "s") unitPrice = 1.00;
		else if (sizeName == "m") unitPrice = 1.50;
		else if (sizeName == "l") unitPrice = 2.00;
	}

	subtotal = unitPrice * itemQuantity;

	if (isMember == 'Y' || isMember == 'y')
	{
		subtotal = subtotal * 0.9;
	}

		double STATE_TAX = subtotal * 0.065;
		double COUNTY_TAX = subtotal * 0.005;
		double MUNCIPAL_TAX = subtotal * 0.02125;
		double totalTax = STATE_TAX + COUNTY_TAX + MUNCIPAL_TAX;
		std::cout << "County Tax: " << COUNTY_TAX << std::endl;
		std::cout << "Municipal Tax: " << MUNCIPAL_TAX << std::endl;
		std::cout << "State Tax: " << STATE_TAX << std::endl;
		std::cout << "Total Tax: " << totalTax << std::endl;


	std::cout << "Would you like to add a tip? (Y/N)";
	std::cin >> tipAdd;
	if (tipAdd == "Y" || tipAdd == "y")
	{
		double tipAmount = 0.0;
		std::string tipPercentage = "0.0";
		std::string chosentipAmount;
		std::cout << "Enter tip amount: ";
		std::cout << std::setw(18) << "15%" << std::setw(15) << "20%" << std::setw(15) << "25%" << std::setw(15) << "Other Amount" << std::endl;
		std::cin >> tipPercentage;
		if (tipPercentage == "15")
		{
			tipAmount = subtotal * 0.15;
		}
		else if (tipPercentage == "20")
		{
			tipAmount = subtotal * 0.20;
		}
		else if (tipPercentage == "25"	)
		{
			tipAmount = subtotal * 0.25;
		}
		else 
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Enter custom tip amount: ";
			std::cin >> tipAmount;

		}
		total = subtotal + totalTax + tipAmount;
	}

std::cout << std::setw(10) <<
        std::setprecision(2)
        << "---Receipt---";
std::cout << "Food Item: " << foodName << std::endl;
std::cout << "unit Price: " << unitPrice << std::endl;
std::cout << "Subtotal: " << subtotal << std::endl;
std::cout << "Total Tax: " << totalTax << std::endl;
std::cout << "Total: " << total << std::endl;


		std::cout << "Enter cashier notes";
		std::string cashierNotes;
		std::cin.ignore();
		std::getline(std::cin, cashierNotes);
		
		std::cout << "Ending Inventory ";
		std::cout << beginningInventory - itemQuantity;
		

}

