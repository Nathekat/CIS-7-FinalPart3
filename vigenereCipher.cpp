/* 
 * File:   vigenereCipher.cpp
 */

#include "vigenereCipher.h"

//return modulus of two integers
int vigenereCipher::numMod(int l, int i){
    return i % l;
}

//return a string converted to all capital letters 
string vigenereCipher::upperStr(string text){
    //initialize string
    string str = "";
    for(int i = 0; i < text.length(); i++){
        char c = text[i];
        //Evaluate text for non alpha characters
        if(isalpha(c)){
            c = toupper(c);
        }
        str.push_back(c);
    }
    //return converted string
    return str;
}

string vigenereCipher::encrypt(string text, string key){
    //initialize string for encryption text
    string encText = "";
    //create/initialize uppCase and key using upperStr function
    string uppCase = upperStr(text);
    key = upperStr(key);
    //ENCRYPT using for loop
    for(int i = 0; i < uppCase.length(); i++){
        if(isalpha(uppCase[i])){
            int c = (((static_cast<int>(uppCase[i]) + 
            static_cast<int>(key[numMod(key.length(), i)])) % 26) + 65) % 91;
            encText.push_back(static_cast<char>(c));
        }
        else
            encText.push_back(uppCase[i]);
    }
    return encText;
}

string vigenereCipher::decrypt(string text, string key){
    //initialize string for decryption text
    string decText = "";
    //create/initialize uppCase and key using upperStr function
    string uppCase = upperStr(text);
    key = upperStr(key);
    //DECRYPT using for loop
    for(int i = 0; i < uppCase.length(); i++){
        if(isalpha(uppCase[i])){
            int c = (((static_cast<int>(uppCase[i]) + 
            static_cast<int>(key[numMod(key.length(), i)] - 26)) % 26) + 65) % 91;
            decText.push_back(static_cast<char>(c));
        }
        else
            decText.push_back(uppCase[i]);
    }
    return decText;
}

bool vigenereCipher::valid(string key){
    //Initialize validity to true
    bool isValid = true;
    //for loop until length is reached - evaluate each char of the key
    for(int i = 0; i < key.length(); i++){
	if(!isalpha(key[i])){
            //if not alpha, validity set false
            isValid = false;
            break;
	}
    }
    return isValid;
}