/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 12:36 PM
 * Purpose:  Determine the Compatibility of Zodiac Signs
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string   sign1, 
             sign2, //Astrological Signs to be Input by User
            elmnt1,
            elmnt2; //Elements that Signs are Classified as
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>sign1>>sign2;
    
    
    //Map inputs -> outputs
    
    //Sign 1 Inputs
    //Fire Signs
    if (sign1=="Aries"||sign1=="aries") {
        elmnt1="Fire";
    
    }else if (sign1=="Leo"||sign1=="leo") {
        elmnt1="Fire";
        
    }else if (sign1=="Sagittarius"||sign1=="sagittarius") {
        elmnt1="Fire";
    
    //Earth Signs    
    }else if (sign1=="Taurus"||sign1=="taurus") {
        elmnt1="Earth";
    
    }else if (sign1=="Virgo"||sign1=="virgo") {
        elmnt1="Earth";
        
    }else if (sign1=="Capricorn"||sign1=="capricorn") {
        elmnt1="Earth";
        
    //Air Signs
    }else if (sign1=="Gemini"||sign1=="gemini") {
        elmnt1="Air";
        
    }else if (sign1=="Libra"||sign1=="libra") {
        elmnt1="Air";
        
    }else if (sign1=="Aquarius"||sign1=="aquarius") {
        elmnt1="Air";
        
    //Water Signs
    }else if (sign1=="Cancer"||sign1=="cancer") {
        elmnt1="Water";
        
    }else if (sign1=="Scorpio"||sign1=="scorpio") {
        elmnt1="Water";
        
    }else if (sign1=="Pisces"||sign1=="pisces") {
        elmnt1="Water";
    
    //Input is not Recognized as a Sign
    }else {
        cout<<"First Sign Invalid Input"<<endl;
        elmnt1="Invalid";
    }
    
    //Sign 2 Inputs
    if (sign2=="Aries"||sign2=="aries") {
        elmnt2="Fire";
    
    }else if (sign2=="Leo"||sign2=="leo") {
        elmnt2="Fire";
        
    }else if (sign2=="Sagittarius"||sign2=="sagittarius") {
        elmnt2="Fire";
    
    //Earth Signs    
    }else if (sign2=="Taurus"||sign2=="taurus") {
        elmnt2="Earth";
    
    }else if (sign2=="Virgo"||sign2=="virgo") {
        elmnt2="Earth";
        
    }else if (sign2=="Capricorn"||sign2=="capricorn") {
        elmnt2="Earth";
        
    //Air Signs
    }else if (sign2=="Gemini"||sign2=="gemini") {
        elmnt2="Air";
        
    }else if (sign2=="Libra"||sign2=="libra") {
        elmnt2="Air";
        
    }else if (sign2=="Aquarius"||sign2=="aquarius") {
        elmnt2="Air";
        
    //Water Signs
    }else if (sign2=="Cancer"||sign2=="cancer") {
        elmnt2="Water";
        
    }else if (sign2=="Scorpio"||sign2=="scorpio") {
        elmnt2="Water";
        
    }else if (sign2=="Pisces"||sign2=="pisces") {
        elmnt2="Water";
    
    //Input is not Recognized as a Sign
    }else {
        cout<<"Second Sign Invalid Input"<<endl;
        elmnt2="Invalid";
    }
        
    //Display the outputs
    //Program should Identify Which Input is Invalid
    if (elmnt1=="Invalid"||elmnt2=="Invalid") {
        cout<<"Please Enter Two Valid Inputs.";
    
    //Both Inputs are Valid
    }else {
        if (elmnt1==elmnt2) {
            cout<<sign1<<" and "<<sign2;
            cout<<" are compatible "<<elmnt1<<" signs.";
        
            
        }else {
            cout<<sign1<<" and "<<sign2;
            cout<<" are not compatible signs.";
        }
    }
    
    //Exit stage right or left!
    return 0;
}