// Copyright 2023 Marli Peters
// This program asks the user for the diameter of the
// pizza. It then calculates and displays the total cost
// of the pizza with tax

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// declare constants
const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;

int main() {
    double diameter;

    // get user input
    std::cout << "Enter the diameter of the pizza (inches):\n";
    std::cin >> diameter;

    // calculate total
    float subtotal = LABOUR_COST + RENTAL_COST + diameter * INGRED_COST;
    float tax = diameter * HST;
    float total = subtotal + tax;

    // display results
    std::cout << std::endl;
    std::cout << "Total = " << fixed << setprecision(2) << total;
}
