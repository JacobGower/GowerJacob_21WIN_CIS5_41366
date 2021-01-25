/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 4, 2021, 11:16 AM
 * Purpose:  Stock Commission
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
    float stock, //Number of Shares of Stock
         shrPrc, //Price of Stock per Share in U.S. Dollars
        stckTtl, //Total Price for Stocks alone in U.S. Dollars
           cmsn, //Commission percentage for the Stockbroker
        cmsnCst, //Amount to be paid to the Stockbroker in U.S. Dollars 
         ttlCst; //Total cost for Stocks and Commission U.S. Dollars
    
    //Initialize Variables
    stock=750;
    shrPrc=35.00;
    cmsn=.02;
    
    //Map Inputs to Outputs -> Process
    stckTtl=stock*shrPrc;
    cmsnCst=stckTtl*cmsn;
    ttlCst=stckTtl+cmsnCst;

    //Display Inputs/Outputs
    cout<<"Kathryn bought $"<<stckTtl<<" worth of stock\nand paid a $";
    cout<<cmsnCst<<" commission to her broker for a total of $"<<ttlCst;
      
    //Exit the Program - Cleanup
    return 0;
}

