/*
Task 1: 
Write a program, which takes age as input from user and prints appropriate message
depending  upon the following conditions: 
∙ If age less than 6 and greater than 1 then prints, “What a nice child!” 
∙ If age is between 6 and 9 then prints, “That’s a good age!” 
∙ If age is between 9 and less than 20 then prints, “Ah! In the prime of life” 
∙ If age between 20 and less than 30 then prints, “Watch out, the younger ones are
gaining on  you.” 
∙ More than 30 then it prints, “Well, have fun, and don’t look back.”
*/

#include <iostream>
using  namespace std;
int main (){
    int age ;
    cout << "Program to find age group" << endl ;
    cout << "*****************************" << endl ;
    cout << "Enter your age : " ;
    cin  >> age ;
    if( age < 6 && age > 1){
        cout << "What a nice child!" ;
    } else if ( age > 6 && age < 9){
        cout << "That’s a good age!" ;
    } else if ( age >= 9 && age < 20){
        cout << "Ah! In the prime of life" ;
    } else if ( age >= 20 && age < 30){
        cout << "Watch out, the younger ones are gaining on you." ;
    } else if ( age >= 30){
        cout << "Well, have fun, and don’t look back." ;
    }
    return 0 ;
}