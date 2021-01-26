/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 11:16 AM
 * Purpose: To create a block of characters based on input 
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
    char symbol; //Symbol to be used in the Block of characters
    int dimensn; //Dimensions of the Block on one side
    
    //Initialize Variables
    cin>>dimensn;
    cin>>symbol;
    
    //Map Inputs to Outputs -> Process
    //Display Inputs/Outputs
    for (int prmary=0;prmary<dimensn-1;prmary++) {
        for (int scndary=0;scndary<dimensn-1;scndary++) {
            cout<<symbol;   
        }
        cout<<symbol<<endl;
    }
    for (int trtiary=0;trtiary<dimensn;trtiary++) {
        cout<<symbol;
    }
      
    //Exit the Program - Cleanup
    return 0;
}

