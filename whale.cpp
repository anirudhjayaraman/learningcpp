#include <iostream>
#include <vector>
#include <string>

int main(){
  // Whale, whale, whale.
  // What have we got here?

  std::string input_string = "turpentine and turtles";
  std::vector <char> vowels = {'a', 'e', 'i','o','u'};
  std::string result;

  for(int i = 0; i < input_string.size(); i++){
    for(int j = 0; j < vowels.size(); j++){
      if(input_string[i] == vowels[j]){
        if(input_string[i] == 'e' || input_string[i] == 'u'){
          result.push_back(vowels[j]);
          result.push_back(vowels[j]);
        } else {
          result.push_back(vowels[j]);
        }
      }
    }
  }
  std::cout << result << '\n';
}
