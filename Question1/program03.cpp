
/*
Task 3: 
Write a program to check whether a triangle is valid or not, when the three angles of the
triangle  are entered through the keyboard.  
Hint: A triangle is valid if the sum of all the three angles is = 180
*/

#include <iostream>

using namespace std ;
int main (){
    double angle1,angle2,angle3;
    cout << "Program to find triangle " << endl ;
    cout << "**********************" << endl ;
    cout << "Enter the first angle : " ;
    cin  >> angle1 ;
    cout << "\nEnter the second angle : " ;
    cin  >> angle2 ;
    cout << "\nEnter the third angle : " ;
    cin  >> angle3 ;
    if (angle1+angle2+angle3 == 180) {
        cout << "\nThis is a valid triangle";
        } else {
        cout << "This is not a valid triangle ";
        }


    return 0 ;
}



