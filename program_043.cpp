// Section 10 Challenge

#include <iostream>
#include <string>

using namespace std;

string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key{"JKLMNOPQRSTUVWXYZABCDEFGHImnopqrstuvwxyzabcdefghijkl"};

string encrypt_message(string secret_message) {
  string encrypted_message;
  encrypted_message = secret_message;
  size_t pos;
  for (size_t i{0}; i < secret_message.length(); i++) {
    pos = alphabet.find(secret_message[i]);
    if (pos != string::npos) {
      encrypted_message.at(i) = key[pos];
    }
  }
  return encrypted_message;
}

string decrypt_message(string encrypted_message){
  string decrypted_message = encrypted_message;
  size_t pos;
  for (size_t i{0}; i < encrypted_message.length(); i++) {
    pos = key.find(encrypted_message[i]);
    if (pos != string::npos) {
      decrypted_message.at(i) = alphabet[pos];
    }
  }
  return decrypted_message;
}

int main(int argc, char const *argv[]) {

  string secret_message;
  string encrypted_message;
  string decrypted_message;

  cout << "Enter your secret message." << endl;
  getline(cin, secret_message);
  cout << endl << endl << "Encrypting message ..." << endl << endl;
  encrypted_message = encrypt_message(secret_message);
  cout << encrypted_message << endl;
  decrypted_message = decrypt_message(encrypted_message);
  cout << endl << endl << "Decrypting message ... " << endl << endl;
  cout << decrypted_message << endl;

  return 0;
}
