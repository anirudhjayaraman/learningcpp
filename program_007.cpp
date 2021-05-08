/*
For the below code try entering 5.6. The result should be 5.6
For the below code try entering 0.7 8. The result should be 0.7
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  int a;
  double b, c;
  cin >> a >> c;
  b = a + c;
  cout << b << endl;
  return 0;
}


// g++ -Wall -std=c++17 program_007.cpp -o program_007
