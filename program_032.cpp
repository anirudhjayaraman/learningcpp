/*
do-while loops in C++

 We don't have to force our way into the loop unlike the while loop
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

  int num;

  do {
    std::cout << "Enter an integer less than a 100." << '\n';
    std::cin >> num;
  } while (num >= 100);

  std::cout << "Thanks!" << '\n';

  return 0;
}
