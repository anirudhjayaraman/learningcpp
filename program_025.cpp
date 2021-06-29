/*
Section 8 Challenge

As the user to enter the following:
An integer representing the number of cents
You may assume that the number of cents entered is greater than or equal to 0
The program should then display how to provide that change to the user

In the US
1 dollar is 100 cents
1 quarter is 25 cents
1 dime is 10 cents
1 nickel is 5 cents
1 penny is 1 cent
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  int dollars, quarter, dime, nickel, penny, cents;

  std::cout << "How many cents do you have?" << '\n';
  std::cin >> cents;

  if ((cents / 100) > 0) {
    dollars = cents / 100;
    cents %= 100;
  }

  if ((cents / 25) > 0) {
    quarter = cents / 25;
    cents %= 25;
  }

  if ((cents / 10) > 0) {
    dime = cents / 10;
    cents %= 10;
  }

  if ((cents / 5) > 0) {
    nickel = cents / 5;
    cents %= 5;
  }

  penny = cents;


  std::cout << "You have: " << '\n';
  std::cout << "Dollars: " << dollars << '\n';
  std::cout << "Quarters: " << quarter << '\n';
  std::cout << "Dimes: " << dime << '\n';
  std::cout << "Nickels: " << nickel << '\n';
  std::cout << "Cents: " << penny << '\n';


  return 0;
}
