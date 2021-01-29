/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 26, 2021, 2:09 AM
 * Purpose:  Military Time to Standard Time Convertor 
 * 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void input (int &, char &, int &);
int convrsn (int, char, int, int, int, char &);
int output (int, char, int, int, char &);
//char amPm(char&, char&);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int mHours, //Military Hours (00:00-23:59)
        sHours, //Standard Hours (12:00-11:59 AM/PM)
       minutes, //Input for Hours and Minutes
       hrCnvrt; //Hour Conversion to Standard
    char     c, //Colon separating the Hours from Minutes
          amPm, //AM/PM
        choice; //Choice to continure
    
    //Initialize Variables
    hrCnvrt=12;
    
   
   
    
    cout<<"Military Time Converter to Standard Time\n";
    cout<<"Input Military Time hh:mm\n";
    
    do {
    
    input (mHours, c, minutes);
    
    convrsn (mHours, c, minutes, sHours, hrCnvrt, amPm);
    
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Would you like to convert another time (y/n)"<<endl;
    cin>>choice;
    }while (choice=='y'||choice=='Y');
    //Exit the Program - Cleanup
    return 0;
}
//Input Function
void input (int &mHours, char &c, int &minutes) {
  cin>>setw(2)>>mHours>>setw(1)>>c>>setw(2)>>minutes; 
  return;
}
//Function to Convert Military Time to Standard Time
int convrsn(int mHours, char c, int minutes, int sHours, int hrCnvrt, char &amPm) {

    
    if(mHours>24||minutes>59) {
        cout<<mHours<<c<<minutes;
        cout<<" is not a valid time"<<endl;
    }else if (mHours==00) {
        sHours=mHours+hrCnvrt;
        amPm='A';
        output(mHours,c,minutes,sHours,amPm);
        cout<<endl;
    }else if (mHours<12) {
        sHours=mHours;
        amPm='A';
        output(mHours,c,minutes,sHours,amPm);
        cout<<endl;
    }else if (mHours==12) {
        sHours=mHours;
        amPm='P';
        output(mHours,c,minutes,sHours,amPm);
        cout<<endl;
    }else {
        sHours=mHours-hrCnvrt;
        amPm='P';
        output(mHours,c,minutes,sHours,amPm);
        cout<<endl;
    }return 0;
}
//Output Function
int output (int mHours, char c, int minutes, int sHours, char &amPm) {
    
    string mrdm;
        mrdm=(amPm=='A')?" AM":
             (amPm=='P')?" PM":"";
    
    if (mHours>=12) {
        if (minutes>=10) {
            cout<<setw(2)<<mHours<<c<<setw(2)<<minutes<<" = ";
            cout<<sHours<<c<<minutes<<mrdm;
        }else {
            cout<<setw(2)<<mHours<<c<<"0"<<minutes<<" = ";
            cout<<sHours<<c<<"0"<<minutes<<mrdm;
        }
    }else if (mHours>=10&&mHours<12) {
        if (minutes>=10) {
            cout<<setw(2)<<mHours<<c<<setw(2)<<minutes<<" = ";
            cout<<sHours<<c<<minutes<<mrdm;
        }else {
            cout<<setw(2)<<mHours<<c<<"0"<<minutes<<" = ";
            cout<<sHours<<c<<"0"<<minutes<<mrdm;
        }
    }else
        if (minutes>=10) {
            cout<<"0"<<mHours<<c<<minutes<<" = ";
            cout<<sHours<<c<<minutes<<mrdm;
        }else {
            cout<<setw(2)<<mHours<<c<<"0"<<minutes<<" = ";
            cout<<sHours<<c<<"0"<<minutes<<mrdm;
        
    }return 0;
}
     