/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 24th, 2021, 11:33 AM
 * Purpose: Menu for Assignment 4 Programs
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related


//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max
int fctrl(int);//Function to write for this problem
bool isPrime(int);//Determine if the input number is prime.
int collatz(int);//3n+1 sequence
int sqnce(int);
void input (int &, char &, int &);
int convrsn (int, char, int, int, int, char &);
int output (int, char, int, int, char &);
float psntVal(float,float,float,int);
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for MinMax Problem"<<endl;
    cout<<"Type 2 for Pay in Pennies Problem"<<endl;
    cout<<"Type 3 for isPrime Problem"<<endl;
    cout<<"Type 4 for Problem"<<endl;
    cout<<"Type 5 for Problem"<<endl;
    cout<<"Type 6 for Problem"<<endl;
    cout<<"Type 7 for Problem"<<endl;
    cout<<"Type 8 for Problem"<<endl;
    cout<<"Type 9 for Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':{ //MinMax Problem
            //Declare Variables
            int num1,
                num2,
                num3, //Numbers to be Input By User
                 min, //Minimum Integer Input by User
                 max; //Maximum Integer Input by User

            //Initialize Variables
            cout<<"Input 3 numbers\n";
            cin>>num1;
            cin>>num2;
            cin>>num3;

            min=max=num1;

            //Process/Map inputs to outputs
            minmax (num1, num2, num3, min, max);

            //Output data
            cout<<"Min = "<<min<<endl;
            cout<<"Max = "<<max;

            //Exit stage right!
            
            break;
        }case '2': { //Factorial Problem\
            //Declare Variables
            int n; //Integer to be Input by User

            //Initialize Variables


            cout<<"This program calculates the factorial using a ";
            cout<<"function prototype found in the template for this";
            cout<<" problem.\n";

            cout<<"Input the number for the function.\n";
            cin>>n;

            //Process/Map inputs to outputs

            //Output data
            cout<<n<<"! = "<<fctrl(n);
            
            //Exit stage right!
            break;
        }case '3': { //Min/Max Integer Problem
            //Declare Variables
            int n; //Ineger to be Input by User

            //Initialize Variables
            cout<<"Input a number to test if Prime."<<endl;
            cin>>n;

            //Process/Map inputs to outputs

            //Output data
            cout<<n<<" is "<<(isPrime(n)?"prime.":"not prime.");

            //Exit stage right!
           
            break;
        }case '4': { //Collatz Sequence
            //Declare Variables
            int n;

            //Initialize Variables
            cout<<"Collatz Conjecture Test"<<endl;
            cout<<"Input a sequence start"<<endl;
            cin>>n;

            //Process/Map inputs to outputs
            cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                    collatz(n)<<" steps";

            //Output data

            //Exit stage right!
            
            break;
        }case '5': { //Collatz Sequence with Output of Sequence
             int  n,
                 ns;

            //Initialize Variables
            cout<<"Collatz Conjecture Test"<<endl;
            cout<<"Input a sequence start"<<endl;
            cin>>n;

            //Process/Map inputs to outputs
            ns=collatz(n);

            //Output data

            sqnce(n);

            cout<<endl;

            cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                    ns<<" steps";
            
           
            break;
        }case '6': { //MPG Problem
             
            break;
        }case '7': { //MPG Comparison Problem
             //Declare Variables
            int mHours, //Military Hours (00:00-23:59)
                sHours, //Standard Hours (12:00-11:59 AM/PM)
               minutes, //Input for Hours and Minutes
               hrCnvrt; //Hour Conversion to Standard
            char     c, //Colon separating the Hours from Minutes
                  amPm, //AM/PM
                choice; //Choice to continue

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
           
           
            break;
        }case '8': { //Inflation Percentage Problem
            //Declare Variables
            float   fv, //Future Value in Dollars
                intrst, //Yearly Interest Rate as a Percent
                    pv; //Present Value Required 
            int nYears; //Number of Years

            //Initialize Variables
            cout<<"This is a Present Value Computation"<<endl;


            cout<<"Input the Future Value in Dollars"<<endl;
            cin>>fv;
            cout<<"Input the Number of Years"<<endl;
            cin>>nYears;
            cout<<"Input the Interest Rate %/yr"<<endl;
            cin>>intrst;



            //Map Inputs to Outputs -> Process


            //Display Inputs/Outputs
            cout<<fixed<<showpoint<<setprecision(2);
            cout<<"The Present Value = $";
            cout<<psntVal(pv, fv, intrst, nYears);

            //Exit the Program - Cleanup
            
           
            break;
            
        }case '9': { //Inflation Item Cost Problem
             //Declare Variables
            int tst1,
                tst2,
                tst3,
                tst4,
                tst5; //5 Test Scores input by User


            //Initialize Variables
            cout<<"Find the Average of Test Scores"<<endl;
            cout<<"by removing the lowest value."<<endl;

            getScre(tst1, tst2, tst3, tst4, tst5);

            //Inputs to Outputs -> Process and Display
            calcAvg(tst1, tst2, tst3, tst4, tst5);

            //Exit the Program - Cleanup
           
            break;
           
        }default: {
            cout<<"Not an Option"<<endl;
        }
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}
void minmax(int num1,int num2,int num3,int&min,int&max) {
   
    max=(num1>max)?num1:
        (num2>max)?num2:num3;
            
    min=(num1<min)?num1:
        (num2<min)?num2:num3;
}
int fctrl(int n) {
    int i=1;
    if (n<0) {
        cout<<"Error, factorials cannot be Negative";
    }else {
        while (n>0) {
            i=n*i;
            n--;
        }
    }return i;
    
}
bool isPrime(int n){
    if(n<=1)return false;
    if(n==2)return true;
    for(int test=2;test<=sqrt(n);test++){
        if(n%test==0)return false;
    }
    return true;
}
int collatz(int n) {
    int i=1;
    while (n>1) {
        if (n%2==0) {
            n=n/2;
        }else {
            n=(n*3)+1;
        }
        i++;
    }
    return i;
}
int sqnce (int n) {
    cout<<n<<", ";
    do {
        if (n%2) {
            int times2=n<<1;
            n=times2+n+1;
        }else {
            n>>=1;
        }
        cout<<n;
        if(n!=1) cout<<", ";
    }while (n>1);
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
float psntVal(float pv, float fv, float intrst, int nYears) {
    pv=fv/pow(1+(intrst/100.0f),nYears);
    return pv;
}
void getScre(int &tst1,int &tst2,int &tst3,int &tst4,int &tst5) {
    cout<<"Input the 5 test scores."<<endl;
    cin>>tst1;
    cin>>tst2;
    cin>>tst3;
    cin>>tst4;
    cin>>tst5;
    if(tst1<1||tst1>100) {
        cout<<"Invalid Input";
        return;
    }
    if(tst2<1||tst2>100) {
        cout<<"Invalid Input";
        return;
    }
    if(tst3<1||tst3>100) {
        cout<<"Invalid Input";
        return;
    }
    if(tst4<1||tst4>100) {
        cout<<"Invalid Input";
        return;
    }
    if(tst5<1||tst5>100) {
        cout<<"Invalid Input";
        return;
    }
}
float calcAvg(int tst1,int tst2,int tst3,int tst4,int tst5) {
    float average=tst1+tst2+tst3+tst4+tst5-fndLwst(tst1,tst2,tst3,tst4,tst5);
    average/=4;
    cout<<"The average test score = "<<setprecision(1)<<fixed<<average;
}
int fndLwst(int tst1,int tst2,int tst3,int tst4,int tst5) {
    if(tst1<tst2&&tst1<tst3&&tst1<tst4&&tst1<tst5)
        return tst1;
    if(tst2<tst1&&tst2<tst3&&tst2<tst4&&tst2<tst5)
        return tst2;
    if(tst3<tst1&&tst3<tst2&&tst3<tst4&&tst1<tst5)
        return tst3;
    if(tst4<tst1&&tst4<tst2&&tst4<tst3&&tst4<tst5)
        return tst4;
    if(tst5<tst1&&tst5<tst2&&tst5<tst3&&tst5<tst4)
        return tst5;
}