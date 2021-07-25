// More on C++ strings

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string s1;
  string s2 {"Anirudh"};
  string s3 {"Aditi"};

  cout << s1 << endl;
  cout << s2 << endl;

  s2[2] = 't';
  s2.at(0) = 'B';
  cout << " -------------------- " << endl;
  cout << s2 << endl;

  cout << s2 + " and " + s3 << endl;

  for (char el: s2) {
    cout << el << endl;
  }
  string fullname;
  cout << "Enter full name" << endl;
  getline(cin, fullname);
  cout << fullname << endl;

  string some_string {"This is my name. My name is Anirudh."};
  string find_string;
  size_t el;
  cout << "What would you want to find?" << endl;
  cin >> find_string;
  cout << endl;
  el = some_string.find(find_string);
  cout << el << endl;
  if (el != string::npos) {
    cout << "String found at position " << el << endl;
  } else {
    cout << "String not found." << endl;
  }
  return 0;
}
