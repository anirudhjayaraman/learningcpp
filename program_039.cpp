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

  string s7 {"This is a test."};
  cout << s7 << endl;
  cout << s7.find("This") << endl;
  cout << s7.find("is") << endl;
  cout << s7.find("test") << endl;
  cout << s7.find("is", 5) << endl;
  cout << s7.find("Anirudh") << endl;
  cout << "String length: " << endl;
  cout << s7.length() << endl;
  s7.clear();
  cout << "s7 is: " << endl << s7 << endl;

  string s8;
  cout << "Enter string: " << endl;
  getline(cin, s8);
  cout << "Printing... " << endl;
  cout << s8 << endl;
  return 0;
}
