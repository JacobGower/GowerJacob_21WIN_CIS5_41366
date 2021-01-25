/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 12:36 PM
 * Purpose:  Organize Runners by Time
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <string>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
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
    return 0;
}