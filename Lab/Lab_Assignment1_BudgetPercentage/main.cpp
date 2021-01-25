/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 11, 2021, 11:16 PM
 * Purpose:  Find the Military Budget as a Percentage of the Federal Budget
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
    float milBdgt,   //Military Budget for the year 2018 in U.S. Dollars
          fedBdgt,   //Total Federal Budget for 2018 in U.S. Dollars
          mlPrcnt;   //Military Budget as a percent of Federal Budget
    
    //Initialize Variables
    milBdgt=7.0e11f; //Military Budget = 700 Billion
    fedBdgt=4.1e12f; //Federal Budget  = 4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=milBdgt/fedBdgt*100;
    
    //Display Inputs/Outputs
    cout<<"In the year 2018, the military budget comprised %";
    cout<<mlPrcnt<<" of the overall federal budget.";
      
    //Exit the Program - Cleanup
    return 0;
}