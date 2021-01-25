/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 4, 2021, 11:16 AM
 * Purpose:  Restaurant Bill
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Learned from Fiona in Lecture
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, Higher Dimension Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float mealCst, //Meal Cost before Tip and Tax in U.S. Dollars
           taxPct, //Tax Percentage for calculating Tax Amount
           tipPct, //Tip Percentage for calculating Tip after Tax
           taxAmt, //Tax Amount to be added to Meal Cost in U.S. Dollars
           tipAmt, //Tip to be added to Meal Cost in U.S. Dollars
          ttlBill; //Total Bill amount in U.S. Dollars
            
    //Initialize Variables
    mealCst=88.67;
    taxPct=0.0675;
    tipPct=0.20;
            
    //Map Inputs to Outputs -> Process
    taxAmt=mealCst*taxPct;
    tipAmt=tipPct*(mealCst+taxAmt);
    ttlBill=mealCst+taxAmt+tipAmt;

    //Display Inputs/Outputs
    cout<<fixed<<showpoint<<setprecision(2); //learned from Fiona in Lecture
    cout<<"Meal Cost  = $ "<<mealCst<<endl;
    cout<<"Tax Amount = $  "<<taxAmt<<endl;
    cout<<"Tip Amount = $ "<<tipAmt<<endl;
    cout<<"Total Bill = $"<<ttlBill<<endl;
      
    //Exit the Program - Cleanup
    return 0;
}

