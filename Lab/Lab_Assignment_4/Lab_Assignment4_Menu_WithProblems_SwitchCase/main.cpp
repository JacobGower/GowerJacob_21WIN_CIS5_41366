/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on March 17th, 2020, 11:33 AM
 * Purpose: Menu for Assignment 3 Programs
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis Name Sorting Problem"<<endl;
    cout<<"Type 2 for Gaddis Book Club Problem"<<endl;
    cout<<"Type 3 for Gaddis Bank Charges Problem"<<endl;
    cout<<"Type 4 for Gaddis Race Time Sorting Problem"<<endl;
    cout<<"Type 5 for Gaddis ISP Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savitch Roman Numeral Year Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Zodiac Sign Problem"<<endl;
    cin>>choice;
    
    switch(choice){
        case '1':{ //Name Sorting Problem
             //Declare Variables
            string name1, //1st Name Input by User
                   name2, //2nd Name Input by User
                   name3; //3rd Name Input by User

            //Initialize or input i.e. set variable values
            cout<<"Sorting Names"<<endl;
            cout<<"Input 3 names"<<endl;
            cin>>name1;
            cin>>name2;
            cin>>name3;

            //Map inputs -> outputs
            if(name1<name2 && name2<name3) {
                cout<<name1<<endl;
                cout<<name2<<endl;
                cout<<name3;

            }else if(name1<name3 && name3<name2) {
                cout<<name1<<endl;
                cout<<name3<<endl;
                cout<<name2;

            }else if(name2<name1 && name1<name3) {
                cout<<name2<<endl;
                cout<<name1<<endl;
                cout<<name3;

            }else if(name2<name3 && name3<name1) {
                cout<<name2<<endl;
                cout<<name3<<endl;
                cout<<name1;

            }else if(name3<name1 && name1<name2) {
                cout<<name3<<endl;
                cout<<name1<<endl;
                cout<<name2;

            }else if(name3<name2 && name2<name1) {
                cout<<name3<<endl;
                cout<<name2<<endl;
                cout<<name1;

            }else
                cout<<"You're doing this by yourself, aren't you?";
            
            //Exit stage right or left!
            
            break;
        }case '2': { //Book Club Problem
           //Declare Variables
            int numBook, //Number of Books Purchased this Month
                 points; //Points Earned for Book Purchases

            //Initialize or input i.e. set variable values
            numBook=0;
            cout<<"Book Worm Points\n";
            cout<<"Input the number of books purchased this month.\n";
            cin>>numBook;

            //Map inputs -> outputs
            if (numBook>=0) {
                if (numBook==0) {
                    points=0;
                }else if (numBook==1) {
                    points=5;
                }else if (numBook==2) {
                    points=15;
                }else if (numBook==3) {
                    points=30;
                }else {
                    points=60;
                }
            //Display the outputs
                cout<<"Books purchased ="<<setw(3)<<numBook<<endl;
                cout<<"Points earned   ="<<setw(3)<<points;


            }else {
                cout<<"Invalid Entry.";
                cout<<"Valid Entries are Greater than or Equal to 0."<<endl;
            } 
            //Exit stage right or left!
            
            break;
        }case '3': { //Bank Charges Problem
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
           
            break;
        }case '4': { //Race Time Sorting Problem
            //Declare Variables
            string runner1, 
                   runner2, 
                   runner3; //Runner Names Input by User
            float  runTme1, 
                   runTme2,
                   runTme3; //Runner's Run Times

            //Initialize or input i.e. set variable values
            cout<<"Race Ranking Program"<<endl;
            cout<<"Input 3 Runners"<<endl;
            cout<<"Their names, then their times"<<endl;
            cin>>runner1>>runTme1;
            cin>>runner2>>runTme2;
            cin>>runner3>>runTme3;

            //Display the outputs
            if (runTme1<0||runTme2<0) {
                cout<<"Error! Nobody is that fast!"<<endl;

            }else if (runTme3<0) {
                cout<<"Error! Nobody is that fast!"<<endl;

            }else {
                if (runTme1<runTme2 && runTme2<runTme3) {
                    cout<<runner1<<"\t"<<setw(3)<<runTme1<<endl;
                    cout<<runner2<<"\t"<<setw(3)<<runTme2<<endl;
                    cout<<runner3<<"\t"<<setw(3)<<runTme3;

                }else if (runTme1<runTme3 && runTme3<runTme2) {
                    cout<<runner1<<"\t"<<setw(3)<<runTme1<<endl;
                    cout<<runner3<<"\t"<<setw(3)<<runTme3<<endl;
                    cout<<runner2<<"\t"<<setw(3)<<runTme2;

                }else if (runTme2<runTme1 && runTme1<runTme3) {
                    cout<<runner2<<"\t"<<setw(3)<<runTme2<<endl;
                    cout<<runner1<<"\t"<<setw(3)<<runTme1<<endl;
                    cout<<runner3<<"\t"<<setw(3)<<runTme3;

                }else if (runTme2<runTme3 && runTme3<runTme1) {
                    cout<<runner2<<"\t"<<setw(3)<<runTme2<<endl;
                    cout<<runner3<<"\t"<<setw(3)<<runTme3<<endl;
                    cout<<runner1<<"\t"<<setw(3)<<runTme1;

                }else if (runTme3<runTme1 && runTme1<runTme2) {
                    cout<<runner3<<"\t"<<setw(3)<<runTme3<<endl;
                    cout<<runner1<<"\t"<<setw(3)<<runTme1<<endl;
                    cout<<runner2<<"\t"<<setw(3)<<runTme2;

                }else if (runTme3<runTme2 && runTme2<runTme1) {
                    cout<<runner3<<"\t"<<setw(3)<<runTme3<<endl;
                    cout<<runner2<<"\t"<<setw(3)<<runTme2<<endl;
                    cout<<runner1<<"\t"<<setw(3)<<runTme1;

                }else {
                    cout<<"More than one winner?"<<endl;
                    cout<<"Or more than one loser?"<<endl;
                }
            }
            //Exit stage right or left!
           
            break;
        }case '5': { //ISP Problem
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
           
            break;
        }case '6': { //Rock Paper Scissors Problem
            //Declare Variables
            string player1,
                   player2, //Player Inputs
                     r="r",
                     R="R", //Rock
                     p="p",
                     P="P", //Paper
                     s="s",
                     S="S"; //Scissors


            //Initialize or input i.e. set variable values
            cout<<"Rock Paper Scissors Game"<<endl;
            cout<<"Input Player 1 and Player 2 Choices"<<endl;
            cin>>player1;
            cin>>player2;

            //Display the outputs
            if (player1==r||player1==R) {
                if (player2==p||player2==P) {
                    cout<<"Paper covers rock.";
                }else if (player2==s||player2==S) {
                    cout<<"Rock breaks scissors.";
                }else if (player2==r||player2==R) {
                    cout<<"Nobody wins";
                }

            }

            if (player1==p||player1==P) {
                if (player2==r||player2==R) {
                    cout<<"Paper covers rock.";
                }else if (player2==s||player2==S) {
                    cout<<"Scissors cuts paper.";
                }else if (player2==p||player2==P) {
                    cout<<"Nobody wins";
                }
            }

            if (player1==s||player1==S) {
                if (player2==r||player2==R) {
                    cout<<"Rock breaks scissors";
                }else if (player2==p||player2==P) {
                    cout<<"Scissors cuts paper.";
                }else if (player2==s||player2==S) {
                    cout<<"Nobody wins";
                }
            }
            //Exit stage right or left!
           
            break;
        }case '7': { //Roman Numeral Year Conversion Problem
            //Declare Variables
            unsigned short year; //Year to be Converted to Roman Numerals
            unsigned char n1000, //Thousands Place in Year
                           n100, //Hundreds Place in Year
                            n10, //Tens Place in Year
                             n1; //Ones Place in Year

            //Initialize or input i.e. set variable values
            cout<<"Arabic to Roman numeral conversion."<<endl;
            cout<<"Input the integer to convert."<<endl;
            cin>>year;

            //Map inputs -> outputs
            if (year<3001 && year>999) {
                cout<<year<<" is equal to ";
                n1000=year/1000;
                n100=year%1000/100;
                n10=year%100/10;
                n1=year%10;

                cout<<(n1000==3?"MMM":
                       n1000==2?"MM":
                       n1000==1?"M":"");

                cout<<(n100==9?"CM":
                       n100==8?"DCCC":
                       n100==7?"DCC":
                       n100==6?"DC":
                       n100==5?"D":
                       n100==4?"CD":
                       n100==3?"CCC":
                       n100==2?"CC":
                       n100==1?"C":"");

                cout<<(n10==9?"XC":
                       n10==8?"LXXX":
                       n10==7?"LXX":
                       n10==6?"LX":
                       n10==5?"L":
                       n10==4?"XL":
                       n10==3?"XXX":
                       n10==2?"XX":
                       n10==1?"X":"");

                cout<<(n1==9?"IX":
                       n1==8?"VIII":
                       n1==7?"VII":
                       n1==6?"VI":
                       n1==5?"V":
                       n1==4?"IV":
                       n1==3?"III":
                       n1==2?"II":
                       n1==1?"I":"");


            //Display the outputs
            }else {
                cout<<year<<" is Out of Range!";
            }
            //Exit stage right or left!
           
            break;
        }case '8': { //Compatible Zodiac Sign Problem
            //Declare Variables
            string   sign1, 
                     sign2, //Astrological Signs to be Input by User
                    elmnt1,
                    elmnt2; //Elements that Signs are Classified as

            //Initialize or input i.e. set variable values
            cout<<"Horoscope Program which examines compatible signs."<<endl;
            cout<<"Input 2 signs."<<endl;
            cin>>sign1>>sign2;


            //Map inputs -> outputs

            //Sign 1 Inputs
            //Fire Signs
            if (sign1=="Aries"||sign1=="aries") {
                elmnt1="Fire";

            }else if (sign1=="Leo"||sign1=="leo") {
                elmnt1="Fire";

            }else if (sign1=="Sagittarius"||sign1=="sagittarius") {
                elmnt1="Fire";

            //Earth Signs    
            }else if (sign1=="Taurus"||sign1=="taurus") {
                elmnt1="Earth";

            }else if (sign1=="Virgo"||sign1=="virgo") {
                elmnt1="Earth";

            }else if (sign1=="Capricorn"||sign1=="capricorn") {
                elmnt1="Earth";

            //Air Signs
            }else if (sign1=="Gemini"||sign1=="gemini") {
                elmnt1="Air";

            }else if (sign1=="Libra"||sign1=="libra") {
                elmnt1="Air";

            }else if (sign1=="Aquarius"||sign1=="aquarius") {
                elmnt1="Air";

            //Water Signs
            }else if (sign1=="Cancer"||sign1=="cancer") {
                elmnt1="Water";

            }else if (sign1=="Scorpio"||sign1=="scorpio") {
                elmnt1="Water";

            }else if (sign1=="Pisces"||sign1=="pisces") {
                elmnt1="Water";

            //Input is not Recognized as a Sign
            }else {
                cout<<"First Sign Invalid Input"<<endl;
                elmnt1="Invalid";
            }

            //Sign 2 Inputs
            if (sign2=="Aries"||sign2=="aries") {
                elmnt2="Fire";

            }else if (sign2=="Leo"||sign2=="leo") {
                elmnt2="Fire";

            }else if (sign2=="Sagittarius"||sign2=="sagittarius") {
                elmnt2="Fire";

            //Earth Signs    
            }else if (sign2=="Taurus"||sign2=="taurus") {
                elmnt2="Earth";

            }else if (sign2=="Virgo"||sign2=="virgo") {
                elmnt2="Earth";

            }else if (sign2=="Capricorn"||sign2=="capricorn") {
                elmnt2="Earth";

            //Air Signs
            }else if (sign2=="Gemini"||sign2=="gemini") {
                elmnt2="Air";

            }else if (sign2=="Libra"||sign2=="libra") {
                elmnt2="Air";

            }else if (sign2=="Aquarius"||sign2=="aquarius") {
                elmnt2="Air";

            //Water Signs
            }else if (sign2=="Cancer"||sign2=="cancer") {
                elmnt2="Water";

            }else if (sign2=="Scorpio"||sign2=="scorpio") {
                elmnt2="Water";

            }else if (sign2=="Pisces"||sign2=="pisces") {
                elmnt2="Water";

            //Input is not Recognized as a Sign
            }else {
                cout<<"Second Sign Invalid Input"<<endl;
                elmnt2="Invalid";
            }

            //Display the outputs
            //Program should Identify Which Input is Invalid
            if (elmnt1=="Invalid"||elmnt2=="Invalid") {
                cout<<"Please Enter Two Valid Inputs.";

            //Both Inputs are Valid
            }else {
                if (elmnt1==elmnt2) {
                    cout<<sign1<<" and "<<sign2;
                    cout<<" are compatible "<<elmnt1<<" signs.";


                }else {
                    cout<<sign1<<" and "<<sign2;
                    cout<<" are not compatible signs.";
                }
            }

            //Exit stage right or left!
           
            break;
            
        }default: {
            cout<<"Not an Option"<<endl;
        }
    }//End of Switch Case

    //Clean Up
    
    //Exit stage right!
    return 0;
}