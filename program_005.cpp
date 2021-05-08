/*
Executing a program using namespace
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int favorite;
  cout << "What's your favorite number?" << '\n';
  cin >> favorite;
  cout << favorite << " is my favorite number too!" << '\n';
  return 0;
}


// g++ -Wall -std=c++17 program_005.cpp -o program_005
