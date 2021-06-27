/*
Mixed Type Operators
Type Coersion:
- Promotion
- Demotion
static_cast
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  int total{};
  int num1{}, num2{}, num3{};
  const int count {3};
  double average{};
  std::cout << "Enter 3 integers seperated by spaces" << '\n';
  std::cin >> num1 >> num2 >> num3;
  total = num1 + num2 + num3;
  average = total / count;
  std::cout << '\n';
  std::cout << "The 3 numbers were " << num1 << " " << num2 << " " << num3 << '\n';
  std::cout << "The sum of the numbers is " << total << '\n';

  // the average is demoted
  std::cout << "The average of the numbers is " << average << '\n';

  average = static_cast <double> (total) / count;
  std::cout << "The average of the numbers is " << average << '\n';

  return 0;
}
