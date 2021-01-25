/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 4, 2021, 11:16 AM
 * Purpose:  Annual High Temperatures
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, Higher Dimension Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned char    tmpNY,  //New York Temperature in Fahrenheit
                    tmpDen,  //Denver Temperature in Fahrenheit
                   tmpPhnx,  //Phoenix Temperature in Fahrenheit
                   perChng;  //Percentage change
    unsigned short avgTmp1,  //Average Temperature before the increase
                   avgTmp2;  //Average Temperature after the increase
    
    //Initialize Variables
    tmpNY=85;
    tmpDen=88;
    tmpPhnx=106;
    perChng=2;
    
    //Map Inputs to Outputs -> Process
    avgTmp1=(tmpNY+tmpDen+tmpPhnx)/3.0+0.5;

    //Display Inputs/Outputs
    cout<<"Temperature before the increase"<<endl;
    cout<<"New York Temperature = "<<static_cast<int>(tmpNY)
            <<" Fahrenheit"<<endl;
    cout<<"Denver   Temperature = "<<static_cast<int>(tmpDen)
            <<" Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<static_cast<int>(tmpPhnx)
            <<" Fahrenheit"<<endl;
    cout<<"Average  Temperature = "<<avgTmp1<<"Fahrenheit"<<endl;
            
    //Multiply by the Percentage
    tmpNY*=((100+perChng)/100.0f);
    tmpDen*=((100+perChng)/100.0f);
    tmpPhnx*=((100+perChng)/100.0f);
            
    //Map Inputs to Outputs -> Process
    avgTmp2=(tmpNY+tmpDen+tmpPhnx)/3.0+0.5;
            
    //Display Inputs/Outputs
    cout<<"Temperature after the increase"<<endl;
    cout<<"New York Temperature = "<<static_cast<int>(tmpNY)
            <<" Fahrenheit"<<endl;
    cout<<"Denver   Temperature = "<<static_cast<int>(tmpDen)
            <<" Fahrenheit"<<endl;
    cout<<"Phoenix  Temperature = "<<static_cast<int>(tmpPhnx)
            <<" Fahrenheit"<<endl;
    cout<<"Average  Temperature = "<<avgTmp2<<"Fahrenheit"<<endl;
    
    //Display the Average Increase
    cout<<"Average Percent Temperature Increase = "
            <<100.0f*(avgTmp2-avgTmp1)/avgTmp1<<"%"<<endl;
      
    //Exit the Program - Cleanup
    return 0;
}

