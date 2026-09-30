// Lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

int main()
{

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

    setw()
		setprecision(2)
		std::cout << "Receipt" << std::endl;

        feat: Add basic receipt output and input formatting;

}

