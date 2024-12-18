#include <iostream>
#include <string>
#include "Ciphers/Caesar/caeser.h"
//#include "caesar.h"
using namespace std;

int main(){
    string text;
    int choice, key;

    cout << "Please input a number for the respective choice\n1. Encrypt\n2. Decrypt\n";
    cin >> choice;
    cin.ignore();

    switch(choice){
        case 1:     
            cout << "Please enter text to encrypt: ";
            getline(cin, text); 

            cout << "Please enter shift value: ";
            cin >> key;

            cout << "Encrypted Text: " << Encrypt(text, key) << endl;
            break;
        case 2:
            cout << "Please enter text to decrypt: ";
            getline(cin, text); 

            cout << "Please enter shift value: ";
            cin >> key;

            cout << "Decrypted Text: " << Decrypt(text, key) << endl;
            break;
    }

    return 0;
}
