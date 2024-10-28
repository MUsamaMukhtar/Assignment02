/*
Task 3 :
Write a program in which it takes two numbers from keyboard as input and subtract
larger  number from smaller?
*/

#include <iostream>
using namespace std ;
int main ( ) {
    int num1,num2,result;
    cout << "Program to subtract larger number from smaller number  " << endl ;
    cout << "***************************************";
    cout << "\nEnter Number One : ";
    cin  >> num1 ;
    cout << "Enter Number Two : " ;
    cin  >> num2 ;

    if( num1 > num2 ) {
        result = num1 - num2 ;
        cout << "Result" << result ;             
        } else if (num2 > num1 ) {
        result = num2 - num1 ;
        cout << "Result : " << result ;        
        } else {
        cout << "Both Numbers are equal : " << result ;        
        }
        
        return 0;
}