/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 12:36 PM
 * Purpose:  Calculate ISP Customer's Monthly Bill
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
    float          mtlyChg; //Monthly Charge for Internet Package
    unsigned short totlHrs; //Total Hours used
    unsigned char  package, //Internet Package
                   packHrs, //Hours Included in a Package
                   adtlHrs; //Additional Hours Charged
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package>>totlHrs;
    
    if (totlHrs>=0 && totlHrs<=744) {
        switch (package) {
            case 'A':{
                mtlyChg=9.95;
                packHrs=10;
                adtlHrs=2;
                break;
            
            }case 'B':{
                mtlyChg=14.95;
                packHrs=20;
                adtlHrs=1;
                break;
            
            }case 'C':{
                mtlyChg=19.95;
                packHrs=0;
                adtlHrs=0;
                break;
            }
        }
    
    //Map inputs -> outputs
        if (packHrs<totlHrs) {
            mtlyChg+=adtlHrs*(totlHrs-packHrs);
        }
    //Display the outputs
        cout<<setprecision(2)<<showpoint<<fixed;
        cout<<"Bill = $ "<<mtlyChg;
    
    
    }else {
        cout<<"ERROR! Invalid Input for Monthly Hours.";
    }
    
    //Exit stage right or left!
    return 0;
}