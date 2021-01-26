/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 24th, 2021, 11:33 AM
 * Purpose: Menu for Assignment 4 Programs
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
const float GL_CNVSN=0.264179f;

//Function Prototypes
float cnvrsn(float liter, float gallon, float milPer, float milDrvn);
float cnvrsn2(float liter2, float gallon2, float milPer2, float milDrv2);
float percent(float infl8n, float prvsPrc, float crntPrc);
float cst1Yr  (float infl8n, float crntPrc, float prc1Yr);
int mx2Pmtr (float num1, float num2, float max2);
int mx3Pmtr (float num1, float num2, float num3, float max3);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis Sum Loop Problem"<<endl;
    cout<<"Type 2 for Gaddis Pay in Pennies Problem"<<endl;
    cout<<"Type 3 for Gaddis Min/Max Integer Problem"<<endl;
    cout<<"Type 4 for Gaddis Rectangle Problem"<<endl;
    cout<<"Type 5 for Gaddis Pattern Problem"<<endl;
    cout<<"Type 6 for Savitch MPG Problem"<<endl;
    cout<<"Type 7 for Savitch MPG Comparison Problem"<<endl;
    cout<<"Type 8 for Savitch Inflation Percentage Problem"<<endl;
    cout<<"Type 9 for Savitch Inflation Item Cost Problem"<<endl;
    cout<<"Type 0 for Savitch Max Parameter Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':{ //Sum Loop Problem
             //Declare Variables
            unsigned int number, //Number entered by user
                         sum;    //Total to be displayed

            //Initialize Variables
            sum=0;

            //Map Inputs to Outputs -> Process
            cin>>number;

            for (int intlNum=1;intlNum<=number;intlNum++) {
                sum+=intlNum;
            }

            //Display Inputs/Outputs
              cout<<"Sum = "<<sum;
      
            //Exit the Program - Cleanup
            
            break;
        }case '2': { //Pay in Pennies Problem
           //Declare Variables
            int days, //Days worked, input by employee
             pennies, //Pay in pennies
             dayDble, //Pay doubles for every day worked
              payTtl, //Total pay in pennies
             dollars, //Dollars place in total pay
               cents; //Leftover cents for total pay caltulation


            //Initialize Variables
            pennies=1;
            dayDble=2;
            payTtl=0;

            cin>>days;

            //Map Inputs to Outputs -> Process
            while (days<=0) { //Validate input is greater than 0
                cout<<"Invalid Input.\n";
                cout<<"No work = No pay.\n";
                cout<<"Please input a number of days worked greater than 0.";
            }

            for (int intl=0;intl<days;intl++) { //calculate pay with for loop
                payTtl+=pennies;
                pennies=pennies*dayDble;
            }

            dollars=payTtl/100;
            cents=payTtl%100;

            //Display Inputs/Outputs
            cout<<"Pay = $"<<dollars<<".";
            if (cents<=9) {
                cout<<"0";
            }
            cout<<cents;

            //Exit the Program - Cleanup
            
            break;
        }case '3': { //Min/Max Integer Problem
            const int SNTNL=-99; //Sentinel to signal for the loop to Terminate
            int           input, //Number other than -99 to be Input By User
                         minNum, //Smallest number entered by User
                         maxNum; //Largest number entered by User

            //Initialize Variables
            cin>>input;

            minNum=maxNum=input;

            //Map Inputs to Outputs -> Process
            while (input!=SNTNL) {
                if (input<minNum) {
                    minNum=input;
                }
                if (input>maxNum) {
                    maxNum=input;
                }

                cin>>input;
            }

            //Display Inputs/Outputs
            cout<<"Smallest number in the series is "<<minNum<<endl;
            cout<<"Largest  number in the series is "<<maxNum;

            //Exit the Program - Cleanup
            
            break;
        }case '4': { //Rectangle Problem
            //Declare Variables
            char symbol; //Symbol to be used in the Block of characters
            int dimensn; //Dimensions of the Block on one side

            //Initialize Variables
            cin>>dimensn;
            cin>>symbol;

            //Map Inputs to Outputs -> Process
            //Display Inputs/Outputs
            for (int prmary=0;prmary<dimensn-1;prmary++) {
                for (int scndary=0;scndary<dimensn-1;scndary++) {
                    cout<<symbol;   
                }
                cout<<symbol<<endl;
            }
            for (int trtiary=0;trtiary<dimensn;trtiary++) {
                cout<<symbol;
            }

            //Exit the Program - Cleanup
           
            break;
        }case '5': { //Pattern Problem
            //Declare Variables
            int row; //Number of rows to be displayed Input by User

            //Initialize Variables
            cin>>row;

            //Map Inputs to Outputs -> Process and Display
            for (int prmary=1;prmary<=row;++prmary) {
                for (int scndary=1;scndary<=prmary;++scndary) {
                    cout<<"+";
                }
                cout<<endl<<endl;
            }

            for (int prmary=row;prmary>=2;--prmary) {
                for (int scndary=1;scndary<=prmary;++scndary) {
                    cout<<"+";
                }
                cout<<endl<<endl;
            }
            cout<<"+";

            //Exit the Program - Cleanup
           
            break;
        }case '6': { //MPG Problem
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
           
            break;
        }case '7': { //MPG Comparison Problem
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
           
            break;
        }case '8': { //Inflation Percentage Problem
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
           
           
            break;
            
        }case '9': { //Inflation Item Cost Problem
            //Declare Variables 
            float  infl8n, //Inflation rate as a Percentage
                  prvsPrc, //Price of the item in Dollars from one year prior
                  crntPrc, //Current price of the item
                   prc1Yr, //Price of the Item after 1 Year of Inflation
                   prc2Yr; //Price of the Item after 2 Years of Inflation
            char    cntnu; //Choice of whether or not to repeat the program

            //Initialize Variables
            do {
                cout<<"Enter current price:"<<endl;
                cin>>crntPrc;
                cout<<"Enter year-ago price:"<<endl;
                cin>>prvsPrc;

                //Map Inputs to Outputs -> Process

                infl8n=percent(infl8n,prvsPrc,crntPrc);

                prc1Yr=cst1Yr(infl8n,crntPrc,prc1Yr);
                prc2Yr=prc1Yr+(prc1Yr*(infl8n/100.0f));

                //Display Inflation Rates
                cout.setf(ios::fixed);
                cout.setf(ios::showpoint);
                cout.precision(2); //Trying to use the Savitch method
                cout<<"Inflation rate: "<<infl8n<<"%\n"<<endl;

                cout<<"Price in one year: $"<<prc1Yr<<endl;

                cout<<"Price in two year: $"<<prc2Yr<<endl<<endl;


                cout<<"Again:"<<endl;
                cin>>cntnu;

                if (cntnu=='y'||cntnu=='Y') {
                    cout<<endl;
                }

            //Test the Loop condition
            }while(cntnu=='y'||cntnu=='Y');

            //Exit the Program - Cleanup
           
            break;
            
        }case '0': { //Max Parameter Problem
           //Declare Variables
            float num1,
                  num2,
                  num3, //Numbers to be Input by User
                  max2, //Largest Number for Function with 2 Inputs
                  max3; //Largest Number for Function with 3 Inputs

            //Initialize Variables
            cout<<"Enter first number:"<<endl;
            cin>>num1;
            cout<<endl;
            cout<<"Enter Second number:"<<endl;
            cin>>num2;
            cout<<endl;
            cout<<"Enter third number:"<<endl;
            cin>>num3;
            cout<<endl;

            //Map Inputs to Outputs -> Process

            //Display Inputs/Outputs
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(1); //Trying to use the Savitch method

            mx2Pmtr (num1,num2,max2);
            mx3Pmtr (num1,num2,num3, max3);

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
//Function to Convert Liters to Gallon and Calculate Miles Per Gallon
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
//Function to Calculate the Inflation Rate as a Percentage
float percent(float infl8n, float prvsPrc, float crntPrc) {
    infl8n=((crntPrc-prvsPrc)/prvsPrc)*100.0f;
    return infl8n;
}
//Function to Calculate the Cost of an Item after one Year
float cst1Yr  (float infl8n, float crntPrc, float prc1Yr) {
    prc1Yr=crntPrc+(crntPrc*(infl8n/100.0f));
    return prc1Yr;
}
//Function Definition for Function with 2 Parameters
int mx2Pmtr (float num1, float num2, float max2) {
    if (num1>num2) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<num1<<endl<<endl;
        
    }else if (num2>num1) {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<num2<<endl<<endl;
        
    }else {
        cout<<"The two Parameters are equal";
        cout<<endl<<endl;
    }
    return 0;
}
//Function Definition for Function with 3 Parameters 
int mx3Pmtr (float num1, float num2, float num3, float max3) {
    if (num1>num2 && num1>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<num1<<endl;
        
    }else if (num2>num1 && num2>num3) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<num2<<endl;
        
    }else if (num3>num1 && num3>num2) {
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<num3<<endl;
        
    }else if (num1==num2 && num1>num3) {
        cout<<num1<<" and "<<num2<<" are equal and are larger than ";
        cout<<num3<<endl;
        
    }else if (num1==num3 && num1>num2) {
        cout<<num1<<" and "<<num3<<" are equal and are larger than ";
        cout<<num2<<endl;
        
    }else if (num2==num3 && num2>num1) {
        cout<<num2<<" and "<<num3<<" are equal and are larger than ";
        cout<<num1<<endl;
        
    }else { 
        cout<<"All parameters are equal";
        cout<<endl;
    }
    return 0;
}