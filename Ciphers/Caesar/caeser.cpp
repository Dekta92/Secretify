#include "caeser.h" 
#include <string>

std::string Encrypt(std::string text, int key){
    int length = text.length();
    int placeholder;

    for(int i = 0; i < length; i++){
        placeholder = (int)text[i];
        if (placeholder < 123 && placeholder > 96){
            placeholder += key;
            if (placeholder > 122){
                placeholder -= 26;
            }
        }
        if (placeholder < 90 && placeholder > 64){
            placeholder += key;
            if (placeholder > 122){
                placeholder -= 26;
            }
        }
        text[i] = (char)placeholder;
    }
    return text;
}

std::string Decrypt(std::string text, int key){
      int length = text.length();
      int placeholder;

      for(int i = 0; i < length; i++){
            placeholder = (int)text[i];
            if (placeholder < 123 && placeholder > 96){
                placeholder -= key;
                if (placeholder < 97){
                      placeholder += 26;
                }
            }
            if (placeholder < 90 && placeholder > 64){
                placeholder -= key;
                if (placeholder < 64){
                      placeholder += 26;
                }
            }
            text[i] = (char)placeholder;
      }
      return text;
}
