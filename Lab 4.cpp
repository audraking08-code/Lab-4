// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

int main()
{
	int beginningInventory = 50;

    std::string foodItem;
    std::cout << "Pick a food item.";
	std::cin >> foodItem;
    std::string itemCode;
    std::cout << "Enter item code";
    std::cin >> itemCode;
    int itemQuantity;
    std::cout << "Enter item quantity";
	std::cin >> itemQuantity;
    double unitPrice;
    std::cout << "Enter unit price";
	std::cin >> unitPrice;
    char isMember;
    std::cout << "Are you a member? (Y/N)";
	std::cin >> isMember;

    std::cout << std::setw(10) <<
        std::setprecision(2)
        << "Receipt";
	if (isMember == 'Y' || isMember == 'y') {
		std::cout << std::setw(10) << "Food Item: " << foodItem << std::endl;
		std::cout << std::setw(10) << "Item Code: " << itemCode << std::endl;
		std::cout << std::setw(10) << "Item Quantity: " << itemQuantity << std::endl;
		std::cout << std::setw(10) << "Unit Price: $" << unitPrice << std::endl;
		double totalPrice = itemQuantity * unitPrice;
		double discount = totalPrice * 0.1; // 10% discount for members
		double finalPrice = totalPrice - discount;
		std::cout << std::setw(10) << "Total Price: $" << totalPrice << std::endl;
		std::cout << std::setw(10) << "Discount: $" << discount << std::endl;
		std::cout << std::setw(10) << "Final Price: $" << finalPrice << std::endl;
	}
	else {
		std::cout << std::setw(10) << "Food Item: " << foodItem << std::endl;
		std::cout << std::setw(10) << "Item Code: " << itemCode << std::endl;
		std::cout << std::setw(10) << "Item Quantity: " << itemQuantity << std::endl;
		std::cout << std::setw(10) << "Unit Price: $" << unitPrice << std::endl;
		double totalPrice = itemQuantity * unitPrice;
		std::cout << std::setw(10) << "Total Price: $" << totalPrice << std::endl;
	}
		std::cout << "Enter cashier notes";
		std::string cashierNotes;
		std::cin.ignore();
		std::getline(std::cin, cashierNotes);
		
		std::cout << "Ending Inventory";
		//std::string endingInventory;
		std::cout << beginningInventory - itemQuantity;
		//std::cout << "Ending Inventory Remaining: " << endingInventory << std::endl;
		//std::cout << std::setw(10) <<
		//std::setprecision(2);

}

