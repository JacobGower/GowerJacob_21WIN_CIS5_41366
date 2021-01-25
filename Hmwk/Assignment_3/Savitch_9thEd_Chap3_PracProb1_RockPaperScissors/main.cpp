/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on January 18, 2021, 12:36 PM
 * Purpose:  A Game of Rock Paper Scissors
 */

//System Libraries
#include <iostream>  //Input/Output Library
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
    return 0;
}