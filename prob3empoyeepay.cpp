//
//  prob3empoyeepay.cpp
//  Meghna Raswan
//
//  An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and $10 per week is withheld for medical insurance. Write a program that will read in the number of hours worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and the net take-home pay for the week.

#include "prob3empoyeepay.hpp"

#include <iostream>
using namespace std;

int main()
{
    double hrsWorked; //declare hrsWorked as a variable and make it a float
    double hrsRegular; //declare hrsRegular as a variable and make it a float
    
    cout << "How many hours did you work this week?: " << endl; //ask user input for hours they worked
    cin >> hrsWorked; //user inut for hrsWorked
    cout << "What is the regular amount of hours employees work per week? " << endl; //ask user input for regular amount of hours employees work per week
    cin >> hrsRegular; //user inut for hrsWorked
    
    if (hrsWorked > hrsRegular) //if the amount of hours the user worked is grater than the regular amount of hours empoyees work
    {
        double hrsOvertime; //declaring the hrsOvertime variable and making the hours worked overtime into a float
        double grossPay; //declaring the grossPay variable and making the gross pay into a float
        double withholdingAmt; //declaring the withholdingAmt variable and making the amount withheld into a float
        double netPay; //declaring the netPay variable and making the net pay into a float
        
        hrsOvertime = hrsWorked - hrsRegular; //calculate the hours worked overtime by subtrating the hours the user worked with the regular amount of hours employees work per week
        grossPay = (16 * hrsRegular) + (hrsOvertime * 16 * (1.5)); //calculate the gross pay by adding the payment for regualr hours worked per week (which is $16 per week) and the additional payment for working overtime (which is 1.5 times the $16 per regular hours worked)
        withholdingAmt = (grossPay - ((.94 * .86 * .95 * grossPay) - 10)); //calculate the withholding amount by subtracting the gross pay with the net pay
        netPay = ((.94 * .86 * .95 * grossPay) - 10); //calculting the net pay by multiplying the the amount of tax that will reduce the gross pay and subtracting the weekly medical insurance that is withheld
        
        cout << "Your gross pay is: " << grossPay << endl; //output gross pay
        cout << "Your withholding amount is: " << withholdingAmt << endl; //output whithholding amount
        cout << "Your net pay is: " << netPay << endl; //output net pay
        
    }
    else //if the amount of hours the user worked is less than or equal to the regular amount of hours empoyees work
    {
        double grossPay; //declaring the grossPay variable and making the gross pay into a float
        double withholdingAmt; //declaring the withholdingAmt variable and making the amount withheld into a float
        double netPay; //declaring the netPay variable and making the net pay into a float
        
        grossPay = (16 * hrsRegular); //calculate the gross pay by multiplying the payment for regualr hours worked per week (which is $16 per week) with the amount of hours worked
        withholdingAmt = (grossPay - ((.94 * .86 * .95 * grossPay) - 10)); //calculation is the same as above but without the overtime pay included in the gross pay
        netPay = ((.94 * .86 * .95 * grossPay) - 10); //calculation is the same as above but without the overtime pay included in the gross pay
        
        cout << "Your gross pay is: " << grossPay << endl; //output gross pay
        cout << "Your withholding amount is: " << withholdingAmt << endl; //whithholding amount gross pay
        cout << "Your net pay is: " << netPay << endl; //output net pay
    }
    
    return 0;
}
