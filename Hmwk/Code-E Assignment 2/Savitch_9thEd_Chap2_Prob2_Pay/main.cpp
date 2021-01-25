/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 17, 2021, 7:00 PM
 * Purpose:  To Calculate Retroactive pay owed an Employee
             And Establish new Monthly and Annual Salaries
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
    float       payInc, //Percentage Pay Increase for Employees
                pAnSal, //Previous Annual Salary of the Employee in $
               retroPy, //Retroactive Pay owed to the Employee in $
                nAnSal, //New Annual Salary of the Employee in $
                nMoSal; //New Monthly Salary of the Employee in $
                
    
    //Initialize or input i.e. set variable values
    payInc=0.076;
    
    cout<<"Input previous annual salary."<<endl;
    cin>>pAnSal;
    
    //Map inputs -> outputs
    retroPy=(pAnSal*payInc)/2;
    
    nAnSal=pAnSal+(pAnSal*payInc);
    
    nMoSal=nAnSal/12;
    
    //Display the outputs
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Retroactive pay    = $"<<setw(7)<<retroPy<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<nAnSal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<nMoSal;

    //Exit stage right or left!
    return 0;
}