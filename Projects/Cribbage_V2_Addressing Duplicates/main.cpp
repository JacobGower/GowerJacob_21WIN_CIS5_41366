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
    string //num1, num2, num3, num4, num5, num6,
           suit1, suit2, suit3, suit4, suit5, suit6, 
           card1,card2,card3,card4,card5,card6, //Player's Cards
           crib1,crib2, //Cards the Computer Contributes to the Crib 
           select1, //First Card Selected by Player to Put in Crib
           select2; //Second Card Selected by Player to Put in Crib
    const int MAX_SCR=121, //Max Score in a Game of Cribbage
                   HAND=6; //Max Number of Cards in Hand
    char      cardNum; //Number of Cards in a Deck
    unsigned short num1,num2,num3,num4,num5,num6;
            
              
    
    //Initialize Variables
    cardNum=52; //52 Possible Cards to Draw (A,2-10,J,Q,K, then suits)
    
    
    
    
    //Play a Round
    //do {
    //"Shuffle" the Cards
    do{
        num1=rand()%cardNum+1;
        num2=rand()%cardNum+1; 
    }while (num2==num1);
    do {
        num3=rand()%cardNum+1;
    }while (num3==num2||num3==num1);
    do {
        num4=rand()%cardNum+1;
    }while (num4==num3||num4==num2||num4==num1);
    do {
        num5=rand()%cardNum+1;
    }while (num5==num4||num5==num3||num5==num2||num5==num1);
    do {
        num6=rand()%cardNum+1;
    }while (num6==num5||num6==num4||num6==num3||num6==num2||num6==num1);
        //Card 1    
        //Utilize Switch Case
        switch (num1) {
                //Spades
                case 1: card1="AS";break;  case 2: card1="2S"; break;
                case 3: card1="3S";break;  case 4: card1="4S"; break;
                case 5: card1="5S";break;  case 6: card1="6S"; break;
                case 7: card1="7S";break;  case 8: card1="8S"; break;
                case 9: card1="9S";break;  case 10:card1="10S";break;
                case 11:card1="JS";break;  case 12:card1="QS"; break;
                case 13:card1="KS";break; 
                //Hearts
                case 14:card1="AH";break;  case 15:card1="2H"; break;
                case 16:card1="3H";break;  case 17:card1="4H"; break;
                case 18:card1="5H";break;  case 19:card1="6H"; break;
                case 20:card1="7H";break;  case 21:card1="8H"; break;
                case 22:card1="9H";break;  case 23:card1="10H";break;
                case 24:card1="JH";break;  case 25:card1="QH"; break;
                case 26:card1="KH";break;
                //Club
                case 27:card1="AC";break;  case 28:card1="2C"; break;
                case 29:card1="3C";break;  case 30:card1="4C"; break;
                case 31:card1="5C";break;  case 32:card1="6C"; break;
                case 33:card1="7C";break;  case 34:card1="8C"; break;
                case 35:card1="9C";break;  case 36:card1="10C";break;
                case 37:card1="JC";break;  case 38:card1="QC"; break;
                case 39:card1="KC";break;
                //Diamonds
                case 40:card1="AD";break;  case 41:card1="2D"; break;
                case 42:card1="3D";break;  case 43:card1="4D"; break;
                case 44:card1="5D";break;  case 45:card1="6D"; break;
                case 46:card1="7D";break;  case 47:card1="8D"; break;
                case 48:card1="9D";break;  case 49:card1="10D";break;
                case 50:card1="JD";break;  case 51:card1="QD"; break;
                case 52:card1="KD";break;
        }

        //Card 2
        //Utilize Ternary Operators
        card2=(num2==1?"AS":num2==2?"2S":num2==3?"3S":num2==4?"4S":
               num2==5?"5S":num2==6?"6S":num2==7?"7S":num2==8?"8S":
               num2==9?"9S":num2==10?"10S":num2==11?"JS":num2==12?"QS":
               num2==13?"KS"://Spades
               num2==14?"AH":num2==15?"2H":num2==16?"3H":num2==17?"4H":
               num2==18?"5H":num2==19?"6H":num2==20?"7H":num2==21?"H":
               num2==22?"9H":num2==23?"10H":num2==24?"JH":num2==25?"QH":
               num2==26?"KH"://Hearts
               num2==27?"AC":num2==28?"2C":num2==29?"3C":num2==30?"4C":
               num2==31?"5C":num2==32?"6C":num2==33?"7C":num2==34?"8C":
               num2==35?"9C":num2==36?"10C":num2==37?"JC":num2==38?"QC":
               num2==39?"KC"://Clubs
               num2==40?"AD":num2==41?"2D":num2==42?"3D":num2==43?"4D":
               num2==44?"5D":num2==45?"6D":num2==46?"7D":num2==47?"8D":
               num2==48?"9D":num2==49?"10D":num2==50?"JD":num2==51?"QD":
               num2==52?"KD":""); //Diamonds
            
            /*switch (number) {
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
            }*/
    
    //Display Hand
    cout<<"Your Hand"<<endl;
    cout<<card1<<endl;
    cout<<card2<<endl;
    /*cout<<card3<<endl;
    cout<<card4<<endl;
    cout<<card5<<endl;
    cout<<card6<<endl<<endl;*/
    
    /*//Ask for Cards to add to the Crib for the Round
    cout<<"Choose a card to add to the crib"<<endl;
    //Hold the Players Hand for Teaching Purposes
    cout<<"Enter the number or letter, then the suit";
    cout<<" then press ENTER"<<endl<<"Example: AH or 4S"<<endl;
    cin>>select1;
    cout<<endl;

    
    cout<<"Now pick the second card to add to the crib"<<endl;
    cin>>select2;
    cout<<endl;
    
    cout<<select1<<endl<<select2;
    */
    
    
    
    
    //Map Inputs to Outputs -> Process
    //Determine whether or not the Game Continues
    //}while (plyrScr<=MAX_SCR||cmpScr<=MAX_SCR);
    
    //Display Inputs/Outputs
    //char deal=rand()%cardNum+1; cout<<static_cast<int>(deal)<<endl;
        
        
        
    //Exit the Program - Cleanup
    
    return 0;
}

