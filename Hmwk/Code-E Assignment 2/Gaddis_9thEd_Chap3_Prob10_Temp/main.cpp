/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 16, 2021 3:35 PM
 * Purpose:  
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
    float degF,  //Degrees in Fahrenheit to be Input
          degC;  //Degrees in Celsius to be Calculated
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cin>>degF;
    
    //Map inputs -> outputs
    degC=(5/9.0f)*(degF-32); //Conversion to Celsius
    
    //Display the outputs
    cout<<setprecision(1)<<showpoint<<fixed;
    cout<<degF<<" Degrees Fahrenheit = ";
    cout<<degC<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}