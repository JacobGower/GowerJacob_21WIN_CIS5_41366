/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 15, 2021, 12:36 PM
 * Purpose:  Calorie Counter for cookies
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

int main(int argc, char** argv) {
    //Initialize Random Number Seed
    
    //Declare Variables
    unsigned short cookies, //Number of Cookies to be Input by the User 
                   svgPBag, //Servings in One Bag of Cookies
                   ckieBag, //Cookies in One Bag
                   calPSvg, //Calories per Serving
                   serving, //Number of Cookies in a Serving
                   calCkie, //Calories per Cookie
                   calCnsm; //Calories Consumed by User
            
    //Initialize Variables
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookies;
    
    svgPBag=10;
    ckieBag=40;
    calPSvg=300;        
    
    //Map Inputs to Outputs -> Process
    serving=ckieBag/svgPBag;
    calCkie=calPSvg/serving;
    calCnsm=calCkie*cookies;
    
    
    //Display Inputs/Outputs
    cout<<"You consumed "<<calCnsm<<" calories.";
    
    //Exit Program - Cleanup
    return 0;
}