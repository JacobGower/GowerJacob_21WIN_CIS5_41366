/* 
 * File: main.cpp
 * Author: Jacob Gower
 * Created on January 25th, 11:30PM
 * Purpose: To Calculate the Factorial of an Integer
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n; //Integer to be Input by User
    
    //Initialize Variables
    
    
    cout<<"This program calculates the factorial using a ";
    cout<<"function prototype found in the template for this";
    cout<<" problem.\n";
    
    cout<<"Input the number for the function.\n";
    cin>>n;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<n<<"! = "<<fctrl(n);
    
    //Exit stage right!
    return 0;
}
int fctrl(int n) {
    int i=1;
    if (n<0) {
        cout<<"Error, factorials cannot be Negative";
    }else {
        while (n>0) {
            i=n*i;
            n--;
        }
    }return i;
    
}