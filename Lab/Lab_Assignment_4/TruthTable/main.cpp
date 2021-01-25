/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 19, 2021, 10:10 PM
 * Purpose:  Truth Table (Logical Operators)
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    bool x,y; //Boolean statements represented in the Table
    
    //Initialize Variables
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y"  //Logical operator header row
          " !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //1st Row of the Truth Table
    
    x=y=true;  //Initialize both x and y as true
    
    //Logical operators written as questions for my understanding:
    //Is x true?
    cout<<(x?'T':'F')<<" ";          
    //Is y true?
    cout<<(y?'T':'F')<<"  ";         
    //Is x not true?
    cout<<(!x?'T':'F')<<"  ";        
    //Is y not true?
    cout<<(!y?'T':'F')<<"   ";
    //Are both x and y true?
    cout<<(x&&y?'T':'F')<<"    "; 
    //Is either x or y true?
    cout<<(x||y?'T':'F')<<"   ";
    //Is Exclusively x or Exclusively y true? 
    cout<<(x^y?'T':'F')<<"    ";
    //Is Exclusively (Exclusively x or Exclusively y), or Exclusively x true?
    cout<<((x^y)^x?'T':'F')<<"     ";
    //Is Exclusively (Exclusively x or Exclusively y), or Exclusively y true?
    cout<<((x^y)^y?'T':'F')<<"      ";
    //Is (x and y) not true?
    cout<<(!(x&&y)?'T':'F')<<"      ";
    //Is either x not true or is y not true?
    cout<<(!x||!y?'T':'F')<<"       ";
    //Is (either x or y) not true?
    cout<<(!(x||y)?'T':'F')<<"      ";
    //Is x not true and is y not true?
    cout<<(!x&&!y?'T':'F')<<" ";
    cout<<endl;
    
    //2nd Row of the Truth Table
    y=false;    //Reassign y as false. x is still true
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^x?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" ";
    cout<<endl; //Logical operator questions are in the same order as 1st row.
    
    //3rd Row of the Truth Table
    x=false;    //Reassign x as false
    y=true;     //Reassign y as true
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^x?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" ";
    cout<<endl; //Logical operator questions are in the same order as 1st row.
    
    //4th Row of the Truth Table
    y=false;    //Reassign y as false. x is still false
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^x?'T':'F')<<"     ";
    cout<<((x^y)^y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<" ";
               //Logical operator questions are in the same order as 1st row.
    
    //Exit the Program - Cleanup
    return 0;
}