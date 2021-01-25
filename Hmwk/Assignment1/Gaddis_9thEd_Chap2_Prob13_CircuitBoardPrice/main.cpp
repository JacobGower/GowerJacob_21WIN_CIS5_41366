/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 4, 2021, 11:16 AM
 * Purpose:  Circuit Board Price
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
    float cost, //Cost to produce the Circuit Board in U.S. Dollars
       pctPrft, //Percentage of profit for Selling the Circuit Board
        profit, //Profit for selling the Circuit Board in U.S. Dollars
         slPrc; //Final Sale price for the Circuit Board
    
    //Initialize Variables
    cost=14.95;
    pctPrft=0.35;
            
    //Map Inputs to Outputs -> Process
    profit=cost*pctPrft;
    slPrc=cost+profit+.0075; //Rounded up to next nearest cent

    //Display Inputs/Outputs
    cout<<"To make a 35 percent profit on a circuit board that costs $";
    cout<<cost<<" to produce,\nan electronics company must charge $"<<slPrc;
    cout<<"per circuit board.";
    
    //Exit the Program - Cleanup
    return 0;
}

