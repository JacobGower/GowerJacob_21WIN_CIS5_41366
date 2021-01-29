/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 26, 2021, 2:09 AM
 * Purpose:  Military Time to Standard Time Convertor 
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
//int cnvrtMn (int, int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int    mins, //Minutes
             hr, //Hours
           wait, //Waiting Time
        addHour; //Convert added minutes over 60 to hours
    char choice, //Choice to Continue or Exit   
           amPm; //Ante/Post Meridiem for Input
    string mrdm; //String to hold Value of amPm
    
    do{    
        //Initialize or input i.e. set variable values
        cout<<"Enter hour:"<<endl<<endl;
        cin>>hr;
        
        cout<<"Enter minutes:"<<endl<<endl;
        cin>>mins;
        
        cout<<"Enter A for AM, P for PM:"<<endl<<endl;
        cin>>amPm;
        
        cout<<"Enter waiting time:"<<endl<<endl;
        cin>>wait;
        
        addHour = 0;
        
        
        //Map inputs -> outputs
            mrdm=(amPm=='A')?" AM":
                 (amPm=='P')?" PM":"";
        cout<<"Current time = ";
        cout<<hr<<":"<<mins<<mrdm<<endl;
        
        mins=mins+wait;
        if (mins>=60) {
            mins=mins-60;
            addHour++;
        }
        hr=hr+addHour;
        if (hr>12&&amPm=='A') {
            if (addHour>11){
                amPm='A';
            }else
                amPm='A';
                hr=hr-12;
            }
        if (hr==12&&amPm=='P') {
            if (addHour>11) {
                amPm='A';
            }}else if (hr==12&&amPm=='A') {
                amPm='P';
            }
        if (hr>12&&amPm=='P') {
            if (addHour>11) {
                amPm='P';
            }else
                amPm='A';
                hr=hr-12;
            }
        mrdm=(amPm=='A')?" AM":
             (amPm=='P')?" PM":"";
        
        
    //Display the outputs
        cout<<"Time after waiting period = ";
        if (hr>=10) {
            if (mins>=10) {
                cout<<hr<<":"<<mins<<mrdm;
                cout<<endl;
            }else {
                cout<<hr<<":"<<"0"<<mins<<mrdm;
                cout<<endl;
            }
        }else
            if (mins>=10) {
                cout<<"0"<<hr<<":"<<mins<<mrdm;
                cout<<endl;
            }else {
                cout<<"0"<<hr<<":"<<"0"<<mins<<mrdm;
                cout<<endl;
            }
    
        cout<<"Would you like to convert another time (y/n)"<<endl;
        cin>>choice;
    }while (choice=='y'||choice=='Y');

    //Exit stage right or left!
    return 0;
}

