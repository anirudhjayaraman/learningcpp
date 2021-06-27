/*
Assignment Operators
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  /* code */
  int num1 {10};
  int num2 (20);

  num1 = 1000;

  std::cout << "num1 is" << num1 << '\n';
  std::cout << "num2 is" << num2 << '\n';

  num1 = num2 = 1e7;
  std::cout << "num2 and num1 are " << num2 << " " << num1 << '\n';

  num2 = 'Anirudh';
  std::cout << "num2 and num1 are " << num2 << " " << num1 << '\n';
  
  return 0;
}


// g++ -Wall -std=c++17 program_019.cpp -o output
// ./output
