/*
Task 4: 
Write a Program using Nested if-else structure. The program will get a Single Character
from  user and Tell either it is Vowel or Not and it a capital or small letter?
*/

    
#include <iostream>
#include <cctype>

using namespace std;


bool isSuper(char c) {
    return (c >= 'A' && c <= 'Z');
}

int main() {
    char alphabet;
    cout << "Program to check if a character is a vowel and its case" << endl;
    cout << "***************************************" << endl;
    cout << "Enter a character: ";
    cin >> alphabet;

    if (alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U' ||
        alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
        
        if (isSuper(alphabet)) {
            cout << alphabet << " is a vowel and it is a capital letter." << endl;
        } else {
            cout << alphabet << " is a vowel and it is a small letter." << endl;
        }
    } else {
        if (isSuper(alphabet)) {
            cout << alphabet << " is not a vowel and it is a capital letter." << endl;
        } else {
            cout << alphabet << " is not a vowel and it is a small letter." << endl;
        }
    }

    return 0;
}
