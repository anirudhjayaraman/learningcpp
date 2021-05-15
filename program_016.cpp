/*
C++ Vectors
Accessing and Modifying Vector Elements
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

  vector <char> vowels;
  vector <int> numbers (7);  // initializing a vector of size 7

  vector <char> letters {'a', 'e', 'i', 'o'};  // initializing a vector called letters
  vector <float> test_scores (9, 8.6);  // initializing a vector with all elements 8.6
  vector <double> some_list (900,0.0007); // initalizing a vector of size 900 and all elments 0

  char item;
  vowels = letters;
  numbers.at(4) = 5;  // accessing the 4th element and assigning it value 5
  cout << numbers.at(4) << '\n';  // printing 4th element of the vector numbers

  cout << "Add a letter to letters with size " << letters.size() << endl;
  cin >> item;

  letters.push_back(item);
  letters.push_back(item);
  letters.push_back(item);
  letters.push_back(item);
  letters.push_back(item);


  cout << "size of letters is now " << letters.size() << endl;

  cout <<  vowels[0] << vowels[1] << vowels[2] << endl;
  cout << numbers[5] <<  endl;
  cout << some_list[500] << endl;

  cout << test_scores[0] << '\n' << test_scores[7] << endl;

  return 0;
}
