/*
Assignment 1 - Challenge Assignment - Letter Pyramid

Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
It's much easier to understand the Letter Pyramid given examples.
If the user enters the string "ABC", then your program should display:
  A
 ABA
ABCBA

If the user enters the string, "12345", then your program should display:

    1
   121
  12321
 1234321
123454321

If the user enters 'ABCDEFG', then your program should display:

      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
 ABCDEFEDCBA
ABCDEFGFEDCBA
If the user enters 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', then your program should display:
                         A
                        ABA
                       ABCBA
                      ABCDCBA
                     ABCDEDCBA
                    ABCDEFEDCBA
                   ABCDEFGFEDCBA
                  ABCDEFGHGFEDCBA
                 ABCDEFGHIHGFEDCBA
                ABCDEFGHIJIHGFEDCBA
               ABCDEFGHIJKJIHGFEDCBA
              ABCDEFGHIJKLKJIHGFEDCBA
             ABCDEFGHIJKLMLKJIHGFEDCBA
            ABCDEFGHIJKLMNMLKJIHGFEDCBA
           ABCDEFGHIJKLMNONMLKJIHGFEDCBA
          ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
         ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
        ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
       ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
      ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
     ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
    ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA
   ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
  ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA
If the user enters "C++isFun!", then your program should display:

        C
       C+C
      C+++C
     C++i++C
    C++isi++C
   C++isFsi++C
  C++isFuFsi++C
 C++isFunuFsi++C
C++isFun!nuFsi++C

Think about the problem before you begin and break it down into steps.
This can be a very challenging problem to solve!
*****  Don't forget to paste your code solution when you submit.******
Have fun!

*/

#include <iostream>
#include <string>

using namespace std;

string reverse_string(string string_to_reverse) {
  string reversed_string = string_to_reverse;
  int n = string_to_reverse.length();
  for (size_t i = 0; i < n / 2; i++) {
    swap(reversed_string[i], reversed_string[n-i-1]);
  }
  return reversed_string;
}

int main(int argc, char const *argv[]) {
  string user_string;

  cout << "Enter a string!" << endl;
  cin >> user_string;
  cout << endl;

  int n = user_string.length();

  string to_reverse;
  string reversed;
  string to_print;

  for (size_t i = 0; i < n; i++) {
    to_reverse = string(n-i-1,' ') + user_string.substr(0,i);
    reversed = reverse_string(to_reverse);
    to_print = to_reverse + user_string[i] + reversed;
    cout << to_print << endl;
  }

  return 0;
}
