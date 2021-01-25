/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 12, 2021, 12:31 PM
 * Purpose:  To Find the Average of Test Scores
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
    int   firsTst,
          scndTst,
          thirTst,
          fourTst,
          fifTest,  //Test Scores to be Input by User
              sum;  //Sum of Test Scores
    float avgScor;  //Average Score of Tests
    
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average."<<endl;
    cin>>firsTst>>scndTst>>thirTst>>fourTst>>fifTest;
    
    sum=firsTst+scndTst+thirTst+fourTst+fifTest;
    
    //Map inputs -> outputs
    avgScor=sum/5.0f;
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The average = "<<avgScor;

    //Exit stage right or left!
    return 0;
}