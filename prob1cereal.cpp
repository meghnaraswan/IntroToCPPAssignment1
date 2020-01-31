//
//  prob1cereal.cpp
//  Meghna Raswan
//
//  A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed to yield one metric ton of cereal.

#include "prob1cereal.hpp"
#include <iostream>
using namespace std;

int main()
{
    double metricTon; //declaring the metricTon variable and making the metric tons into a float
    double ozOfCereal; //declaring the ozOfCereal variable and making the ounces of cereal into a float
    
    cout << "Enter the weight of the package of cereal in ounces: "; //print statement to indicate the user to input ounces of cereal
    cin >> ozOfCereal; //ask user input for ounces of cereal
    
    metricTon = ozOfCereal / 35273.92; //converting ounces of ceral to metric tons
    
    cout << "The of the box in metric tons is: " << metricTon << endl; //output the conversion
    return 0;
}
