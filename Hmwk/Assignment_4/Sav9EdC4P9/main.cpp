/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 9:06 PM
 * Purpose: To Determine the Maximum of 2 or 3 parameters
 *          Displayed to 1 Decimal Place
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, Higher Dimension Arrays

//Function Prototypes
int mx2Pmtr (float num1, float num2, float max2);
int mx3Pmtr (float num1, float num2, float num3, float max3);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float num1,
          num2,
          num3, //Numbers to be Input by User
          max2, //Largest Number for Function with 2 Inputs
          max3; //Largest Number for Function with 3 Inputs
    
    //Initialize Variables
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cin>>num2;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cin>>num3;
    cout<<endl;
    
    //Map Inputs to Outputs -> Process

    //Display Inputs/Outputs
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1); //Trying to use the Savitch method
    
    mx2Pmtr (num1,num2,max2);
    mx3Pmtr (num1,num2,num3,max3);
      
    //Exit the Program - Cleanup
    return 0;
}
//Function Definition for Function with 2 Parameters
int mx2Pmtr (float num1, float num2, float max2) {
    if (num1>num2) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<num1<<endl<<endl;
        
    }else if (num2>num1) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<num2<<endl<<endl;
        
    }else {
        cout<<"The two Parameters are equal";
        cout<<endl<<endl;
    }
    return 0;
}
//Function Definition for Function with 3 Parameters 
int mx3Pmtr (float num1, float num2, float num3, float max3) {
    if (num1>num2 && num1>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<num1<<endl;
        
    }else if (num2>num1 && num2>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<num2<<endl;
        
    }else if (num3>num1 && num3>num2) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<num3<<endl;
        
    }else if (num1==num2 && num1>num3) {
        cout<<num1<<" and "<<num2<<" are equal and are larger than ";
        cout<<num3<<endl;
        
    }else if (num1==num3 && num1>num2) {
        cout<<num1<<" and "<<num3<<" are equal and are larger than ";
        cout<<num2<<endl;
        
    }else if (num2==num3 && num2>num1) {
        cout<<num2<<" and "<<num3<<" are equal and are larger than ";
        cout<<num1<<endl;
        
    }else { 
        cout<<"All parameters are equal";
        cout<<endl;
    }
    return 0;
}
