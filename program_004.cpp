// Program with a Linker Error

#include <iostream>

extern int x;

int main(int argc, char const *argv[]) {
  /* code */
  std::cout << x << '\n';
  return 0;
}

// g++ -Wall -std=c++17 program_004.cpp -o program_004
