#ifndef CAESAR_H
#define CAESAR_H

#include <string>

std::string Encrypt(std::string cipherText, int key);
std::string Decrypt(std::string cipherText, int key);

#endif
