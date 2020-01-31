//
//  prob4inflation.cpp
//  Meghna Raswan
//
//  It is difficult to make a budget that spans several years, because prices are not stable. If your company needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils two years from now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the expected cost of an item in a specified number of years. The program asks for the cost of the item, the number of years from now that the item will be purchased, and the rate of inflation. The program then outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a percentage, such as 5.6 (percent). Your program should then convert the percentage to a fraction, such as 0.056, and should use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)
 
#include "prob4inflation.hpp"
#include <iostream>
using namespace std;

int main()
{
    double itemCost; //declaring the itemCost variable and making the cost of the item  into a float
    int numYears; //declaring the numYears variable and making the number of years into an integer
    double inflationRate; //declaring the inflationRate variable and making the inflation rate  into a float
    int i; //declaring the i variable and making the variable  into an integer
    
    cout << "Enter the cost of the item: " << endl; //asking user input for the cost of the item
    cin >> itemCost;
    cout << "Enter the number of years from now that the item will be purchased: " << endl; //asking user input for number of years from now that the item will be purchased
    cin >> numYears;
    cout << "Enter the rate of inflation: " << endl; //asking user input for inflation rate
    cin >> inflationRate;
    
    inflationRate = inflationRate * 0.01; // converting inflation rate into decimal form
    
    for (i = 0; i < numYears; ++i) //as I is less than the number of years from now that the item will be purchased, the cost of the item will increase every year, adding the inflation rate each year
    {
        itemCost = itemCost + itemCost * inflationRate; //calculating the cost of the item for every year until the user input amount of years
    }
    cout << "The cost of the item in " << numYears << " years is $" << itemCost << ". "  << endl; //output the final item cost after the certain amount of years
    
    return 0;
}
