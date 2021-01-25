/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 12:36 PM
 * Purpose:  Calculate Monthly Bank Charges
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
    int   numChck; //Number of Checks written
    float actBlnc, //Account Balance
          lowBlnc, //Low Balance Charge = $15.00
          mtlyFee, //Monthly checking account fee = $10.00
          chckFee, //Check Fee for Commercial Checking Account
          newBlnc; //New Account Balance
          
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>actBlnc;
    cin>>numChck;
    
    mtlyFee=10.00f;
    
    lowBlnc=(actBlnc<400)?15.00f:0.00f;
    
    if (numChck<0) {
        cout<<"Number of Checks is Invalid."<<endl;
    
        
    }else {
    
        if (actBlnc<=0) {
        cout<<"Low Balance";
        }
        
        chckFee=(numChck<20)?numChck*0.10f:
                (numChck<40)?numChck*0.08f:
                (numChck<60)?numChck*0.06f:numChck*0.04f;
        
        //Map inputs -> outputs
        
        newBlnc=actBlnc-(lowBlnc+mtlyFee+chckFee);
    
        //Display the outputs
        cout<<fixed<<setprecision(2);
        cout<<"Balance     $ "<<setw(8)<<actBlnc<<endl;
        cout<<"Check Fee   $ "<<setw(8)<<chckFee<<endl;
        cout<<"Monthly Fee $ "<<setw(8)<<mtlyFee<<endl;
        cout<<"Low Balance $ "<<setw(8)<<lowBlnc<<endl;
        cout<<"New Balance $ "<<setw(8)<<newBlnc; 
    
    }
    
    
    //Exit stage right or left!
    return 0;
}