/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 17, 2021, 4:36 PM
 * Purpose:  To Ensure Following of Fire Regulations
             With Regards to Occupancy
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short mxCpcty, //Maximum Capacity of the Room
                   numPple, //Number of People in the Room
                   dffrnce; //Difference between capacity and people
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>mxCpcty>>numPple;
    
    //Map inputs -> outputs
    dffrnce=abs(numPple-mxCpcty);
    
    //Display the outputs
     if(mxCpcty < numPple) {
    cout<<"Meeting cannot be held."<<endl;
    cout<<"Reduce number of people by "<<dffrnce;
    cout<<" to avoid fire violation.";
    }
    
    else {
    cout<<"Meeting can be held."<<endl;
    cout<<"Increase number of people by "<<dffrnce;
    cout<<" will be allowed without violation.";
    }
    
    //Exit stage right or left!
    return 0;
}