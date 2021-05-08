/*
Variable initializing during variable declaration
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[]) {

  double room_length {0.0};
  double room_width {0.0};
  double area {0.0};

  cout << "Enter room length" << endl;
  cin >> room_length;
  cout << "Enter room width" << '\n';
  cin >> room_width;

  area = room_width * room_width;
  cout << "Area of the room is " << area << endl;

  return 0;
}


// g++ -Wall -std=c++17 program_008.cpp -o program_008
