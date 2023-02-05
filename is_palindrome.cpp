#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  int len_text = text.size();
  int cnt = 0;
  for(int i = 0; i < (len_text / 2); i++){
    if(text[i] == text[len_text-i-1]){
      cnt++;
    }
  }
  if(cnt == len_text / 2){
    return true;
  } else {
    return false;
  }
}

int main() {

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";

}
