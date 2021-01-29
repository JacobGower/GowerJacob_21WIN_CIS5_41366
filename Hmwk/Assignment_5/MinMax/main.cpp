/* 
 * File: main.cpp
 * Author: Jacob Gower
 * Created on January 26th, 1:14 AM
 * Purpose: To use the Prototype Supplied to create a
 *          Function that returns the Min and Max Integers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1,
        num2,
        num3, //Numbers to be Input By User
         min, //Minimum Integer Input by User
         max; //Maximum Integer Input by User
    
    //Initialize Variables
    cout<<"Input 3 numbers\n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    
    min=max=num1;
    
    //Process/Map inputs to outputs
    minmax (num1, num2, num3, min, max);
    
    //Output data
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
    //Exit stage right!
    return 0;
}

void minmax(int num1,int num2,int num3,int&min,int&max) {
   
    max=(num1>max)?num1:
        (num2>max)?num2:num3;
            
    min=(num1<min)?num1:
        (num2<min)?num2:num3;
}