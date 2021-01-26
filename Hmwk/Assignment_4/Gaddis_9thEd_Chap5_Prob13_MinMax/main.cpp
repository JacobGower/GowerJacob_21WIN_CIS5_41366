/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 11:16 AM
 * Purpose:  To identify and display the
 *           minimum and maximum numbers entered
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
    const int SNTNL=-99; //Sentinel to signal for the loop to Terminate
    int           input, //Number other than -99 to be Input By User
                 minNum, //Smallest number entered by User
                 maxNum; //Largest number entered by User
    
    //Initialize Variables
    cin>>input;
    
    minNum=maxNum=input;
    
    //Map Inputs to Outputs -> Process
    while (input!=SNTNL) {
        if (input<minNum) {
            minNum=input;
        }
        if (input>maxNum) {
            maxNum=input;
        }
        
        cin>>input;
    }

    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<minNum<<endl;
    cout<<"Largest  number in the series is "<<maxNum;
      
    //Exit the Program - Cleanup
    return 0;
}

