/*
Nested loops -  Coding Exercise 17

Given a vector of integers vec, find the sum of the product of all pairs of
vector elements. Declare an integer variable named result and store the final
product in this variable.
*/

#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(vector <int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result = 0;
    for (int i = 0; i < vec.size(); i++) {
      for (int j = i + 1; j < vec.size(); j++) {
        result += vec[i] * vec[j];
      }
    }

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main(int argc, char const *argv[]) {
  vector <int> vec {1,2,3};
  cout <<  calculate_pairs(vec) << endl;
  return 0;
}
