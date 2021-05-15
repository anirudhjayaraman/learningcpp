/*
Challenge:

Declare two empty vectors of integers named
vector1 and vector2 respectively.

Add 10 and 20 to vector1.
Add 100 and 200 to vector2.

Print elments and size of each vector.

Create a 2-D vector containing vector1 and vector2.

Display the elements contained within using the at method.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  // initializing 1d and 2d vectors
  vector<int> vector1;
  vector<int> vector2;
  vector<vector<int>> vector_2d;

  // creating 1d vectors and printing
  vector1.push_back(10);
  vector1.push_back(20);
  cout << "Printing first vector: " << endl;
  cout << vector1.at(0) << " " << vector1.at(1) << endl;
  cout << "Printing size of first vector: " << endl;
  cout << vector1.size() << endl;

  vector2.push_back(100);
  vector2.push_back(200);
  cout << "Printing second vector: " << endl;
  cout << vector2.at(0) << " " << vector2.at(1) << endl;
  cout << "Printing size of second vector: " << endl;
  cout << vector2.size() << endl;

  // creating 2d vector and printing
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout << "((" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << ")" << "," << endl;
  cout << "(" << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << ")" << ")." << endl;


  vector1.at(0) = 1000;
  cout << vector1.at(0) << " " << vector1.at(1) << endl;

  return 0;
}
