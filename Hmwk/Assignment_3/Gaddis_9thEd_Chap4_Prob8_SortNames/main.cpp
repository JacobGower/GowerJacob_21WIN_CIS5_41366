/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 12:36 PM
 * Purpose:  To sort names input by User Alphabetically
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Objects for Name Input
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
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
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}