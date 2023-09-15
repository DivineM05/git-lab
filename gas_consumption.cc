/*
Class: CS2400 (freshmen)
file: HW1.cc
Author: Divine M
Date: 9-13-2023
Brief: The purpose of this project is to calculate the total gas consumption, miles, and average mpg for a trip given the
number of miles driven in town and on highway.
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

const double TOWN_AVERAGE_MILES_PER_GALLON = 22.5;
const double HIGHWAY_AVERAGE_MILES_PER_GALLON = 29.5;

int main()
{
    double town_miles;
    cout << "Enter the number of miles driven in town: ";
    cin >> town_miles;
if (town_miles < 0 ) {
    cout << "The number of mils driven in town cannot be negative" << endl;
    exit(0);
}
    double highway_miles;
    cout << "Enter the number of miles driven on the highway: ";
    cin >> highway_miles;
    
 if ( highway_miles < 0 ) {
    cout  << "The number of miles driven on the highway cannot be negative" << endl;
    exit(0);
    }

    double town_consumption = town_miles / TOWN_AVERAGE_MILES_PER_GALLON;
    double highway_consumption = highway_miles / HIGHWAY_AVERAGE_MILES_PER_GALLON;
    double total_miles = town_miles + highway_miles;
    double total_gas = town_consumption + highway_consumption;
    double  miles_per_gallon = total_miles / total_gas;
    
 
    
    cout << setprecision (3) << "The number of miles driven in town: " << town_miles << " miles" << endl;
    cout << setprecision(2) << "The gas consumption for town driving: " << town_consumption << " gallons" << endl; 
    cout << setprecision(3) << "The number of miles driven on the highway: " << highway_miles << " miles" << endl;
    cout << setprecision (3) << "The gas consumption for highway driving: " << highway_consumption <<  " gallons" << endl;
    cout << setprecision(3) << "The total miles driven: " << total_miles << " miles" << endl; 
    cout <<  setprecision(3) << "The total gas consumption: " << total_gas << " gallons" << endl;

    if ( total_gas <= 0){
        cout << "Average mpg for the trip cannot be calculated" << endl;
    }
    else {
    cout << setprecision(3) << "The average mpg for the trip: " << miles_per_gallon << " miles/gallon" << endl;
    }
    return 0;
}
