#include <iostream>

int main(){
    int publicKey, privateKey;
    char answer;

    std::cout << "Would you like to generate a pair of private and public keys? [y/n]\nIf you select 'n' you will be prompted to enter your own." << std::endl;
    std::cin >> answer;

    if(answer == ' ' || answer == 'y' || answer == 'Y'){
      std::cout << "Boo." << std::endl;
    }
    else if(answer == 'n' || answer == 'N'){
      std::cout << "Please input the public key\n";
      std::cin >> publicKey;

      std::cout << "Please input the private key\n";
      std::cin >> privateKey;
    }
}
