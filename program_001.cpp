/*
 Ask the user to diplay their favorite number and let them know that their
 chosen number is your favorite number too!
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  int some_number;
  std::cout << "What is your favorite number?" << '\n';
  std::cin >> some_number;
  std::cout << "Wow, that's my favorite number too!" << '\n';
  return 0;
}

// g++ -Wall -std=c++17 program_001.cpp -o program_001
