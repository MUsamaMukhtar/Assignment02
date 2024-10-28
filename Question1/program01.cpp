/*
Write a program which takes two numbers from the keyboard, and determine and
display which  (if either) is the larger of the two numbers.
*/




#include <iostream>

using namespace std ;
int main ( ){
    // Declaration of numbers
   double num1 , num2 ;
   cout << "Program to find Larger number" << endl ;
   cout << "*****************************" << endl ;
   //Enter two numbers` `
   cout << "Enter number one : "  ;
   cin >> num1 ;
   cout << "\nEnter number two : " ;
   cin >> num2 ;
   // condition
   if (num1>num2){
    cout << num1 << " is larger " ;
   } else if (num2>num1){
    cout << num2 << " is larger" ;
   }else {
    cout << "Both numbers are equal " ;
   }


   return 0 ;
}
