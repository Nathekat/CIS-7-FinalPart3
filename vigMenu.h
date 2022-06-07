/* 
 * File:   vigMenu.h
 */

#ifndef VIGMENU_H
#define VIGMENU_H
#include <iostream>
#include <string>
using namespace std;

#include "vigenereCipher.h"

class vigMenu{
    public:
        void run();
    private:
        void inp(int& choice);
        void menu();
        void textMenu();
        void encDecData(int choice);
        void keyInput(string& key);
        bool running = false;
};

#endif /* VIGMENU_H */