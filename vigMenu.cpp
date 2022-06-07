/* 
 * File:   vigMenu.cpp
 */

#include <valarray>

#include "vigMenu.h"

void vigMenu::run(){
    running = true;
    while(running){
        menu();
    }
}

void vigMenu::inp(int& choice){
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void vigMenu::menu(){
    int choice = -1;
    cout << "Vigenere Cipher\n\n";
    cout << "To exit the program: 0\n";
    cout << "To encrypt/decrypt text: 1\n";
    inp(choice);
    switch(choice){
        case 0:
            running = false;
            break;
        case 1:
            textMenu();
            break;
        default:
            while(true){
                cout << "Invalid input from user.\nPlease enter 0 to exit or 1 "
                        "to continue.\n";
                inp(choice);
                if(choice >= 0 && choice <= 1){
                    break;
                }
            }
            break;
    }
    choice = -1;
}

void vigMenu::textMenu(){
    bool localRun = true;
    while(localRun){
        int choice = -1;
        cout << "Vigenere Cipher - Text\n\n";
        cout << "To return: 0\n";
        cout << "To encrypt text: 1\n";
        cout << "To decrypt text: 2\n";
        inp(choice);
        switch(choice){
            case 0:
                localRun = false;
                break;
            case 1:
                encDecData(choice);
                break;
            case 2:
                encDecData(choice);
                break;
            default:
                while(true){
                cout << "Invalid input from user.\nPlease enter 0, 1 or 2 "
                        "to continue.\n";
                inp(choice);
                if(choice >= 0 && choice <= 2){
                    break;
                }
            }
            break;
        }
        choice = -1;
    }
}

void vigMenu::encDecData(int choice){
    //Encryption
    if(choice == 1){
        string key;
        string userInp;
        keyInput(key);
        cout << "Enter text to be encrypted: \n";
        getline(cin, userInp);
        cout << "Encrypted text: " << vigenereCipher::encrypt(userInp, key)
             << "\n\n";
    }
    else if(choice == 2){
        string key;
        string userInp;
        keyInput(key);
        cout << "Enter text to be decrypted: \n";
        getline(cin, userInp);
        cout << "Decrypted text: " << vigenereCipher::decrypt(userInp, key)
             << "\n\n";
    }
}

void vigMenu::keyInput(string& key){
    do{
        cout << "Enter a key. (Enter only alpha characters - includes spaces.)";
        cout << endl;
        getline(cin, key);
    }
    while(!vigenereCipher::valid(key));
}