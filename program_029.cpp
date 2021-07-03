/*
For loops in C++
*/

#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  for (int i {}; i <= 100; i++) {
    std::cout << "i is " << i << '\n';
  }

  int scores [] {10, 20, 30, 40};
  for (int i {}; i <= 3; i++) {
    std::cout << scores[i] << '\n';
  }

  // comma operator in a for loop

  for (int i {1}, j {10}; i <= 100; i*=2,j--) {
    std::cout << i << " * " << j << ": " << (i * j) << '\n';
  }

  std::vector <int> v;
  v = {1,2,3,4,5,6,10,20,30,40,90,1000,12000,25000000};
  for (int i = 0; i < v.size(); i++) {
    std::cout << i << " " << v[i] << '\n';
  }

  return 0;
}
