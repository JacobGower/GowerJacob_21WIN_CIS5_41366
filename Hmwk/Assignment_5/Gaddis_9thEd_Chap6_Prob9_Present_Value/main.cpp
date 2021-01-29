/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 26, 2021, 2:09 AM
 * Purpose:  Savings Function
 * 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
float psntVal(float,float,float,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   fv, //Future Value in Dollars
        intrst, //Yearly Interest Rate as a Percent
            pv; //Present Value Required 
    int nYears; //Number of Years
    
    //Initialize Variables
    cout<<"This is a Present Value Computation"<<endl;
    
    
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>fv;
    cout<<"Input the Number of Years"<<endl;
    cin>>nYears;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intrst;
    
    
    
    //Map Inputs to Outputs -> Process
    
    
    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The Present Value = $";
    cout<<psntVal(pv, fv, intrst, nYears);
    
    //Exit the Program - Cleanup
    return 0;
}

float psntVal(float pv, float fv, float intrst, int nYears) {
    pv=fv/pow(1+(intrst/100.0f),nYears);
    return pv;
}