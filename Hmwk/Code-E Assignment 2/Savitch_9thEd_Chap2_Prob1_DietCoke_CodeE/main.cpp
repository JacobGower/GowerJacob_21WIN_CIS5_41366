/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 12, 2021, 12:36 PM
 * Purpose:  Ratio, conversion, dieter question
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVENGM=453.592;  //Lbs to grams conversion

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float cncntr8=0.001;//Concentration of Sweetener in a can of Diet Coke
    float           massMs=35,//Mass of the Mouse 35grams
                    massKms=5,//mass to kill the mouse of sweetener
                  mssCoke=350,//Mass of 1 can of Diet Coke in Grams
                       wDietr;//Weight of the Dieter in Lbs
    int                 nCans;//Number of cans of Diet Coke
    
    //Initialize Variables
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>wDietr;
            
    //wDietr=rand()%(350-90+1)+90;//Range from 90 to 350
    
    //Map Inputs to Outputs -> Process
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncntr8);

    //Display Inputs/Outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<nCans<<" cans";
      
    //Exit stage right or left!
    return 0;
}