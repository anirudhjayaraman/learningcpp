/*
Initializing Arrays in C++
Accessing individual Array elements
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  int test_scores [5] {100, 89, 94, 56, 45};
  char vowels [] {'a', 'e', 'i', 'o', 'u'};
  int high_scores [6] {4, 0, 5}; // remaining high scores set to 0
  const int days_in_year {252};
  double stock_price [days_in_year] {0.0}; // all initialized to 0
  int another_array [] {1,2,3,4,5,6,7,10}; // size automatically determined
  int temperatures [5] {};  // initializes everything to zero

  std::cout << test_scores[0] << " " << test_scores[4] << '\n';
  std::cout << vowels[0] << vowels[1] << vowels[4] << '\n';
  std::cout << temperatures[0] << " " << temperatures[4] << '\n';
  std::cout << "Now input anything..." << '\n';
  std::cin >> vowels[4]; // Input anything

  std::cout << "The name of the array 'temperatures' is" << temperatures << '\n';


  return 0;
}

/*

program_014.cpp:11:7: warning: unused variable 'high_scores' [-Wunused-variable]
  int high_scores [6] {4, 0, 5}; // remaining high scores set to 0
      ^
program_014.cpp:13:10: warning: unused variable 'stock_price' [-Wunused-variable]
  double stock_price [days_in_year] {0.0}; // all initialized to 0
         ^
program_014.cpp:14:7: warning: unused variable 'another_array' [-Wunused-variable]
  int another_array [] {1,2,3,4,5,6,7,10}; // size automatically determined
      ^
3 warnings generated.

*/
