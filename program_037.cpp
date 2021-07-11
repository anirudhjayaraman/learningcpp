// C style strings

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
  char firstname [20] {};
  char lastname [20] {};
  char fullname [50] {};

  cout << "Enter first name" << endl;
  cin >> firstname;
  cout << "Enter last name" << endl;
  cin >> lastname;
  cout << "-----------------------" << endl;
  cout << "Hello, " << firstname << ", your first name has " << strlen(firstname) << " characters." << endl;
  cout << "and your last name " << lastname << " has " << strlen(lastname) << " characters." << endl;
  cout << "-----------------------" << endl;
  cout << firstname << " " << lastname << endl;
  cout << "-----------------------" << endl;
  strcpy(fullname, firstname);
  strcat(fullname, " ");
  strcat(fullname, lastname);
  cout << "Your full name is " << fullname << endl;
  cout << "Confirm your full name: " << endl;
  cin >> fullname;
  cin.getline(fullname, 50);
  cout << "Your full name is " << fullname << endl;
  return 0;
}
