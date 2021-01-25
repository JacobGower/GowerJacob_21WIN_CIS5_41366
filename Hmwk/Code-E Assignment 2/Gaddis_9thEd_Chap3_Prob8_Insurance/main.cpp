/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 15, 2021, 12:36 PM
 * Purpose:  To Calculate Minimum Recommended Insurance
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
    float rplcStr, //Cost to replace the structure in U.S. Dollars
           minIns; //Minimum Insurance recommended in U.S. Dollars
           
           
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>rplcStr;
    
    
    //Map inputs -> outputs
    minIns=rplcStr*0.8; //Recommended Insurance is 80% of original value
    
    //Display the outputs
    cout<<"You need $"<<minIns;
    cout<<" of insurance.";

    //Exit stage right or left!
    return 0;
}