/*
Coding Exercise 11
*/

#include <iostream>

int can_you_drive(int age){
  if (age < 16) {
    std::cout << "Sorry, come back in " << (16 - age) << " years" << '\n';
  } else {
    std::cout << "Yes - you can drive!" << '\n';
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int age {};
  std::cout << "What is your age?" << '\n';
  std::cin >> age;
  can_you_drive(age);
  return 0;
}

// g++ -Wall -std=c++17 program_026.cpp -o output
