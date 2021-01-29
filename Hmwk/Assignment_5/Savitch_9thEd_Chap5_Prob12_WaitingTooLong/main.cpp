/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 26, 2021, 2:09 AM
 * Purpose:  Military Time to Standard Time Convertor 
 * 
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
    int    mins, //Minutes
             hr, //Hours
           wait, //Waiting Time
        addHour, //Convert added minutes over 60 to hours
        pjctMin, //Projected Minutes after waiting
         pjctHr, //Projected Hour after Waiting
           test; //Test for Hours over 12
    char choice, //Choice to Continue or Exit   
           amPm; //Ante/Post Meridiem for Input
    string mrdm; //String to hold Value of amPm
    
    do {    
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
        if (amPm=='A'||amPm=='P') {
            mrdm=(amPm=='A')?" AM":
                 (amPm=='P')?" PM":"";
        }else if (amPm=='a'||amPm=='p') {
            mrdm=(amPm=='a')?" AM":
                 (amPm=='p')?" PM":"";
        }else {
            cout<<"Invalid Input"; 
        }
        cout<<"Current time = ";
        cout<<hr<<":"<<mins<<mrdm<<endl;
        
        pjctMin=mins+wait;
        if (pjctMin>=60) {
            addHour=pjctMin/60;
            pjctMin=pjctMin%60;
        }
        pjctHr=hr+addHour;
        if (pjctHr>=12&&hr<12) {
            if ((pjctHr%24)==0&&amPm=='A') {
                amPm='P';
                pjctHr%=12;
            
            }else if ((pjctHr%24)==0&&amPm=='P') {
                amPm='A';
                pjctHr%=12;
            
            }else if ((pjctHr%24)>12&&amPm=='P') {
                amPm='A';
                pjctHr%=12;
            
            }else if ((pjctHr%24)>12&&amPm=='A') {
                amPm='P';
                pjctHr%=12;
                
            }
        }
        test=pjctHr%24;
        if (pjctHr>=12&&hr<12) {
            if (test==12&&amPm=='A') {
                amPm='P';
                pjctHr=12;
                
            }else if (test==12&&amPm=='P') {
                amPm='A';
                pjctHr=12;
            }
        }
        
         if (amPm=='A'||amPm=='P') {
            mrdm=(amPm=='A')?" AM":
                 (amPm=='P')?" PM":"";
        }else if (amPm=='a'||amPm=='p') {
            mrdm=(amPm=='a')?" AM":
                 (amPm=='p')?" PM":"";
        }else {
            cout<<"Invalid Input"; 
        }
    //Display the outputs
        cout<<"Time after waiting period = ";
        if (pjctHr>=10) {
            if (pjctMin>=10) {
                cout<<pjctHr<<":"<<pjctMin<<mrdm;
                cout<<endl<<endl;
            }else {
                cout<<pjctHr<<":"<<"0"<<pjctMin<<mrdm;
                cout<<endl<<endl;
            }
        }else
            if (pjctMin>=10) {
                cout<<"0"<<pjctHr<<":"<<pjctMin<<mrdm;
                cout<<endl<<endl;
            }else {
                cout<<"0"<<pjctHr<<":"<<"0"<<pjctMin<<mrdm;
                cout<<endl<<endl;
            }
    
        cout<<"Again:"<<endl;
        
        cin>>choice;
        
        if (choice=='y'||choice=='Y') {
            cout<<endl;
        }
        
    }while (choice=='y'||choice=='Y');

    //Exit stage right or left!
    return 0;
}