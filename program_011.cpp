/*
sizeof primitive types and their minimum values
*/

#include <iostream>
#include <climits>


int main(int argc, char const *argv[]) {

  std::cout << sizeof(long long) << " bytes" << '\n';               // 8
  std::cout << sizeof(long int) <<  " bytes" <<'\n';                // 8
  std::cout << sizeof(long double) << " bytes" << '\n';             // 8
  std::cout << sizeof(bool) << " bytes" << '\n';                    // 1
  std::cout << sizeof(unsigned long int) << " bytes" << '\n';       // 8
  std::cout << sizeof(short int) << " bytes" << '\n';               // 2
  std::cout << sizeof(unsigned short int) << " bytes" << '\n';      // 2
  std::cout << "======================" << '\n';

  // Use values defined in <climts> to get minimumn values of primitive types
  std::cout << CHAR_MIN << '\n';
  std::cout << INT_MIN << '\n';
  std::cout << SHRT_MIN << '\n';
  std::cout << LONG_MIN << '\n';
  std::cout << LLONG_MIN << '\n';

  std::cout << "======================" << '\n';

  int a {21};
  double b {444.56};

  std::cout << sizeof a << " bytes" << '\n';
  std::cout << sizeof(b) << " bytes" << '\n';
  return 0;
}


// g++ -Wall -std=c++17 program_011.cpp -o output
