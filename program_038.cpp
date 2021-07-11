// C++ strings

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string s1 {};  // --empty--
  string s2 {"Anirudh"};  // Anirudh
  string s3 {s2};  // Anirudh
  string s4 {"Anirudh", 5};  // Aniru
  string s5 {s3, 1,4};  // niru
  string s6 (5, 'A');  // AAAAA

  cout << s1 << endl << s2 << endl << s3 << endl << s4 << endl << s5 << endl << s6 << endl;

  s1 = "Anirudh Jayaraman";
  s2 = s1;
  string sentence;
  sentence = s1 + " is learning C++. " + s2 + " already knows Python and R.";
  cout << sentence << endl;

  for (char ch: s2) {
    cout << ch << endl;
  }

  string s7 {};
  cout << "Enter two words separated by space. " << endl;
  cin >> s7;
  cout << "You entered " << s7;
  getline(cin, s7);
  cout << endl;
  cout << s7;
  return 0;
}
