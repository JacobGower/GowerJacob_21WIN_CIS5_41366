/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 26, 2021, 2:09 AM
 * Purpose:  Calculate the Average of a Group of Test Scores 
 * 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
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
    return 0;
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