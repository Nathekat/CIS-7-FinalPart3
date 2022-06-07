/* 
 * File:   vigenereCipher.h
 */

#ifndef VIGENERECIPHER_H
#define VIGENERECIPHER_H
#include <string>
using namespace std;

//namespace to group functions
namespace vigenereCipher{
    int numMod(int, int);    //Return modulus of two integers
    
    string upperStr(string); //Return string converted all upper case therefore
                             //no encryption to non alpha chars
    
    string encrypt(string, string); //Vigenere cipher to encrypt - string return
                                    //all capital letters
    
    string decrypt(string, string); //Vigenere cipher to decrypt - string return
                                    //all capital letters 
    
    bool valid(string key); //Boolean check for valid key
}

#endif /* VIGENERECIPHER_H */

