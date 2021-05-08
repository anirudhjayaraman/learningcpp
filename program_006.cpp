/*
Executing a program using specific funcitons from the namespace
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  int favorite;
  cout << "What's your favorite number?" << endl;
  cin >> favorite;
  cout << favorite << " is my favorite number too!" << '\n';
  return 0;
}


// g++ -Wall -std=c++17 program_006.cpp -o program_006
