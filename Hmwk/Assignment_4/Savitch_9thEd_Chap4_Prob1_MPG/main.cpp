/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 1:16 PM
 * Purpose:  To calculate MPG given Liters used
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

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float liter,   //Liters consumed
          gallon,  //Gallons consumed
          milPer,  //Miles Per Gallon
          milDrvn; //Miles Driven, input by user
    char  cntnue;  //Choice to continue and repeat
    
    //Initialize Variables
    
    do {
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>milDrvn;
        
        //Bring in Function
        milPer=cnvrsn (liter, gallon, milPer, milDrvn);
        
        //Display Inputs/Outputs
        cout<<fixed<<setprecision(2);
           
        cout<<endl<<"miles per gallon:"<<endl<<milPer<<endl;
        
        cout<<"Again:"<<endl;
        cin>>cntnue;
        
        if (cntnue=='y'||cntnue=='Y') {
            cout<<endl;
        }
        
    }while(cntnue=='y'||cntnue=='Y');
      
    //Exit the Program - Cleanup
    return 0;
}
//Function to Convert Liters to Gallon and Calculate Miles Per Gallon
float cnvrsn(float liter, float gallon, float milPer, float milDrvn) {    
    gallon=liter*GL_CNVSN;
        
    milPer=milDrvn/gallon;
    return milPer;
}