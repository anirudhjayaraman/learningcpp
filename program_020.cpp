/*

Program to convert Fahrenheit to Celcius
and vice versa

*/

#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  // Code to convert degrees F to degrees C
  float temperature {0};
  float Fahrenheit {0};
  float Celcius {0};

  char choice;

  std::vector <char> cel {'C', 'c'};

  std::cout << "Enter C / F: " << '\n';
  std::cin >> choice;
  std::cout << '\n' << "Enter temperature value: " << '\n';
  std::cin >> temperature;

  if (std::find(cel.begin(), cel.end(), choice) != cel.end()) {
    Celcius = temperature;
    Fahrenheit = 1.8 * Celcius + 32;
  } else {
    Fahrenheit = temperature;
    Celcius = (Fahrenheit - 32) * (5.0 / 9.0);
  }

  std::cout << "The temperature is " << Celcius << " degrees Celcius and " << Fahrenheit << " degrees Fahrenheit." << '\n';

  return 0;
}

// g++ -Wall -std=c++17 program_020.cpp -o output
// ./output
