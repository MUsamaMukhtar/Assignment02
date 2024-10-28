/*
Task 2: 
Write a program which takes year as an input through the keyboard then it determines
whether  the year is a leap year or not Hint: (The year is evenly divisible by 4 and 400
but not divisible by  100 is said to be leap year. Use the % (modulus) operator).
*/

#include <iostream>

using namespace std ;
int main ( ){
    int year ;
    cout << "Program to find Leap year" << endl ;
    cout << "*****************************" << endl ;
    // Enter year to check whether leap or not
    cout << "Enter the year : " ;
    cin  >> year ;
    //condition
    if ( (year % 400 == 0 ) || (year % 4 == 0 && year % 100 != 0) ){
        cout << "The year is  a leap year" ;
    } else
        cout << "The year is not a leap year" ;

    return 0 ;

}


