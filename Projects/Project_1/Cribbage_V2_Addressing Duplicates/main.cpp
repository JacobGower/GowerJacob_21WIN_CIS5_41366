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
    fstream in,out; //Input and Output for 
    int  plyrScr,   //Score of the Player
         cmpScr;    //Score of the Computer
    string 
           suit,   //Suit to Be Assigned as String
           number, //Number to be Assigned as String
           card1,card2,card3,card4,card5,card6, //Player's Cards
           crib1,crib2,    //Cards Contributed to the Crib 
           select1,        //First Card Selected by Player to Put in Crib
           select2;        //Second Card Selected by Player to Put in Crib
    const int MAX_SCR=121; //Max Score in a Game of Cribbage
    char   cardNum;        //Number of Cards in a Deck
             
    
    unsigned short n1,n2,n3,n4,n5,n6,    //Random Numbers for Player Cards
                   n7,n8,n9,n10,n11,n12, //Random Number for Computer Cards
                   n13; //
            
              
    
    //Initialize Variables
    cardNum=52; //52 Possible Cards to Draw (A,2-10,J,Q,K, then suits)
    
    
    //Play a Round
    //do {
    //"Shuffle" the Cards
    //Generate the First Two Numbers
    do{
        n1=rand()%cardNum+1;
        n2=rand()%cardNum+1; 
    //Make Sure Numbers are not Duplicates    
    }while (n2==n1);
    
        //Card 1    
        //Assign Value Utilizing Switch Case
        switch (n1) {
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
                                 //ClubS
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
        //Assign Value Utilizing Two Switch Cases and String Addition
        //First take the Random Number and Break it into Two Variables
        //(Random Number Mod 13)+1 gives a Number Between 1 and 13 to Test
        unsigned char cValue=(n2%13)+1; //13 Possible Card Values
        //(Random Number Mod 4)+1 gives a Number Between 1 and 4 to Test
        unsigned char  cSuit=(n2%4)+1; //4 Possible Card Suits
        //Test Value 1-13 and Assign
        switch (cValue) {
            case 1: number="A"; break;  case 2: number="2"; break;
            case 3: number="3"; break;  case 4: number="4"; break;
            case 5: number="5"; break;  case 6: number="6"; break;
            case 7: number="7"; break;  case 8: number="8"; break;
            case 9: number="9"; break;  case 10:number="10";break;
            case 11:number="J"; break;  case 12:number="Q"; break;
            case 13:number="K"; break;
        }
        //Test Value 1-4 and Assign
        switch (cSuit) {
            case 1:suit="S";break;  case 2:suit="H";break;
            case 3:suit="C";break;  case 4:suit="D";break;
        }
        //Add Strings to Create Card Value
        card2=number+suit;
        
    //Generate Third Number
    do {
        n3=rand()%cardNum+1;
    //Compare with Previous Numbers and Prevent Duplicates    
    }while (n3==n2||n3==n1);
        //Card 3
        //Assign Value Utilizing If/Else If Statements
                                  //Spades
        if       (n3==1)  {card3="AS";}  else if (n3==2)  {card3="2S";
        }else if (n3==3)  {card3="3S";}  else if (n3==4)  {card3="4S";
        }else if (n3==5)  {card3="5S";}  else if (n3==6)  {card3="6S";
        }else if (n3==7)  {card3="7S";}  else if (n3==8)  {card3="8S";
        }else if (n3==9)  {card3="9S";}  else if (n3==10) {card3="10S";
        }else if (n3==11) {card3="JS";}  else if (n3==12) {card3="QS";
        }else if (n3==13) {card3="KS";
                                  //Hearts
        }else if (n3==14) {card3="AH";}  else if (n3==15) {card3="2H";
        }else if (n3==16) {card3="3H";}  else if (n3==17) {card3="4H";
        }else if (n3==18) {card3="5H";}  else if (n3==19) {card3="6H";
        }else if (n3==20) {card3="7H";}  else if (n3==21) {card3="8H";
        }else if (n3==22) {card3="9H";}  else if (n3==23) {card3="10H";
        }else if (n3==24) {card3="JH";}  else if (n3==25) {card3="QH";
        }else if (n3==26) {card3="KH";
                                  //Clubs
        }else if (n3==27) {card3="AC";}  else if (n3==28) {card3="2C";
        }else if (n3==29) {card3="3C";}  else if (n3==30) {card3="4C";
        }else if (n3==31) {card3="5C";}  else if (n3==32) {card3="6C";
        }else if (n3==33) {card3="7C";}  else if (n3==34) {card3="8C";
        }else if (n3==35) {card3="9C";}  else if (n3==36) {card3="10C";
        }else if (n3==37) {card3="JC";}  else if (n3==38) {card3="QC";
        }else if (n3==39) {card3="KC";
                                  //Diamonds
        }else if (n3==40) {card3="AD";}  else if (n3==41) {card3="2D";
        }else if (n3==42) {card3="3D";}  else if (n3==43) {card3="4D";
        }else if (n3==44) {card3="5D";}  else if (n3==45) {card3="6D";
        }else if (n3==46) {card3="7D";}  else if (n3==47) {card3="8D";
        }else if (n3==48) {card3="9D";}  else if (n3==49) {card3="10D";
        }else if (n3==50) {card3="JD";}  else if (n3==51) {card3="QD";
        }else if (n3==52) {card3="KD";
        }
        
    //Generate Fourth Number
    do {
        n4=rand()%cardNum+1;
    //Compare with Previous Numbers and Prevent Duplicates
    }while (n4==n3||n4==n2||n4==n1);
        //Card 4
        //Assign Value Utilizing Independent If Statements
                                 //Spades
        if  (n4==1)  {card4="AS";}  if (n4==2)  {card4="2S";
        }if (n4==3)  {card4="3S";}  if (n4==4)  {card4="4S";
        }if (n4==5)  {card4="5S";}  if (n4==6)  {card4="6S";
        }if (n4==7)  {card4="7S";}  if (n4==8)  {card4="8S";
        }if (n4==9)  {card4="9S";}  if (n4==10) {card4="10S";
        }if (n4==11) {card4="JS";}  if (n4==12) {card4="QS";
        }if (n4==13) {card4="KS";
                                 //Hearts
        }if (n4==14) {card4="AH";}  if (n4==15) {card4="2H";
        }if (n4==16) {card4="3H";}  if (n4==17) {card4="4H";
        }if (n4==18) {card4="5H";}  if (n4==19) {card4="6H";
        }if (n4==20) {card4="7H";}  if (n4==21) {card4="8H";
        }if (n4==22) {card4="9H";}  if (n4==23) {card4="10H";
        }if (n4==24) {card4="JH";}  if (n4==25) {card4="QH";
        }if (n4==26) {card4="KH";
                                 //Clubs
        }if (n4==27) {card4="AC";}  if (n4==28) {card4="2C";
        }if (n4==29) {card4="3C";}  if (n4==30) {card4="4C";
        }if (n4==31) {card4="5C";}  if (n4==32) {card4="6C";
        }if (n4==33) {card4="7C";}  if (n4==34) {card4="8C";
        }if (n4==35) {card4="9C";}  if (n4==36) {card4="10C";
        }if (n4==37) {card4="JC";}  if (n4==38) {card4="QC";
        }if (n4==39) {card4="KC";
                                 //Diamonds
        }if (n4==40) {card4="AD";}  if (n4==41) {card4="2D";
        }if (n4==42) {card4="3D";}  if (n4==43) {card4="4D";
        }if (n4==44) {card4="5D";}  if (n4==45) {card4="6D";
        }if (n4==46) {card4="7D";}  if (n4==47) {card4="8D";
        }if (n4==48) {card4="9D";}  if (n4==49) {card4="10D";
        }if (n4==50) {card4="JD";}  if (n4==51) {card4="QD";
        }if (n4==52) {card4="KD";
        }
        
    
    //Generate Fifth Number
    do {
        n5=rand()%cardNum+1;
    //Compare with Previous Numbers and Prevent Duplicates    
    }while (n5==n4||n5==n3||n5==n2||n5==n1);
        //Card 5
        //Assign Value Utilizing Ternary Operators
                                 //Spades
        card5=(n5==1 ?"AS":n5==2 ?"2S" :n5==3 ?"3S":n5==4 ?"4S":
               n5==5 ?"5S":n5==6 ?"6S" :n5==7 ?"7S":n5==8 ?"8S":
               n5==9 ?"9S":n5==10?"10S":n5==11?"JS":n5==12?"QS":
               n5==13?"KS":      //Hearts
               n5==14?"AH":n5==15?"2H" :n5==16?"3H":n5==17?"4H":
               n5==18?"5H":n5==19?"6H" :n5==20?"7H":n5==21?"8H":
               n5==22?"9H":n5==23?"10H":n5==24?"JH":n5==25?"QH":
               n5==26?"KH":      //Clubs
               n5==27?"AC":n5==28?"2C" :n5==29?"3C":n5==30?"4C":
               n5==31?"5C":n5==32?"6C" :n5==33?"7C":n5==34?"8C":
               n5==35?"9C":n5==36?"10C":n5==37?"JC":n5==38?"QC":
               n5==39?"KC":      //Diamonds
               n5==40?"AD":n5==41?"2D" :n5==42?"3D":n5==43?"4D":
               n5==44?"5D":n5==45?"6D" :n5==46?"7D":n5==47?"8D":
               n5==48?"9D":n5==49?"10D":n5==50?"JD":n5==51?"QD":"KD");
        
    //Generate Sixth Number
    do {
        n6=rand()%cardNum+1;
    //Compare with Previous Numbers and Prevent Duplicates    
    }while (n6==n5||n6==n4||n6==n3||n6==n2||n6==n1);
        //Card 6
        //Utilize fstream to Assign Value
        
    
    //Display Hand
    cout<<setw(16)<<"Your Hand"<<endl;
    cout<<setw(4)<<card1;
    cout<<setw(4)<<card2;
    cout<<setw(4)<<card3;
    cout<<setw(4)<<card4;
    cout<<setw(4)<<card5<<endl;
  
    cout<<static_cast<int>(n1)<<endl<<endl;
    cout<<static_cast<int>(n2)<<endl<<endl;
    cout<<static_cast<int>(cValue)<<endl<<static_cast<int>(cSuit);
    
    //cout<<card6<<endl<<endl;
    
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
        
        
    in.close();
    out.close();        
    //Exit the Program - Cleanup
    
    return 0;
}

