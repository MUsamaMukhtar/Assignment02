/*
Task 2: 
Write a program which takes 3 numbers as input then it finds the minimum and
maximum  number and print output as follows:
*/

#include <iostream>
using namespace std ;
int main ( ) {
    int num1,num2,num3;
    cout << "Program to find minimum and maximum " << endl ;
    cout << "***********************";
    cout << "\nEnter Number One : ";
    cin  >> num1 ;
    cout << "Enter Number Two : " ;
    cin  >> num2 ;
    cout << "Enter Number Third : " ;
    cin  >> num3 ;
    if( num1 > num2 && num1 > num3 ) {
        cout << "Maximum Number is : "<< num1 << endl;
        if(num2 > num3 ){
        cout << "Minimun Number is : " << num3 ;             
        } else {
        cout << "Mnimum Number is : " << num2;
        }
    } else if ( num2 > num1 && num2 > num3 ) {
        cout << "Maximum Number is : "<< num2 << endl ;
        if(num1 > num3 ){
        cout << "Minimun Number is : " << num3 ;             
        } else {
        cout << "Mnimum Number is : " << num1;
        }
    } else if ( num3 > num1 && num3 > num2){
        cout << "Maximum Number is : "<< num3 << endl ;
        if(num1 > num2 ){
        cout << "Minimun Number is : " << num2 ;             
        } else {
        cout << "Mnimum Number is : " << num1;
        }
        }
}