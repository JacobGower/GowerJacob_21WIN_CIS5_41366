/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 11:16 AM
 * Purpose:  Daily Doubling Pay Calculator
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, Higher Dimension Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int days, //Days worked, input by employee
     pennies, //Pay in pennies
     dayDble, //Pay doubles for every day worked
      payTtl, //Total pay in pennies
     dollars, //Dollars place in total pay
       cents; //Leftover cents for total pay caltulation
               
    
    //Initialize Variables
    pennies=1;
    dayDble=2;
    payTtl=0;
    
    cin>>days;
    
    //Map Inputs to Outputs -> Process
    while (days<=0) { //Validate input is greater than 0
        cout<<"Invalid Input.\n";
        cout<<"No work = No pay.\n";
        cout<<"Please input a number of days worked greater than 0.";
    }
    
    for (int intl=0;intl<days;intl++) { //calculate pay with for loop
        payTtl+=pennies;
        pennies=pennies*dayDble;
    }
    
    dollars=payTtl/100;
    cents=payTtl%100;

    //Display Inputs/Outputs
    cout<<"Pay = $"<<dollars<<".";
    if (cents<=9) {
        cout<<"0";
    }
    cout<<cents;
      
    //Exit the Program - Cleanup
    return 0;
}

