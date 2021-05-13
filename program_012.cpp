/*
Constants in C++

Literal Constants
Declared Constants
Constant Expressions
Enumerated Constants
Defined Constants

*/

#include <iostream>

int main(int argc, char const *argv[]) {
  const int x {12};
  const float a {12.0f};
  const long b {12l};
  const double y = 1.56;
  const std::string name = "Anirudh";
  const char middle_initial = 'J';
  const std::string surname {"Iyer"};

  std::cout << x << std::endl << y << '\n' << a << '\n' << b << '\n';
  std::cout << name << std::endl << middle_initial << '\n' << surname << '\n';

  return 0;
}

// g++ -Wall -std=c++17 program_012.cpp -o output
