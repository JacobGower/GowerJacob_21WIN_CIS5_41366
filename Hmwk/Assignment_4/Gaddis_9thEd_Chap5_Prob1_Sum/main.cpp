/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 11:16 AM
 * Purpose:  To find the Sum of Numbers from
 *           One up to the Number Entered
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
    unsigned int number, //Number entered by user
                 sum;    //Total to be displayed
    
    //Initialize Variables
    sum=0;
    
    //Map Inputs to Outputs -> Process
    cin>>number;
    
    for (int intlNum=1;intlNum<=number;intlNum++) {
        sum+=intlNum;
    }

    //Display Inputs/Outputs
      cout<<"Sum = "<<sum;
      
    //Exit the Program - Cleanup
    return 0;
}

