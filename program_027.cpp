/*
Coding Exercise 12
*/

#include <iostream>

int can_you_drive(int age, bool has_car){
  if (age < 16) {
    std::cout << "Sorry, come back in " << (16 - age) << " years and be sure you own a car when you come back." << '\n';
  } else if (age >= 16 && has_car){
    std::cout << "Yes - you can drive!" << '\n';
  } else {
    std::cout << "Sorry, you need to buy a car before you can drive!" << '\n';
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  int age {};
  bool has_car {true};
  std::cout << "What is your age?" << '\n';
  std::cin >> age;
  std::cout << "Do you have a car?" << '\n';
  std::cin >> has_car;
  can_you_drive(age, has_car);
  return 0;
}


// g++ -Wall -std=c++17 program_027.cpp -o output
