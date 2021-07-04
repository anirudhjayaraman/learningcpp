/*
SECTION 9 CHALLENGE

Using a list of integers allow the user to select options from a menu to
perform operations on teh list.

Your program should display a menu of options to the user as follows:

P - print numbers
A - add a number
M - display mean of the numbers
S - display the smallest number
L - display the largest number
Q - quit

Enter your choice:

The program should only accept valid chices from the user, both upper and lower
case selections should be allowed.

If an illegal choice is made, you should display, "Unknown selection, please
try again." and the menu options should be displayed again.

If the user enters 'P' or 'p', you should display all the elements in the list
If the list is empty, you should diplay "[] - the list is empty"
If the list is non-empty, then all the list elements should be displayed inside
square brackets separated by a space.

If the user enters 'A' or 'a', then you should prompt the user to add to the
list which you will add to the list and then display that it was added. For
example, if the user enters 5, you should display, "5 added".
Duplicate list entries are OK.

If the user enters 'M' or 'm', you should calcualte the mean of the elements in
the list and display it. If the list is empty, you should display:
'Unable to calculate mean - no data'.

If the user enters 'S' or 's', you should display the smallest element in the
list. "The smallest number is x". For empty lists, 'Unable to determine the
smallest number - list is empty'

If the user enters 'L' or 'l' - largest.

If the user enters 'Q' or 'q' - "Goodbye" and the program should terminate

*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void print_vector(vector <int> vec) {
  if (vec.size() == 0) {
    cout << "[] - the list is empty" << endl;
  } else {
    cout << "[ ";
    for(auto item: vec) {
      cout << item << " ";
    }
    cout << "]" << endl;
  }
}

void vector_menu(vector <int> vec) {
  vector <char> choices {'p', 'P', 'a', 'A', 'm', 'M', 's', 'S', 'l', 'L', 'q', 'Q'};
  int add_integer;
  char choice;
  do {
    cout << "Provided to you is a list of integers." << '\n';
    cout << "Choose between the following options:" << endl;
    cout << "P - print numbers" << endl;
    cout << "A - add a number" << endl;
    cout << "M - display mean of the numbers" << endl;
    cout << "S - display the smallest number" << endl;
    cout << "L - display the largest number" << endl;
    cout << "Q - quit" << endl;

    cin >> choice;

    switch (choice) {
      case 'p':
      case 'P': {
        print_vector(vec);
      }; break;

      case 'a':
      case 'A': {
        cout << "Enter integer to add to the list: " << endl;
        cin >> add_integer;
        vec.insert(vec.end(), add_integer);
        cout << endl;
        cout << vec[vec.size() - 1] << " added. The new vector looks like so:" << endl;
        print_vector(vec);
      }; break;

      case 'm':
      case 'M': {
        double vec_mean {};
        vec_mean = static_cast <double> (accumulate(vec.begin(), vec.end(), 0)) / vec.size();
        cout << vec_mean << endl;
      }; break;

      case 's':
      case 'S': {
        if (vec.size() == 0) {
          cout << "Unable to determine the smallest number. Empty list." << endl;
        } else if (vec.size() == 1) {
          cout << vec[0] << endl;
        } else {
          cout << *min_element(vec.begin(), vec.end()) << endl;
        }
      }; break;

      case 'l':
      case 'L': {
        if (vec.size() == 0) {
          cout << "Unable to determine the largest number. Empty list." << endl;
        } else if (vec.size() == 1) {
          cout << vec[0] << endl;
        } else {
          cout << *max_element(vec.begin(), vec.end()) << endl;
        }
      }; break;

      case 'q':
      case 'Q': {
        cout << "Goodbye!" << endl;
      }; break;
    }
  } while((find(choices.begin(), choices.end(), choice) < (choices.end() - 2)));
}

int main(int argc, char const *argv[]) {
  vector <int> vec1 {1,3,-5,7,-3,-4,6,9,0};
  vector <int> vec2 {1,-1,2,-2,3,-3};
  vector <int> vec3 = {};
  cout << "Test Case 1 ....." << endl << endl;
  vector_menu(vec1);
  cout << "Test Case 2 ....." << endl << endl;
  vector_menu(vec2);
  cout << "Test Case 3 ....." << endl << endl;
  vector_menu(vec3);
  return 0;
}
