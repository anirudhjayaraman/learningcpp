/*
While loops in C++
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int num;
  std::cout << "Enter an integer less than a 100." << '\n';
  std::cin >> num;
  while (num >= 100) {
    std::cout << "Please only enter an integer less than a 100." << '\n';
    std::cin >> num;
  }

  std::cout << "Thanks!" << '\n';

  return 0;
}
