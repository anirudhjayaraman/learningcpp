/*

Constants in C++

Frank's Carpet Cleaning Service charges $30 per room
Sales Tax is 6%
Estiamtes are valid for 30 days

Prompt users for the number of rooms they would like cleaned and provide
estimates such as:

Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
================================================
Total Estimate: $63.6
This Estimate is Valid for 30 days

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  const int room_cleaning_charge {30};
  const double sales_tax {0.06};
  const int num_days {30};

  int num_rooms {0}, cost {0};
  double total_estimate {0.0}, tax {0.0};

  cout << "How many rooms would you like cleaned?" << endl;
  cin >> num_rooms;

  cost = num_rooms * room_cleaning_charge;
  tax = sales_tax * cost;
  total_estimate = cost + tax;

  cout << endl << endl;
  cout << "Number of rooms: " << num_rooms << endl;
  cout << "Price per room: $" << room_cleaning_charge << endl;
  cout << "Cost: $" << cost << endl;
  cout << "Tax: $" << tax << endl;
  cout << "================================================" << endl;
  cout << "Total Estimate: $" << total_estimate << endl;
  cout << "This Estimate is Valid for " << num_days << " days" << endl;

  return 0;
}

//g++ -Wall -std=c++17 program_013.cpp -o output
