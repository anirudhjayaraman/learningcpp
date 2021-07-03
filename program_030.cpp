/*
Range based for loops
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int scores [] {1,7,8,92,3,4};
  for (int score: scores) {
    /* code */
    std::cout << "score: " << score << '\n';
  }

  for (auto score: scores) {
    /* code */
    std::cout << "score: " << score << '\n';
  }

  vector <double> temps {87.2, 77.1, 90.0, 99.1};
  double average_temp {};
  double running_sum {};

  for (auto temp: temps) {
    running_sum += temp;
  }

  average_temp = running_sum / temps.size();

  std::cout << "average temperature is " << average_temp << '\n';

  return 0;
}
