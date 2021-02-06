/* 
 * File:   main.cpp
 * Author: Jacob Gower
 * Created on February 4, 2021, 11:16 AM
 * Purpose:  To Play a Game of Cribbage against a computer
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
#include <cstdlib>   //Random Function
#include <fstream>   //File Library
#include <string>    //String Library
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, Higher Dimension Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int  plyrScr, //Score of the Player
         cmpScr; //Score of the Computer
    string num1, num2, num3, num4, num5, num6,
           suit1, suit2, suit3, suit4, suit5, suit6, 
           card1,card2,card3,card4,card5,card6, //Player's Cards
           crib1,crib2; //Cards the Computer Contributes to the Crib 
           
    const int MAX_SCR=121, //Max Score in a Game of Cribbage
                   HAND=6; //Max Number of Cards in Hand
    char      cardNum, //Card Number
               cardSt, //Card Suit
              select1, //First Card Selected by Player to Put in Crib
              select2; //Second Card Selected by Player to Put in Crib
    
    //Initialize Variables
    cardNum=13; //13 Possible Cards to Draw (A,2-10,J,Q,K)
    cardSt=4;   //4 Potential Suits (S,H,C,D)
    
    
    
    
    
    //Play a Round
    //do {
    //"Deal" Cards to Player
    do{
        char number=rand()%cardNum+1;
        char suit=rand()%cardSt+1;
        //Card 1    
        //Determine Number
            switch (number) {
                    case 1: num1 = "A"; break;
                    case 2: num1 = "2"; break;
                    case 3: num1 = "3"; break;
                    case 4: num1 = "4"; break;
                    case 5: num1 = "5"; break;
                    case 6: num1 = "6"; break;
                    case 7: num1 = "7"; break;
                    case 8: num1 = "8"; break;
                    case 9: num1 = "9"; break;
                    case 10:num1 = "10";break;
                    case 11:num1 = "J"; break;
                    case 12:num1 = "Q"; break;
                    case 13:num1 = "K"; break;
            }
            //Determine Suit
            switch (suit) {
                    case 1: suit1 = "S"; break;
                    case 2: suit1 = "H"; break;
                    case 3: suit1 = "C"; break;
                    case 4: suit1 = "D"; break;
            }
            card1=num1+suit1;

            //Card 2
            number=rand()%cardNum+1;
            suit=rand()%cardSt+1;
            switch (number) {
                    case 1: num2 = "A"; break;
                    case 2: num2 = "2"; break;
                    case 3: num2 = "3"; break;
                    case 4: num2 = "4"; break;
                    case 5: num2 = "5"; break;
                    case 6: num2 = "6"; break;
                    case 7: num2 = "7"; break;
                    case 8: num2 = "8"; break;
                    case 9: num2 = "9"; break;
                    case 10:num2 = "10";break;
                    case 11:num2 = "J"; break;
                    case 12:num2 = "Q"; break;
                    case 13:num2 = "K"; break;
            }
            
            switch (suit) {
                    case 1: suit2 = "S"; break;
                    case 2: suit2 = "H"; break;
                    case 3: suit2 = "C"; break;
                    case 4: suit2 = "D"; break;
            }
            card2=num2+suit2;
    }while (card1==card2); //Try to Exclude Matching cards
    do{    
        char number=rand()%cardNum+1;
        char suit=rand()%cardSt+1;
            switch (number) {
                    case 1: num3 = "A"; break;
                    case 2: num3 = "2"; break;
                    case 3: num3 = "3"; break;
                    case 4: num3 = "4"; break;
                    case 5: num3 = "5"; break;
                    case 6: num3 = "6"; break;
                    case 7: num3 = "7"; break;
                    case 8: num3 = "8"; break;
                    case 9: num3 = "9"; break;
                    case 10:num3 = "10";break;
                    case 11:num3 = "J"; break;
                    case 12:num3 = "Q"; break;
                    case 13:num3 = "K"; break;
            }

            switch (suit) {
                    case 1: suit3 = "S"; break;
                    case 2: suit3 = "H"; break;
                    case 3: suit3 = "C"; break;
                    case 4: suit3 = "D"; break;
            }
            card3=num3+suit3;
    }while (card2==card3);
    do{    
        char number=rand()%cardNum+1;
        char suit=rand()%cardSt+1;
            switch (number) {
                    case 1: num4 = "A"; break;
                    case 2: num4 = "2"; break;
                    case 3: num4 = "3"; break;
                    case 4: num4 = "4"; break;
                    case 5: num4 = "5"; break;
                    case 6: num4 = "6"; break;
                    case 7: num4 = "7"; break;
                    case 8: num4 = "8"; break;
                    case 9: num4 = "9"; break;
                    case 10:num4 = "10";break;
                    case 11:num4 = "J"; break;
                    case 12:num4 = "Q"; break;
                    case 13:num4 = "K"; break;
            }

            switch (suit) {
                    case 1: suit4 = "S"; break;
                    case 2: suit4 = "H"; break;
                    case 3: suit4 = "C"; break;
                    case 4: suit4 = "D"; break;
            }
            card4=num4+suit4;
    }while (card3==card4);
    do{    
        char number=rand()%cardNum+1;
        char suit=rand()%cardSt+1;
            switch (number) {
                    case 1: num5 = "A"; break;
                    case 2: num5 = "2"; break;
                    case 3: num5 = "3"; break;
                    case 4: num5 = "4"; break;
                    case 5: num5 = "5"; break;
                    case 6: num5 = "6"; break;
                    case 7: num5 = "7"; break;
                    case 8: num5 = "8"; break;
                    case 9: num5 = "9"; break;
                    case 10:num5 = "10";break;
                    case 11:num5 = "J"; break;
                    case 12:num5 = "Q"; break;
                    case 13:num5 = "K"; break;
            }

            switch (suit) {
                    case 1: suit5 = "S"; break;
                    case 2: suit5 = "H"; break;
                    case 3: suit5 = "C"; break;
                    case 4: suit5 = "D"; break;
            }
            card5=num5+suit5;
    }while (card4==card5);
    do{    
        char number=rand()%cardNum+1;
        char suit=rand()%cardSt+1;
            switch (number) {
                    case 1: num6 = "A"; break;
                    case 2: num6 = "2"; break;
                    case 3: num6 = "3"; break;
                    case 4: num6 = "4"; break;
                    case 5: num6 = "5"; break;
                    case 6: num6 = "6"; break;
                    case 7: num6 = "7"; break;
                    case 8: num6 = "8"; break;
                    case 9: num6 = "9"; break;
                    case 10:num6 = "10";break;
                    case 11:num6 = "J"; break;
                    case 12:num6 = "Q"; break;
                    case 13:num6 = "K"; break;
            }

            switch (suit) {
                    case 1: suit6 = "S"; break;
                    case 2: suit6 = "H"; break;
                    case 3: suit6 = "C"; break;
                    case 4: suit6 = "D"; break;
            }
            card6=num6+suit6;
    }while (card5==card6);
    
    //Display Hand
    cout<<"Your Hand"<<endl;
    cout<<card1<<endl;
    cout<<card2<<endl;
    cout<<card3<<endl;
    cout<<card4<<endl;
    cout<<card5<<endl;
    cout<<card6<<endl<<endl;
    
    //Ask for Cards to add to the Crib for the Round
    cout<<"Choose a card to add to the crib"<<endl;
    //Hold the Players Hand for Teaching Purposes
    cout<<"Enter the number or letter, then the suit separated by a space";
    cout<<" then press ENTER"<<endl<<"Example: A H"<<endl;
    cin>>select1;
    
    select1=toupper(select1);
    
    cout<<"Now pick the second card to add to the crib"<<endl;
    cin>>select2;
    
    cout<<select1<<endl<<select2;
    
    
    
    
    
    //Map Inputs to Outputs -> Process
    //}while (plyrScr<=MAX_SCR||cmpScr<=MAX_SCR);
    
    //Display Inputs/Outputs
    //char deal=rand()%cardNum+1; cout<<static_cast<int>(deal)<<endl;
        
        
        
    //Exit the Program - Cleanup
    
    return 0;
}

