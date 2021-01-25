/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 16, 11:21 PM
 * Purpose: To display the sum of 10 positive or negative numbers
 *          entered in any order 
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
    float number, //Whole number Entered by User
          negSum, //Sum of Negative Numbers Entered by User
          posSum, //Sum of Positive Numbers Entered by User
          totSum; //Sum of all Numbers Entered by User
    
    //Initialize or input i.e. set variable values
    number=negSum=posSum=totSum=0; //Initialize to 0
    
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    cin>>number;
    posSum+=(number>0)?number:0;
    negSum+=(number<0)?number:0;
    
    //Map inputs -> outputs
    totSum=posSum+negSum;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum"<<setw(5)<<"=";
    cout<<setw(4)<<totSum;

    //Exit stage right or left!
    return 0;
}