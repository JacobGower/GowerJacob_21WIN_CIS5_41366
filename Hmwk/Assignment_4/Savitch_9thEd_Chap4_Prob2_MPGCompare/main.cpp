/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 1:16 PM
 * Purpose:  To calculate MPG given Liters used for
 *           Two Cars and Determine which is more efficent
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, Higher Dimension Arrays
const float GL_CNVSN=0.264179f;

//Function Prototypes
float cnvrsn(float liter, float gallon, float milPer, float milDrvn);
float cnvrsn2(float liter2, float gallon2, float milPer2, float milDrv2);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float liter,
          liter2,  //Liters consumed
          gallon,
          gallon2, //Gallons consumed
          milPer,
          milPer2; //Miles Per Gallon for each Car
    int   milDrvn,
          milDrv2; //Miles Driven, input by user
    char  cntnue;  //Choice to continue and repeat
    
    //Initialize Variables
    
    do {
        //Initialize Variables Car 1
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>milDrvn;
        
        //Map Inputs to Outputs -> Process for Car 1
        cout<<fixed<<setprecision(2);
        
        milPer=cnvrsn(liter,gallon,milPer,milDrvn);
        
        //Display Miles per Gallon Car 1
        cout<<"miles per gallon: "<<milPer<<endl;
        
        //Initialize Variables Car 2
        cout<<endl<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>milDrv2;
        
        //Map Inputs to Outputs -> Process for Car 2
        milPer2=cnvrsn2(liter2,gallon2,milPer2,milDrv2);
        
        //Display Miles per Gallon Car 2
        cout<<"miles per gallon: "<<milPer2<<endl;
        cout<<endl;
        
        //Identify the More Fuel Efficient Car
        if (milPer>milPer2) {
            cout<<"Car 1 is more fuel efficient\n";
            cout<<endl;
        }
        else if (milPer2>milPer) {
            cout<<"Car 2 is more fuel efficient\n";
            cout<<endl;
        }
        else {
            cout<<"Car 1 and Car 2 are equally fuel efficient";
            cout<<endl;
        }
        
        cout<<"Again:"<<endl;
        cin>>cntnue;
        
        if (cntnue=='y'||cntnue=='Y') {
            cout<<endl;
        }
        
    }while(cntnue=='y'||cntnue=='Y');
      
    //Exit the Program - Cleanup
    return 0;
}
//Function for Miles per Gallon for a Car
float cnvrsn(float liter, float gallon, float milPer, float milDrvn) {    
    gallon=liter*GL_CNVSN;
        
    milPer=milDrvn/gallon;
    return milPer;
}
//Function for Miles Per Gallon for a Second Car
float cnvrsn2(float liter2, float gallon2, float milPer2, float milDrv2) {    
    gallon2=liter2*GL_CNVSN;
        
    milPer2=milDrv2/gallon2;
    return milPer2;
}