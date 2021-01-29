/* 
 * File: main.cpp
 * Author: Jacob Gower
 * Created on January 25th, 1:58AM
 * Purpose: Perform the Collatz Conjecture Test
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}

int collatz(int n) {
    int i=1;
    while (n>1) {
        if (n%2==0) {
            n=n/2;
        }else {
            n=(n*3)+1;
        }
        i++;
    }
    return i;
}