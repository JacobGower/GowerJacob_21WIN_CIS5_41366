/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 11:16 AM
 * Purpose:  To output a specific pattern based on input
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
    int row; //Number of rows to be displayed Input by User
    
    //Initialize Variables
    cin>>row;
    
    //Map Inputs to Outputs -> Process and Display
    for (int prmary=1;prmary<=row;++prmary) {
        for (int scndary=1;scndary<=prmary;++scndary) {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    
    for (int prmary=row;prmary>=2;--prmary) {
        for (int scndary=1;scndary<=prmary;++scndary) {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    cout<<"+";
    
    //Exit the Program - Cleanup
    return 0;
}