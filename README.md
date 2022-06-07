# CIS-7-FinalPart3
Project by Team Rocket AKA Natalia Carbajal and Cody Pfrunder
The solution created through our program allows a user to first decide if they would like to
encrypt or decrypt a message, or exit the program. Once a choice is made, the user enters a
menu to where they decide on encrypting or decrypting. The user then provides a message to
be encrypted or decrypted, and also includes a key used to shift around letters. The letters are
shifted through two equations or algorithms based on whether they chose to encrypt or decrypt.
To encrypt, the algorithm used in our encrypt function of the vigenereCipher.cpp class is,
(((static_cast<int>(uppCase[i]) + static_cast<int>(key[numMod(key.length(), i)])) % 26) + 65) %
91;
