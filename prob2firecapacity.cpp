//
//  prob2firecapacity.cpp
//  Meghna Raswan
//
//  Write a program that determines whether a meeting room is in violation of fire law regulations regarding the maximum room capacity. The program will read in the maximum room capacity and the number of people to attend the meeting. If the number of people is less than or equal to the maximum room capacity, the program announces that it is legal to hold the meeting and tells how many additional people may legally attend. If the number of people exceeds the maximum room capacity, the program announces that the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded in order to meet the fire regulations.

#include "prob2firecapacity.hpp"
#include <iostream>
using namespace std;

int main()
{
    int maxRoomCapacity; //declare maxRoomCapacity variable and use it as an integer value
    int pplAttending; //declare pplAttending variable and use it as an integer value
    
    cout << "Enter the maximum room capacity: " << endl; //ask user input for max room capacity
    cin >> maxRoomCapacity; //user input for maxRoomCapacity
    cout << "Enter the number of people attending: " << endl; //ask user input for number of people attending
    cin >> pplAttending; //user input for pplAttending
    
    if (pplAttending > maxRoomCapacity) //if the people attending is greater than the maximum room capacity
    {
        int pplExclude; //declare pplExclude variable and use it as an integer value
        pplExclude = pplAttending - maxRoomCapacity; //claculate the people you need to exclude by subtracting the people attending to the maximum room capacity
        cout << "The meeting cannot be held as planned due to fire regulations." << endl;
        cout << "The amount of people who must be exluded in order to meet the fire regulations are " << pplExclude << " people." << endl; //indicate the amount of people that need to be excluded to meet fire regulation
    }
    else //if the people attending is less than or equal to the maximum room capacity
    {
        int pplAttend; //declare pplAttend variable and use it as an integer value
        pplAttend = maxRoomCapacity - pplAttending; //claculate the people who can attend subtracting the maximum room capacity to the people attending
        cout << "It is legal to hold the meeting." << endl;
        cout << pplAttend << " additional people may attend legally." << endl; //indicate the amount of people that can legally attend
    }

    return 0;
}
