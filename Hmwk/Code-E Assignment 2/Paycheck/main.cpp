/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 17, 2021, 1:36 PM
 * Purpose:  To Calculate the Gross Pay for a Pay Period
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
    int     hours; //Hours Worked   
    float    rate, //Hourly Pay Rate in U.S. $/Hour
          grssPay; //Total Pay for one Paycheck
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>rate>>hours;
    
    //Map inputs -> outputs
    if (hours>40)
        grssPay=(rate*40)+(2*rate*(hours-40));
    else
        grssPay=rate*hours;
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Paycheck = $"<<setw(7)<<grssPay;

    //Exit stage right or left!
    return 0;
}