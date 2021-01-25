/*
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 16, 2021, 04:09 PM
 * Purpose:  To Calculate Trig Functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     // Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=3.141592;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle,  //Angle in degrees
           sine,  //Sine of the Angle in Degrees
         cosine,  //Cosine of the Angle in Degrees
        tangent,  //Tangent of the Angle in Degrees
            rad;  //Conversion from Degrees to Radians
            
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angle;
    
    
    //Map Inputs -> Outputs
    rad=angle*(PI/180); //Convert Degrees to Radians and then Calculate
         sine=sin(rad);
       cosine=cos(rad);
      tangent=tan(rad);
    
    //Display the outputs
    cout<<setprecision(4)<<showpoint<<fixed;
    cout<<"sin("<<static_cast<int>(angle)<<") = "<<sine<<endl;
    cout<<"cos("<<static_cast<int>(angle)<<") = "<<cosine<<endl;
    cout<<"tan("<<static_cast<int>(angle)<<") = "<<tangent;

    //Exit stage right or left!
    return 0;
}