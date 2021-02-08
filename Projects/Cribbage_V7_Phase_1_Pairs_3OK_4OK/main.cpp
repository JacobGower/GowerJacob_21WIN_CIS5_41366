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
    unsigned int    plyrScr, //Score of the Player
                    cmpScr,  //Score of the Computer
                    rounds;   //Counter for the Round
    int             rndScr;  //Round Score
    float           avgScr;  //Average Score per round throughout Game
    char            cardNum; //Number of Cards in a Deck 
    unsigned short n1,n2,n3,n4,n5,n6,     //Random Numbers for Player Cards
                   n7,                    //Random Number for Starter Card
                   n8,n9,n10,n11,n12,n13; //Random Numbers for Computer Cards
    string scoreFl, //File to Write Scores to
           crdDeck, //File to Pull Information From
           suit,    //Suit to Be Assigned as String
           number,  //Number to be Assigned as String
           card1,card2,card3,card4,card5,card6, //Player's Cards
           cmpCrd1,cmpCrd2,cmpCrd3,cmpCrd4,     //Computer Cards for Play Phase 
           cStart,       //Starter Card
           crib1,crib2,  //Cards Contributed to the Crib 
           slct1,slct2,  //Cards Selected by Player to Put in Crib
           play1,play2,play3,play4; //Cards Played By Player in Play Phase
    const int  PL_HAND=4,  //Cards in Player's Hand during Play Phase
               CP_HAND=4,  //Cards in Computer's Hand During Play Phase
               MAX_SCR=41; //~1/3 Max Score in a Game of Cribbage
    bool         uGoFrst;  //Determine who goes first in order of Play
    
    
    //Initialize Variables
    plyrScr=cmpScr=avgScr=rounds=0;
    cardNum=52; //52 Possible Cards to Draw (A,2-10,J,Q,K, then suits)
    
    cout<<"Welcome to Cribbage**! (**Terms May Apply)"<<endl;
    cout<<"Remember! The Important numbers are 15 and 31."<<endl;
    cout<<"Ace = 1"<<endl<<"Face Cards = 10"<<endl;
    cout<<"During the Play Phase, play off of your opponents cards";
    cout<<" to get 15 or 31."<<endl;
    cout<<"The Crib is a Chance for extra points for you and your opponent!\n";
    cout<<"So Choose Wisely!\n"<<endl;
    cout<<"*Crib Scoring Not Implemented*"<<endl;
    cout<<"*15 and 31 Rules Not Implemented*"<<endl;
    cout<<setw(13)<<"1 Pair ="<<setw(8)<<"2  Points"<<endl;
    cout<<"3 of a Kind ="<<setw(8)<<"6  Points"<<endl;
    cout<<"4 of a Kind ="<<setw(7)<<"12 Points"<<endl<<endl;
    cout<<"**Not an accurate implementation of Cribbage."<<endl;
    cout<<"This is Approximately 1/3 a Game of Cribbage."<<endl;
    cout<<"Score to win has been Adjusted Accordingly."<<endl;
    cout<<"Pairs, 3 of a Kind, and 4 of a Kind";
    cout<<" the only ways to score for now."<<endl<<endl;
    
    
    //Play a Round
    do {
        //Initialize File Paramaters for Card Generation
        crdDeck="card.dat";
        in.open(crdDeck.c_str(),ios::in);
        //Increment Round
        rounds=rounds+1;    
        //"Shuffle" the Cards
        //Generate the First and Second Numbers
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
                case 9: card1="9S";break;  case 10:card1="TS"; break;
                case 11:card1="JS";break;  case 12:card1="QS"; break;
                case 13:card1="KS";break; 
                                     //Hearts
                case 14:card1="AH";break;  case 15:card1="2H"; break;
                case 16:card1="3H";break;  case 17:card1="4H"; break;
                case 18:card1="5H";break;  case 19:card1="6H"; break;
                case 20:card1="7H";break;  case 21:card1="8H"; break;
                case 22:card1="9H";break;  case 23:card1="TH"; break;
                case 24:card1="JH";break;  case 25:card1="QH"; break;
                case 26:card1="KH";break;
                                     //ClubS
                case 27:card1="AC";break;  case 28:card1="2C"; break;
                case 29:card1="3C";break;  case 30:card1="4C"; break;
                case 31:card1="5C";break;  case 32:card1="6C"; break;
                case 33:card1="7C";break;  case 34:card1="8C"; break;
                case 35:card1="9C";break;  case 36:card1="TC"; break;
                case 37:card1="JC";break;  case 38:card1="QC"; break;
                case 39:card1="KC";break;
                                     //Diamonds
                case 40:card1="AD";break;  case 41:card1="2D"; break;
                case 42:card1="3D";break;  case 43:card1="4D"; break;
                case 44:card1="5D";break;  case 45:card1="6D"; break;
                case 46:card1="7D";break;  case 47:card1="8D"; break;
                case 48:card1="9D";break;  case 49:card1="TD"; break;
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
                case 9: number="9"; break;  case 10:number="T";break;
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
            }else if (n3==9)  {card3="9S";}  else if (n3==10) {card3="TS";
            }else if (n3==11) {card3="JS";}  else if (n3==12) {card3="QS";
            }else if (n3==13) {card3="KS";
                                      //Hearts
            }else if (n3==14) {card3="AH";}  else if (n3==15) {card3="2H";
            }else if (n3==16) {card3="3H";}  else if (n3==17) {card3="4H";
            }else if (n3==18) {card3="5H";}  else if (n3==19) {card3="6H";
            }else if (n3==20) {card3="7H";}  else if (n3==21) {card3="8H";
            }else if (n3==22) {card3="9H";}  else if (n3==23) {card3="TH";
            }else if (n3==24) {card3="JH";}  else if (n3==25) {card3="QH";
            }else if (n3==26) {card3="KH";
                                      //Clubs
            }else if (n3==27) {card3="AC";}  else if (n3==28) {card3="2C";
            }else if (n3==29) {card3="3C";}  else if (n3==30) {card3="4C";
            }else if (n3==31) {card3="5C";}  else if (n3==32) {card3="6C";
            }else if (n3==33) {card3="7C";}  else if (n3==34) {card3="8C";
            }else if (n3==35) {card3="9C";}  else if (n3==36) {card3="TC";
            }else if (n3==37) {card3="JC";}  else if (n3==38) {card3="QC";
            }else if (n3==39) {card3="KC";
                                      //Diamonds
            }else if (n3==40) {card3="AD";}  else if (n3==41) {card3="2D";
            }else if (n3==42) {card3="3D";}  else if (n3==43) {card3="4D";
            }else if (n3==44) {card3="5D";}  else if (n3==45) {card3="6D";
            }else if (n3==46) {card3="7D";}  else if (n3==47) {card3="8D";
            }else if (n3==48) {card3="9D";}  else if (n3==49) {card3="TD";
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
            }if (n4==9)  {card4="9S";}  if (n4==10) {card4="TS";
            }if (n4==11) {card4="JS";}  if (n4==12) {card4="QS";
            }if (n4==13) {card4="KS";
                                     //Hearts
            }if (n4==14) {card4="AH";}  if (n4==15) {card4="2H";
            }if (n4==16) {card4="3H";}  if (n4==17) {card4="4H";
            }if (n4==18) {card4="5H";}  if (n4==19) {card4="6H";
            }if (n4==20) {card4="7H";}  if (n4==21) {card4="8H";
            }if (n4==22) {card4="9H";}  if (n4==23) {card4="TH";
            }if (n4==24) {card4="JH";}  if (n4==25) {card4="QH";
            }if (n4==26) {card4="KH";
                                     //Clubs
            }if (n4==27) {card4="AC";}  if (n4==28) {card4="2C";
            }if (n4==29) {card4="3C";}  if (n4==30) {card4="4C";
            }if (n4==31) {card4="5C";}  if (n4==32) {card4="6C";
            }if (n4==33) {card4="7C";}  if (n4==34) {card4="8C";
            }if (n4==35) {card4="9C";}  if (n4==36) {card4="TC";
            }if (n4==37) {card4="JC";}  if (n4==38) {card4="QC";
            }if (n4==39) {card4="KC";
                                     //Diamonds
            }if (n4==40) {card4="AD";}  if (n4==41) {card4="2D";
            }if (n4==42) {card4="3D";}  if (n4==43) {card4="4D";
            }if (n4==44) {card4="5D";}  if (n4==45) {card4="6D";
            }if (n4==46) {card4="7D";}  if (n4==47) {card4="8D";
            }if (n4==48) {card4="9D";}  if (n4==49) {card4="TD";
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
                   n5==9 ?"9S":n5==10?"TS" :n5==11?"JS":n5==12?"QS":
                   n5==13?"KS":      //Hearts
                   n5==14?"AH":n5==15?"2H" :n5==16?"3H":n5==17?"4H":
                   n5==18?"5H":n5==19?"6H" :n5==20?"7H":n5==21?"8H":
                   n5==22?"9H":n5==23?"TH" :n5==24?"JH":n5==25?"QH":
                   n5==26?"KH":      //Clubs
                   n5==27?"AC":n5==28?"2C" :n5==29?"3C":n5==30?"4C":
                   n5==31?"5C":n5==32?"6C" :n5==33?"7C":n5==34?"8C":
                   n5==35?"9C":n5==36?"TC" :n5==37?"JC":n5==38?"QC":
                   n5==39?"KC":      //Diamonds
                   n5==40?"AD":n5==41?"2D" :n5==42?"3D":n5==43?"4D":
                   n5==44?"5D":n5==45?"6D" :n5==46?"7D":n5==47?"8D":
                   n5==48?"9D":n5==49?"TD" :n5==50?"JD":n5==51?"QD":"KD");

        //Generate the Rest of the Cards at once to Reduce Code    
            //Generate Sixth Number
        do {
            n6=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n6==n5||n6==n4||n6==n3||n6==n2||n6==n1);    
            //Generate Seventh Number for Starter Card
        do {
            n7=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n7==n6||n7==n5||n7==n4||n7==n3||n7==n2||n7==n1);

            //Generate Opponent's hand
        do {
            n8=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n8==n7||n8==n6||n8==n5||n8==n4||n8==n3||n8==n2||n8==n1);
        do {
            n9=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n9==n8||n9==n7||n9==n6||n9==n5||n9==n4||n9==n3||n9==n2||n9==n1);
        do {
            n10=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n10==n9||n10==n8||n10==n7||n10==n6||n10==n5
                ||n10==n4||n10==n3||n10==n2||n10==n1);
        do {
            n11=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n11==n10||n11==n9||n11==n8||n11==n7||n11==n6
                ||n11==n5||n11==n4||n11==n3||n11==n2||n11==n1);
        do {
            n12=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n12==n11||n12==n10||n12==n9||n12==n8||n12==n7
                ||n12==n6||n12==n5||n12==n4||n12==n3||n12==n2||n12==n1);
        do {
            n13=rand()%cardNum+1;
        //Compare with Previous Numbers and Prevent Duplicates    
        }while (n13==n12||n13==n11||n13==n10||n13==n9||n13==n8
                ||n13==n7||n13==n6||n13==n5||n13==n4||n13==n3||n13==n2||n13==n1);
            //Cards 6 Through 13 for the Rest of the Round
            //Utilize fstream to Assign Value
            string cardIn; //
            for (int card=1;card<=cardNum;card++) {
                //Read in Value from file to cardIn
                in>>cardIn;
                if (n6==card)  card6=cardIn;   //Last Card in Player's Hand
                if (n7==card)  cStart=cardIn;  //Starter Card for the Round
                if (n8==card)  cmpCrd1=cardIn; //First Card for Computer
                if (n9==card)  cmpCrd2=cardIn; //Second Card for Computer
                if (n10==card) cmpCrd3=cardIn; //Third Card for Computer
                if (n11==card) cmpCrd4=cardIn; //Fourth Card for Computer
                if (n12==card) crib1=cardIn;   //First Card for the Computer Crib
                if (n13==card) crib2=cardIn;   //Second Card for the Computer Crib
        }

        do {
            do{
                //Display Hand
                cout<<setw(22)<<"You've been dealt:"<<endl;
                cout<<setw(4)<<card1;
                cout<<setw(4)<<card2;
                cout<<setw(4)<<card3;
                cout<<setw(4)<<card4;
                cout<<setw(4)<<card5;
                cout<<setw(4)<<card6<<endl<<endl;

                //Ask for Cards to add to the Crib for the Round
                cout<<"Choose two cards to throw to the crib"<<endl;
                //Hold the Players Hand for Teaching Purposes
                cout<<"Enter the number or letter, then the suit for your cards";
                cout<<" then press ENTER"<<endl<<"Example entry: AH 4S"<<endl;
                cin>>setw(2)>>slct1;
                cout<<endl;
                //Make Input consistent with Recorded Card Values
                //Break Up String Entries and Cast to Upper Case
                slct1[0]=toupper(slct1[0]); slct1[1]=toupper(slct1[1]);
                //Test to see if Input is Valid
                //Custom Message for Invalid Input
                if (slct1!=card1&&slct1!=card2&&slct1!=card3&&
                    slct1!=card4&&slct1!=card5&&slct1!=card6){
                    cout<<"You Have to put a card in!"<<endl<<endl;
                }
            //If Input is Invalid, Restart Loop    
            }while(slct1!=card1&&slct1!=card2&&slct1!=card3&&
                   slct1!=card4&&slct1!=card5&&slct1!=card6);

            cin>>setw(2)>>slct2;
            cout<<endl;
            //Make Input consistent with Recorded Card Values
            //Break Up String Entries and Cast to Upper Case
            slct2[0]=toupper(slct2[0]); slct2[1]=toupper(slct2[1]);

            //Test to see if Input is Valid
            //Custom Message for Invalid Input  
            if (slct2!=card1&&slct2!=card2&&slct2!=card3&&
                slct2!=card4&&slct2!=card5&&slct2!=card6||slct2==slct1){
                cout<<"Hey! Quit hiding cards up your sleeve!"<<endl<<endl;
            }
        //If Input is Invalid, Restart Loop
        }while(slct2!=card1&&slct2!=card2&&slct2!=card3&&
               slct2!=card4&&slct2!=card5&&slct2!=card6||slct2==slct1);

        //Display Selections to the Crib
        cout<<setw(4)<<slct1<<endl;
        cout<<setw(4)<<slct2<<endl<<endl;

        //Display Hand without Crib Selection and Officially Begin Round
        //If Cards One and Two are Thrown into the Crib
        if ((slct1==card1&&slct2==card2)||(slct1==card2&&slct2==card1)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card3<<setw(4)<<card4;
                cout<<setw(4)<<card5<<setw(4)<<card6<<endl<<endl;
        //If Cards One and Three are Thrown into the Crib
        }if ((slct1==card1&&slct2==card3)||(slct1==card3&&slct2==card1)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card2<<setw(4)<<card4;
                cout<<setw(4)<<card5<<setw(4)<<card6<<endl<<endl;
        //If Cards One and Four are Thrown into the Crib
        }if ((slct1==card1&&slct2==card4)||(slct1==card4&&slct2==card1)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card2<<setw(4)<<card3;
                cout<<setw(4)<<card5<<setw(4)<<card6<<endl<<endl;
        //If Cards One and Five are Thrown into the Crib
        }if ((slct1==card1&&slct2==card5)||(slct1==card5&&slct2==card1)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card2<<setw(4)<<card3;
                cout<<setw(4)<<card4<<setw(4)<<card6<<endl<<endl;
        //If Cards One and Six are Thrown into the Crib
        }if ((slct1==card1&&slct2==card6)||(slct1==card6&&slct2==card1)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card2<<setw(4)<<card3;
                cout<<setw(4)<<card4<<setw(4)<<card5<<endl<<endl;
        //If Cards Two and Three are Thrown into the Crib
        }if ((slct1==card2&&slct2==card3)||(slct1==card3&&slct2==card2)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card4;
                cout<<setw(4)<<card5<<setw(4)<<card6<<endl<<endl;
        //If Cards Two and Four are Thrown into the Crib
        }if ((slct1==card2&&slct2==card4)||(slct1==card4&&slct2==card2)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card3;
                cout<<setw(4)<<card5<<setw(4)<<card6<<endl<<endl;
        //If Cards Two and Five are Thrown into the Crib
        }if ((slct1==card2&&slct2==card5)||(slct2==card5&&slct1==card2)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card3;
                cout<<setw(4)<<card4<<setw(4)<<card6<<endl<<endl;
        //If Cards Two and Six are Thrown into the Crib
        }if ((slct1==card2&&slct2==card6)||(slct1==card6&&slct2==card2)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card3;
                cout<<setw(4)<<card4<<setw(4)<<card5<<endl<<endl;
        //If Cards Three and Four are Thrown into the Crib
        }if ((slct1==card3&&slct2==card4)||(slct1==card4&&slct2==card3)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card2;
                cout<<setw(4)<<card5<<setw(4)<<card6<<endl<<endl;
        //If Cards Three and Five are Thrown into the Crib
        }if ((slct1==card3&&slct2==card5)||(slct1==card5&&slct2==card3)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card2;
                cout<<setw(4)<<card4<<setw(4)<<card6<<endl<<endl;
        //If Cards Three and Six are Thrown into the Crib
        }if ((slct1==card3&&slct2==card6)||(slct1==card6&&slct2==card3)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card2;
                cout<<setw(4)<<card4<<setw(4)<<card5<<endl<<endl;
        //If Cards Four and Five are Thrown into the Crib        
        }if ((slct1==card4&&slct2==card5)||(slct1==card5&&slct2==card4)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card2;
                cout<<setw(4)<<card3<<setw(4)<<card6<<endl<<endl;
        //If Cards Four and Six are Thrown into the Crib                
        }if ((slct1==card4&&slct2==card6)||(slct1==card6&&slct2==card4)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card2;
                cout<<setw(4)<<card3<<setw(4)<<card5<<endl<<endl;
        //If Cards Five and Six are Thrown into the Crib                    
        }if ((slct1==card5&&slct2==card6)||(slct1==card6&&slct2==card5)) {
                cout<<setw(14)<<"Your Hand:"<<endl;
                cout<<setw(4)<<card1<<setw(4)<<card2;
                cout<<setw(4)<<card3<<setw(4)<<card4<<endl<<endl;
        }



        cout<<setw(16)<<"Starter Card:"<<endl;
        cout<<setw(9)<<cStart<<endl;
        
        //Modulus round Number by 2 to Indicate if True or False
        //round%2 will equal either 0 or 1
        uGoFrst=rounds%2;
        rndScr=0;
        
        //Pass Boolean Value into Switch Case
        switch (uGoFrst) {
            //If uGoFirst=1 (or anything but 0), that is equivalent to "true"
            case true: {
                cout<<"You Go First:"<<endl;
                for (unsigned short myTurn=1;myTurn<=PL_HAND;myTurn++){
                    cout<<"Your Turn"<<endl;
                    cout<<"Play a Card from your Hand:"<<endl;
                    switch (myTurn) {
                        case 1: {
                            //Each Case Starts With A Loop for Input Validation
                            do{//Get Input for Round
                                cin>>setw(2)>>play1;
                                play1[0]=toupper(play1[0]); 
                                play1[1]=toupper(play1[1]);
                                //Display Input after Converting to uppercase
                                cout<<play1<<endl;
                                //Message For Invalid Input
                                if (play1!=card1&&play1!=card2
                                    &&play1!=card3&&play1!=card4&&play1!=card5
                                    &&play1!=card6||play1==slct1||play1==slct2){
                                    cout<<"Come on! Play fair."<<endl;
                                }
                            //Check if Card is in Hand or Already been Played
                            }while (play1!=card1&&play1!=card2
                                    &&play1!=card3&&play1!=card4&&play1!=card5
                                    &&play1!=card6||play1==slct1||play1==slct2);
                            //Award Points for Play
                            //Give 2 Points Pair
                            if (play1[0]==cStart[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }case 2: {
                            do {//Get Input for Round
                                cin>>setw(2)>>play2;
                                play2[0]=toupper(play2[0]); 
                                play2[1]=toupper(play2[1]);
                                //Display Input after Converting to uppercase
                                cout<<play2<<endl;
                                //Message for Invalid Input
                                if (play2!=card1&&play2!=card2&&play2!=card3
                                    &&play2!=card4&&play2!=card5&&play2!=card6
                                    ||play2==slct1||play2==slct2||play2==play1){
                                    cout<<"Is that even a real card?"<<endl;
                                }
                            //Check if Card is in Hand or has Already been Played    
                            }while (play2!=card1&&play2!=card2&&play2!=card3
                                    &&play2!=card4&&play2!=card5&&play2!=card6
                                    ||play2==slct1||play2==slct2||play2==play1);
                            //Award Points for Play
                            //Give 12 Points for 4 of a Kind
                            if (play2[0]==cmpCrd1[0]
                                &&cmpCrd1[0]==play1[0]
                                &&play1[0]==cStart[0]){
                                plyrScr+=12;
                                cout<<"12 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 6 Points for 3 of a Kind
                            else if (play2[0]==cmpCrd1[0]
                                     &&cmpCrd1[0]==play1[0]){
                                plyrScr+=6;
                                cout<<"6 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (play3[0]==cmpCrd2[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }case 3: {
                            do {//Get Input for Round
                                cin>>setw(2)>>play3;
                                play3[0]=toupper(play3[0]); 
                                play3[1]=toupper(play3[1]);
                                //Display Input after Converting to uppercase
                                cout<<play3<<endl;
                                //Message for Invalid Input
                                if (play3!=card1&&play3!=card2&&play3!=card3
                                    &&play3!=card4&&play3!=card5&&play3!=card6
                                    ||play3==slct1||play3==slct2||play3==play2
                                    ||play3==play1) {
                                    cout<<"You must be some kind of ";
                                    cout<<"magician or something."<<endl;
                                }
                            //Check if Card is in Hand or Already been Played
                            }while (play3!=card1&&play3!=card2&&play3!=card3
                                    &&play3!=card4&&play3!=card5&&play3!=card6
                                    ||play3==slct1||play3==slct2||play3==play2
                                    ||play3==play1);
                            //Award Points for Play
                            //Give 12 Points for 4 of a Kind
                            if (play3[0]==cmpCrd2[0]
                                &&cmpCrd2[0]==play2[0]
                                &&play2[0]==cmpCrd1[0]){
                                plyrScr+=12;
                                cout<<"12 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 6 Points for 3 of a Kind
                            else if (play3[0]==cmpCrd2[0]
                                     &&cmpCrd2[0]==play2[0]){
                                plyrScr+=6;
                                cout<<"6 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (play3[0]==cmpCrd2[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }case 4: {
                            do {//Get Input for Round
                                cin>>setw(2)>>play4;
                                play4[0]=toupper(play4[0]); 
                                play4[1]=toupper(play4[1]);
                                //Display Input after Converting to uppercase
                                cout<<play4<<endl;
                                //Message for Invalid Input
                                if (play4!=card1&&play4!=card2&&play4!=card3
                                    &&play4!=card4&&play4!=card5&&play4!=card6
                                    ||play4==slct1||play4==slct2||play4==play3
                                    ||play4==play2||play4==play1) {
                                    cout<<"This is getting old."<<endl;
                                }
                            //Check if Card is in Hand or Already been Played
                            }while (play4!=card1&&play4!=card2&&play4!=card3
                                    &&play4!=card4&&play4!=card5&&play4!=card6
                                    ||play4==slct1||play4==slct2||play4==play3
                                    ||play4==play2||play4==play1);
                            //Award Points for Play
                            //Give 12 Points for 4 of a Kind
                            if (play4[0]==cmpCrd3[0]
                                &&cmpCrd3[0]==play3[0]
                                &&play3[0]==cmpCrd2[0]){
                                plyrScr+=12;
                                cout<<"12 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 6 Points for 3 of a Kind
                            else if (play4[0]==cmpCrd3[0]
                                     &&cmpCrd3[0]==play3[0]){
                                plyrScr+=6;
                                cout<<"6 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (play4[0]==cmpCrd3[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }
                    }
                    //Nothing to Check here, just Output the Cards generated
                    //So the player can Play against them
                    //This Game is against pure Chance
                    cout<<"Computer's Turn"<<endl;
                    switch (myTurn) {
                        case 1: {
                            cout<<cmpCrd1<<endl;
                            //Give 6 Points for 3 of a Kind
                            if (cmpCrd1[0]==play1[0]
                                &&play1[0]==cStart[0]){
                                cmpScr+=6;
                                cout<<"6 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (cmpCrd1[0]==play1[0]) {
                                cmpScr+=2;
                                cout<<"2 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            }
                            break;
                        }case 2: {
                            cout<<cmpCrd2<<endl;
                            cout<<cmpCrd3<<endl;
                            //Give 12 Points for 4 of a Kind
                            if (cmpCrd2[0]==play2[0]
                               &&play2[0]==cmpCrd1[0]
                               &&cmpCrd1[0]==play1[0]){
                               cmpScr+=12;
                               cout<<"12 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            //Give 6 Points for 3 of a Kind
                            }else if (cmpCrd2[0]==play2[0]
                                      &&play2[0]==cmpCrd1[0]){
                                cmpScr+=6;
                                cout<<"6 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (cmpCrd2[0]==play2[0]) {
                                cmpScr+=2;
                            }
                            break;
                        }case 3: {
                            cout<<cmpCrd3<<endl;
                            //Give 12 Points for 4 of a Kind
                            if (cmpCrd3[0]==play3[0]
                               &&play3[0]==cmpCrd2[0]
                               &&cmpCrd2[0]==play2[0]){
                               cmpScr+=12;
                               cout<<"12 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            //Give 6 Points for 3 of a Kind
                            }else if (cmpCrd3[0]==play3[0]
                                      &&play3[0]==cmpCrd2[0]){
                                cmpScr+=6;
                                cout<<"6 Points! The computer now has ";
                                cout<<plyrScr<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (cmpCrd3[0]==play3[0]) {
                                cmpScr+=2;
                                cout<<"2 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            }
                            break;
                        }case 4: {
                            cout<<cmpCrd4<<endl;
                            //Give 12 Points for 4 of a Kind
                            if (cmpCrd4[0]==play4[0]
                               &&play4[0]==cmpCrd3[0]
                               &&cmpCrd3[0]==play3[0]){
                                cmpScr+=12;
                                cout<<"12 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            //Give 6 Points for 3 of a Kind
                            }else if (cmpCrd4[0]==play4[0]
                                      &&play4[0]==cmpCrd3[0]){
                                cmpScr+=6;
                                cout<<"6 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (cmpCrd4[0]==play4[0]) {
                                cmpScr+=2;
                                cout<<"2 Points! The computer now has ";
                                cout<<cmpScr<<" Points"<<endl;
                            }
                            break;
                        }
                    }

                }
                //Break from True Case Switch Statement
                break;
            //If uGoFirst=0, that is equivalent to "false"
            }case false: {
                    //Nothing to Check here, just Output the Cards generated
                    //So the player can Play against them
                    //This Game is against pure Chance
                    cout<<"Computer Goes First"<<endl;
                    for (unsigned short yrTurn=CP_HAND;yrTurn>=1;yrTurn--){
                        cout<<"Computer's Turn:"<<endl;
                      //The Switch Case Counts Down Because of the Decrementing
                        switch (yrTurn) {
                            case 4:  {
                                cout<<cmpCrd1<<endl;
                                if (cmpCrd1[0]==cStart[0]) {
                                    cmpScr+=2;
                                    cout<<"2 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                }
                                break;
                            }case 3: {
                                cout<<cmpCrd2<<endl;
                                //Give 12 Points for 4 of a Kind
                                if (cmpCrd2[0]==play1[0]
                                    &&play1[0]==cmpCrd1[0]
                                    &&cmpCrd1[0]==cStart[0]){
                                    cmpScr+=12;
                                    cout<<"12 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                //Give 6 Points for 3 of a Kind
                                }else if (cmpCrd2[0]==play1[0]
                                          &&play1[0]==cmpCrd1[0]){
                                    cmpScr+=6;
                                    cout<<"6 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                }//Give 2 Points for a Pair
                                else if (cmpCrd2[0]==play1[0]) {
                                    cmpScr+=2;
                                    cout<<"2 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                }
                                break;
                            }case 2: {
                                cout<<cmpCrd3<<endl;
                                //Give 12 Points for 4 of a Kind
                                if (cmpCrd3[0]==play2[0]
                                    &&play2[0]==cmpCrd2[0]
                                    &&cmpCrd2[0]==play1[0]){
                                    cmpScr+=12;
                                    cout<<"12 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                //Give 6 Points for 3 of a Kind
                                }else if (cmpCrd3[0]==play2[0]
                                          &&play2[0]==cmpCrd2[0]){
                                    cmpScr+=6;
                                    cout<<"6 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                }//Give 2 Points for a Pair
                                else if (cmpCrd3[0]==play2[0]) {
                                    cmpScr+=2;
                                    cout<<"2 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                }
                                break;
                            }case 1: {
                                cout<<cmpCrd4<<endl;
                                //Give 12 Points for 4 of a Kind
                                if (cmpCrd4[0]==play3[0]
                                    &&play3[0]==cmpCrd3[0]
                                    &&cmpCrd3[0]==play2[0]){
                                    cmpScr+=12;
                                    cout<<"6 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                //Give 6 Points for 3 of a Kind
                                }else if (cmpCrd4[0]==play3[0]
                                          &&play3[0]==cmpCrd3[0]){
                                    cmpScr+=6;
                                    cout<<"6 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                }//Give 2 Points for a Pair
                                else if (cmpCrd4[0]==play3[0]) {
                                    cmpScr+=2;
                                    cout<<"6 Points! The computer now has ";
                                    cout<<cmpScr<<" Points"<<endl;
                                }
                                break;
                            }
                        }
                    cout<<"Your Turn:"<<endl;
                    cout<<"Play a Card from your Hand:"<<endl;
                    switch (yrTurn) {
                        case 4: {
                            do {//Get Input for Round
                                cin>>setw(2)>>play1;
                                play1[0]=toupper(play1[0]); 
                                play1[1]=toupper(play1[1]);
                                //Display Input after Converting to uppercase
                                cout<<play1<<endl;
                                //Message for Invalid Input
                                if (play1!=card1&&play1!=card2
                                    &&play1!=card3&&play1!=card4&&play1!=card5
                                    &&play1!=card6||play1==slct1||play1==slct2){
                                    cout<<"You must think I was born ";
                                    cout<<"yesterday. "<<endl;
                                }
                            //Check if Card is in Hand or Already been Played
                            }while (play1!=card1&&play1!=card2
                                    &&play1!=card3&&play1!=card4&&play1!=card5
                                    &&play1!=card6||play1==slct1||play1==slct2);
                            //Award Points for Play
                            //Give 6 Points for 3 of a Kind
                            if (play1[0]==cmpCrd1[0]
                                &&cmpCrd1[0]==cStart[0]){
                                plyrScr+=6;
                                cout<<"6 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (play1[0]==cmpCrd1[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }case 3: {
                            do {//Get Input for Round
                                cin>>setw(2)>>play2;
                                play2[0]=toupper(play2[0]); 
                                play2[1]=toupper(play2[1]);
                                //Display Input after Converting to uppercase
                                cout<<play2<<endl;
                                //Message for Invalid Input
                                if(play2!=card1&&play2!=card2&&play2!=card3
                                   &&play2!=card4&&play2!=card5&&play2!=card6
                                   ||play2==slct1||play2==slct2||play2==play1){
                                    cout<<"Where are you getting these";
                                    cout<<" cards from?"<<endl;
                                }
                            //Check if Card is in Hand or Already been Played
                            }while (play2!=card1&&play2!=card2&&play2!=card3
                                    &&play2!=card4&&play2!=card5&&play2!=card6
                                    ||play2==slct1||play2==slct2||play2==play1);
                            //Award Points for Play
                            //Give 12 Points for 4 of a Kind
                            if (play2[0]==cmpCrd2[0]
                                &&cmpCrd2[0]==play1[0]
                                &&play1[0]==cmpCrd1[0]){
                                plyrScr+=12;
                                cout<<"12 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 6 Points for 3 of a Kind
                            else if (play2[0]==cmpCrd2[0]
                                     &&cmpCrd2[0]==play1[0]){
                                plyrScr+=6;
                                cout<<"6 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (play2[0]==cmpCrd2[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }case 2: {
                            do {//Get Input for Round
                                cin>>setw(2)>>play3;
                                play3[0]=toupper(play3[0]); 
                                play3[1]=toupper(play3[1]);
                                //Display Input after Converting to uppercase
                                cout<<play3<<endl;
                                //Message for Invalid Input
                                if (play3!=card1&&play3!=card2&&play3!=card3
                                    &&play3!=card4&&play3!=card5&&play3!=card6
                                    ||play3==slct1||play3==slct2||play3==play2
                                    ||play3==play1){
                                    cout<<"Nobody likes a cheater."<<endl;
                                }
                            //Check if Card is in Hand or Already been Played
                            }while (play3!=card1&&play3!=card2&&play3!=card3
                                    &&play3!=card4&&play3!=card5&&play3!=card6
                                    ||play3==slct1||play3==slct2||play3==play2
                                    ||play3==play1);
                            //Award Points for Play
                            //Give 12 Points for 4 of a Kind
                            if (play3[0]==cmpCrd3[0]
                                &&cmpCrd3[0]==play2[0]
                                &&play2[0]==cmpCrd1[0]){
                                plyrScr+=12;
                                cout<<"12 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 6 Points for 3 of a Kind
                            else if (play3[0]==cmpCrd3[0]
                                     &&cmpCrd3[0]==play2[0]){
                                plyrScr+=6;
                                cout<<"6 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (play3[0]==cmpCrd3[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }case 1: {
                            do {//Get Input for Round
                                //Input for Play
                                cin>>setw(2)>>play4;
                                play4[0]=toupper(play4[0]); 
                                play4[1]=toupper(play4[1]);
                                //Display Input after Converting to uppercase
                                cout<<play4<<endl;
                                //Message for Invalid Input
                                if (play4!=card1&&play4!=card2&&play4!=card3
                                    &&play4!=card4&&play4!=card5&&play4!=card6
                                    ||play4==slct1||play4==slct2||play4==play3
                                    ||play4==play2||play4==play1){
                                    cout<<"Work with me, here."<<endl;
                                }
                            //Check if Card is in Hand or Already been Played
                            }while (play4!=card1&&play4!=card2&&play4!=card3
                                    &&play4!=card4&&play4!=card5&&play4!=card6
                                    ||play4==slct1||play4==slct2||play4==play3
                                    ||play4==play2||play4==play1);
                            //Award Points for Play
                            //Give 12 Points for 4 of a Kind
                            if (play4[0]==cmpCrd4[0]
                                &&cmpCrd4[0]==play3[0]
                                &&play3[0]==cmpCrd3[0]){
                                plyrScr+=12;
                                cout<<"12 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 6 Points for 3 of a Kind
                            else if (play4[0]==cmpCrd4[0]
                                     &&cmpCrd4[0]==play3[0]){
                                plyrScr+=6;
                                cout<<"6 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }//Give 2 Points for a Pair
                            else if (play4[0]==cmpCrd4[0]) {
                                plyrScr+=2;
                                cout<<"2 Points! You now have "<<plyrScr;
                                cout<<" Points"<<endl;
                            }
                            break;
                        }
                    }
                }
            //Break from False Case Switch Statement        
            break;
            }
               
        }
    plyrScr+=50    
    //Determine whether or not the Game Continues
    in.close();    
    }while (plyrScr<MAX_SCR&&cmpScr<MAX_SCR);
    
    //if the Player Wins
    if (plyrScr>cmpScr) {
        cout<<"Congratulations! You Won!"<<endl;
    }//If the Computer Wins
    else if (cmpScr>plyrScr) {
        cout<<"Hey, better luck next time, right?"<<endl;
    }//If there is a tie
    else {
        cout<<"What are the odds of that?    Rematch?"<<endl;
    }
    
    avgScr=static_cast<float>(plyrScr)/static_cast<float>(rounds);
    avgScr=round(avgScr);
    cout<<"You Scored About "<<avgScr<<" Points per Round!"<<endl;
    avgScr=static_cast<float>(plyrScr)/static_cast<float>(rounds);
    cout<<"Or "<<fixed<<setprecision(2)<<avgScr<<" if you like decimals."<<endl;
    
    //Initialize File Paramaters for Card Generation
    scoreFl="Score.dat";
    out.open(scoreFl.c_str(),ios::out);
    //Write Scores to File for Storage
    out<<plyrScr<<endl;
    
    
    out.close();        
    //Exit the Program - Cleanup
    
    return 0;
}

