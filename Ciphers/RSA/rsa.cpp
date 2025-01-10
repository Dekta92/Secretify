#include <iostream>
#include <string>


// Uses the Extended Euclidean Algorithm to figure out the modular multiplicative inverse of e (the exponent)
int calculateModInverse(int eulerTotient, int e){
  int modInverse;



  return modInverse;
}

int main(){
    int publicKey, privateKey;
    int prime1, prime2;
    char answer;

    std::cout << "Would you like to generate a pair of private and public keys? [y/n]\nIf you select 'n' you will be prompted to enter your own." << std::endl;
    std::cin >> answer;

    if(answer == ' ' || answer == 'y' || answer == 'Y'){
      std::cout << "Please provide the two prime numbers with which the key will be generated\nPrime Number 1: ";
      std::cin >> prime1;
      std::cout << "Prime Number 2: ";
      std::cin >> prime2;

      long long int n = prime1 * prime2;
      long long int eulerTotient = (prime1 - 1) * (prime2 - 1);
      int e = 65537;
      int modInverse = calculateModInverse(eulerTotient, e);

      std::cout << "Your public key is: (" << std::to_string(n) << ", " << std::to_string(e) << ")" << std::endl;
      std::cout << "Your private key is: (" << std::endl;
    }
    else if(answer == 'n' || answer == 'N'){
      std::cout << "Please input the public key\n";
      std::cin >> publicKey;

      std::cout << "Please input the private key\n";
      std::cin >> privateKey;
    }
}
