/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 22, 2021, 9:06 PM
 * Purpose:  To calculate the rate of inflation
 *           on an item over one year
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, Higher Dimension Arrays

//Function Prototypes
float percent(float infl8n, float prvsPrc, float crntPrc);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float  infl8n, //Inflation rate as a Percentage
          prvsPrc, //Price of the item in Dollars from one year prior
          crntPrc; //Current price of the item
    char    cntnu; //Choice of whether or not to repeat the program
    
    //Initialize Variables
    do {
        cout<<"Enter current price:"<<endl;
        cin>>crntPrc;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prvsPrc;
        
        //Map Inputs to Outputs -> Process
        infl8n=percent(infl8n,prvsPrc,crntPrc);
        
        //Display Inflation Rates
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2); //Trying to use the Savitch method
        cout<<"Inflation rate: "<<infl8n<<"%\n"<<endl;
        
        cout<<"Again:"<<endl;
        cin>>cntnu;
        
        if (cntnu=='y'||cntnu=='Y') {
            cout<<endl;
        }
    
    //Test the Loop condition
    }while(cntnu=='y'||cntnu=='Y');
        
    //Exit the Program - Cleanup
    return 0;
}
//Function to Calculate the Inflation Rate as a Percentage
float percent(float infl8n, float prvsPrc, float crntPrc) {
    infl8n=((crntPrc-prvsPrc)/prvsPrc)*100.0f;
    return infl8n;
}

