#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {
  greet();

  std::string codeword = "CODECADEMY";
  std::string answer = "__________";
  std::vector<char> incorrect;
  bool guess = false;
  char letter;
  int misses = 0;

  while((answer != codeword) & (misses < 7)) {
    std::cout << "Please enter your guess: " << '\n';
    std::cin >> letter;

    for(int i = 0; i < codeword.size(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess) {
      std::cout << "Correct!" << '\n';
      guess = false;
    } else {
      std::cout << "Incorrect! The tractor beam pulls the person in further." << '\n';
      incorrect.push_back(letter);
      misses++;
    }

    display_misses(misses);
    display_status(incorrect, answer);

  }
  end_game(answer, codeword);
}
