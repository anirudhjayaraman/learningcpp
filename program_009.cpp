/*
Local and global variables in C++
*/

#include <iostream>

using std::string;

string name {"Aditi"};

int main(int argc, char const *argv[]) {
  string name {"Anirudh"};

  std::cout << "Your name is " << name << '\n';

  return 0;
}

// g++ -Wall -std=c++17 program_009.cpp -o program_009
