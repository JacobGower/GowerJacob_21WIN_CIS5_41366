/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 12:36 PM
 * Purpose:  To Convert the Year to Roman Numerals
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short year; //Year to be Converted to Roman Numerals
    unsigned char n1000, //Thousands Place in Year
                   n100, //Hundreds Place in Year
                    n10, //Tens Place in Year
                     n1; //Ones Place in Year
                     
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>year;
    
    //Map inputs -> outputs
    if (year<3001 && year>999) {
        cout<<year<<" is equal to ";
        n1000=year/1000;
        n100=year%1000/100;
        n10=year%100/10;
        n1=year%10;
        
        cout<<(n1000==3?"MMM":
               n1000==2?"MM":
               n1000==1?"M":"");
               
        cout<<(n100==9?"CM":
               n100==8?"DCCC":
               n100==7?"DCC":
               n100==6?"DC":
               n100==5?"D":
               n100==4?"CD":
               n100==3?"CCC":
               n100==2?"CC":
               n100==1?"C":"");
               
        cout<<(n10==9?"XC":
               n10==8?"LXXX":
               n10==7?"LXX":
               n10==6?"LX":
               n10==5?"L":
               n10==4?"XL":
               n10==3?"XXX":
               n10==2?"XX":
               n10==1?"X":"");
               
        cout<<(n1==9?"IX":
               n1==8?"VIII":
               n1==7?"VII":
               n1==6?"VI":
               n1==5?"V":
               n1==4?"IV":
               n1==3?"III":
               n1==2?"II":
               n1==1?"I":"");
    
    
    //Display the outputs
    }else {
        cout<<year<<" is Out of Range!";
    }
    //Exit stage right or left!
    return 0;
}