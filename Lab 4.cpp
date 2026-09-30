// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

int main()
{
	int beginningInventory = 50;

	char drinkChoice, sizeChoice, memberChoice;
	int quantity;
	std::string foodName;
	std::string sizeName;
	double unitPrice = 0.0;
	double subtotal = 0.0;

	std::cout << "---Menu---";
	std::cout << "Items";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << std::setw(15) << "Small (s)";
	std::cout << std::setw(15) << "Medium (m)";
	std::cout << std::setw(15) << "Large (l)";
	std::cout << std::setw(18) << "Fries" << std::setw(15) << "$1.00" << std::setw(15) << "$1.50" << std::setw(15) << "$2.00" << std::endl;
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

	if (foodName == "Pizza" && sizeName == "s") unitPrice = 1.00;
	else if (sizeName == "m") unitPrice = 1.50;
	else if (sizeName == "l") unitPrice = 2.00;
	if (foodName == "Burger" && sizeName == "s") unitPrice = 1.00;
	else if (sizeName == "m") unitPrice = 1.50;
	else if (sizeName == "l") unitPrice = 2.00;
	if (foodName == "Fries" && sizeName == "s") unitPrice = 1.00;
	else if (sizeName == "m") unitPrice = 1.50;
	else if (sizeName == "l") unitPrice = 2.00;
	if (foodName == "Soda" && sizeName == "s") unitPrice = 1.00;
	else if (sizeName == "m") unitPrice = 1.50;
	else if (sizeName == "l") unitPrice = 2.00;

	subtotal = unitPrice * itemQuantity;

	if (isMember == 'Y' || isMember == 'y')
	{
		subtotal = subtotal * 0.9;
	}

std::cout << std::setw(10) <<
        std::setprecision(2)
        << "---Receipt---";
std::cout << "Food Item: " << foodName << std::endl;
std::cout << "unit Price: " << unitPrice << std::endl;
std::cout << "Subtotal: " << subtotal << std::endl;

		std::cout << "Enter cashier notes";
		std::string cashierNotes;
		std::cin.ignore();
		std::getline(std::cin, cashierNotes);
		
		std::cout << "Ending Inventory";
		std::cout << beginningInventory - itemQuantity;
		

}

