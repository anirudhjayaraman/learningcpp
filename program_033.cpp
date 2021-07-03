/*
While loop exercise
Coding Exercise 16
Given a vector of integers, determine how many integers are present before
you see the value -99.
*/

#include <iostream>
#include <vector>

using namespace std;

int count_numbers(const vector <int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count = 0;
    while (count < vec.size()) {
      if (vec[count] == -99) {
        break;
      } else {
        count += 1;
      }
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

int main(int argc, char const *argv[]) {

  vector <int> vec1 {1,2,-99,-50,100};
  vector <int> vec2 {0,1,2};
  vector <int> vec3 {0,1,4,5,-99};
  vector <int> vec4 {-99,0,1,4,5};
  vector <int> vec5 {};
  vector <int> vec6 {-99};

  vec5 = {};

  cout << count_numbers(vec1) << endl;
  cout << count_numbers(vec2) << endl;
  cout << count_numbers(vec3) << endl;
  cout << count_numbers(vec4) << endl;
  cout << count_numbers(vec5) << endl;
  cout << count_numbers(vec6) << endl;

  return 0;
}
