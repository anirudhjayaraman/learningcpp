/*
Multidimensional Arrays
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  char rating [3] [4] {
    {'a', 'b', 'c', 'd'},
    {'e', 'f', 'g', 'h'},
    {'i', 'j', 'k', 'l'}
  };

  std::cout << "Enter 1,1 element" << '\n';
  std::cin >> rating [0] [0];
  std::cout << "\nEnter 2,3 element" << '\n';
  std::cin >> rating [1] [2];
  std::cout << "Enter 3,1 element" << '\n';
  std::cin >> rating [2] [0];
  std::cout << "\nEnter 3,2 element" << '\n';
  std::cin >> rating [2] [1];
  std::cout << "\nEnter 3,3 element" << '\n';
  std::cin >> rating [2] [2];
  std::cout << "\n" << '\n';
  std::cout << rating [0] [0] << " " << rating [0] [1] << " " << rating [0] [2] << " " << rating [0] [3] <<'\n';
  std::cout << rating [1] [0] << " " << rating [1] [1] << " " << rating [1] [2] << " " << rating [1] [3] <<'\n';
  std::cout << rating [2] [0] << " " << rating [2] [1] << " " << rating [2] [2] << " " << rating [2] [3] <<'\n';

  return 0;
}


// g++ -Wall -std=c++17 program_015.cpp -o output
