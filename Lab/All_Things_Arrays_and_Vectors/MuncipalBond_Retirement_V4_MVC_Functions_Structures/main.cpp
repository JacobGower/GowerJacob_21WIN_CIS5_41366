/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on February 3rd, 2020, 12:33 PM
 * Purpose:  Municipal Bond Savings for Retirement
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries
#include "Table.h"

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float CNVDCML=100.0f;//Conversion to Decimal from Percent

//Function Prototypes
void savings(Table &,float &, float, float);
void display(Table &,float, float, float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    float intRate,//Interest Rate % from MUNI BOND
          salary, //Salary in $'s
          yrDpPc; //Yearly Percent Deposit
   const int   NYEARS=31; //Number of Years, remember array size + 1
    float balance[NYEARS]; //Savings Balance $'s  Parallel Array
    int      year[NYEARS], //Year counter  Parallel Array
            dYear[NYEARS]; //Year date  Parallel Array
    Table table;
    
    //Initialize Variables
    table.records=NYEARS;
    table.balance=balance;
    table.year=year;
    table.dYear=dYear;
    table.balance[0]=0.0f;    //Savings in $'s
    intRate=5;        //Yearly Interest Rate
    table.year[0]=0;        //Initialize counter to 0
    table.dYear[0]=2020;    //Initialize date year to now
    salary=100000.0f; //$100,000 per year
    yrDpPc=0.1f;      //Percentage of Salary to deposit
    
    //Process or map Inputs to Outputs
    intRate/=CNVDCML;
    
    
    
        
   
    
    //Process or map Inputs to Outputs
    savings(table,intRate,salary, yrDpPc);
    
    //Display the Heading
    display(table,intRate,salary,yrDpPc);
    
    

    //Exit stage right!
    return 0;
}
void display(Table &table,float intRate, float salary, float yrDpPc){
    //Create the Heading for the Savings Account
    
    float yrDep=yrDpPc*salary;
    float sav2Rtr=salary/intRate;
    float interest=table.balance[0]*intRate;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"With a Yearly Salary of $"<<salary
            <<" and an investment rate of "<<intRate*CNVDCML<<"%,"<<endl;
    cout<<"you will need a savings of $"<<sav2Rtr
            <<" at Retirement."<<endl;
    cout<<"Is "<<yrDpPc*CNVDCML<<"% = $"<<yrDep<<"/year enough for "
            <<(table.records-1)<<" years to reach the goal?"<<endl;
    cout<<"Year  Year       Balance      Interest       Deposit"<<endl;
    cout<<setw(4)<<table.year[0]<<setw(6)<<table.dYear[0]
            <<setw(14)<<table.balance[0]<<setw(14)
            <<interest<<setw(14)<<yrDep<<endl;
    
    //Loop and Display for all years
     //Loop for all years
    for(int cnt=1;cnt<table.records;cnt++){
       interest=table.balance[cnt]*intRate;
        cout<<setw(4)<<table.year[cnt]<<setw(6)<<table.dYear[cnt]
            <<setw(14)<<table.balance[cnt]<<setw(14)
            <<interest<<setw(14)<<yrDep<<endl;
    }
    
    //Did you reach the goal
    if(table.balance[table.records]>sav2Rtr)cout<<"Yes you reached your retirement goal"<<endl;
    else cout<<"You failed to reach your retirement goal"<<endl;
}
void savings(Table &table,float &intRate, float salary, float yrDpPc){
    //Process or map Inputs to Outputs
    float yrDep=yrDpPc*salary;
    
    //Loop and Calculate for all years
    for(int cnt=1;cnt<table.records;cnt++){
       table.year[cnt]=table.year[cnt-1]+1;
       table.dYear[cnt]=table.dYear[cnt-1]+1;
       table.balance[cnt]=table.balance[cnt-1]*(1+intRate); //Beginning of Year
       table.balance[cnt]+=yrDep;                           //End of Year
    }
}