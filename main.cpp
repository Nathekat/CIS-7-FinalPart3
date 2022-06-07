/*
    Author:  Cody Pfrunder and Natalia Carbajal
    Date:    30 May 2022
    Purpose: Vigenere Cipher Decryption - Encrypt and decrypt user's message
             C++
    Class:   CSC 7 Discrete Structures with Professor Nguyen
 */

//System Libraries
#include <iostream>    //Input/Output Library
#include <string>      //String Library

//User Libraries
#include "vigenereCipher.h"
#include "vigMenu.h"
using namespace vigenereCipher;   //Library Name-space

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    vigMenu menu; //Create object for menu class
    
    //Process, map inputs to outputs
    menu.run();
    
    //Exit stage right
    return 0;
}