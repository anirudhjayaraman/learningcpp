/*
Coding Exercise 13 - Switch Statement
*/

#include <iostream>

void display_day(int day_code) {
  switch (day_code) {
    case 0: std::cout << "Sunday" << '\n'; break;
    case 1: std::cout << "Monday" << '\n'; break;
    case 2: std::cout << "Tuesday" << '\n'; break;
    case 3: std::cout << "Wednesday" << '\n'; break;
    case 4: std::cout << "Thursday" << '\n'; break;
    case 5: std::cout << "Friday" << '\n'; break;
    case 6: std::cout << "Saturday" << '\n'; break;
    default: std::cout << "Enter a valid integer (0 - 6)" << '\n';
  }
}

int main(int argc, char const *argv[]) {
  int day_code {};
  std::cout << "Enter day code (integer)" << '\n';
  std::cin >> day_code;
  display_day(day_code);
  return 0;
}
