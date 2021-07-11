// C style strings

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
  char firstname [10];
  char lastname [20];
  char fullname [50] {};
  cout << firstname << " " << lastname << endl;
  cout << fullname << endl;
  return 0;
}
