/*
Printing a vector
*/

#include <iostream>
#include <vector>

using namespace std;

void print(std::vector<double> v) {
   std::cout << "The vector elements are : ";

   for(int i=0; i < v.size(); i++)
   std::cout << v.at(i) << ' ';
}


int main(int argc, char const *argv[]) {
  // TBU
  vector <double> a (10);
  a[0] = 1.0;
  a[1] = 1.0;

  for (int i = 2; i < a.size(); i++) {
    a[i] = a.at(i-1) + a.at(i-2);
  }

  print(a);

  return 0;
}
