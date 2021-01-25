/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 4:30 PM
 * Purpose:  Book Club Point Tracker
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int numBook, //Number of Books Purchased this Month
         points; //Points Earned for Book Purchases
    
    //Initialize or input i.e. set variable values
    numBook=0;
    cout<<"Book Worm Points\n";
    cout<<"Input the number of books purchased this month.\n";
    cin>>numBook;
    
    //Map inputs -> outputs
    if (numBook>=0) {
        if (numBook==0) {
            points=0;
        }else if (numBook==1) {
            points=5;
        }else if (numBook==2) {
            points=15;
        }else if (numBook==3) {
            points=30;
        }else {
            points=60;
        }
    //Display the outputs
        cout<<"Books purchased ="<<setw(3)<<numBook<<endl;
        cout<<"Points earned   ="<<setw(3)<<points;
    
    
    }else {
        cout<<"Invalid Entry. Valid Entries are Greater than or Equal to 0.\n";
    }
    
    //Exit stage right or left!
    return 0;
}