/*
Coding Exercise 9
Program to determine the eligibility of an individual for a job as a delivery
driver. They must be 18 yo or older or be above the age of 15 and have their
parental consent. Additionally they must have a valid social security number
and have no driving accidents.
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  int age {17};
  bool parental_consent {true};
  bool ssn {true};
  bool accidents {false};

  if (((age >= 18) || ((age > 15) && (parental_consent))) && ssn && (!accidents)) {
    std::cout << "Yes, you can work" << '\n';
  }

  return 0;
}

// g++ -Wall -std=c++17 program_024.cpp -o output
