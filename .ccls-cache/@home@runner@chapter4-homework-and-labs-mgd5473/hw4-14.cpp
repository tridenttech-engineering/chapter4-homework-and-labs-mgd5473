// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <gracie dean> on <9-15-2024>

#include <iostream>
using namespace std;

int main() 
{
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int total = 0;

  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  cout << "Enter amount of small pizzas sold: ";
  cin >> small;
  cout<< "Enter amount of medium pizzas sold: ";
  cin >> medium;
  cout << "Enter amount of large pizzas sold: ";
  cin >> large;
  cout << "Enter amount of family piizzas sold: ";
  cin >> family;

  total = small + medium + large + family;

  smallPercent = static_cast<double>(small) / total * 100;
  mediumPercent = static_cast<double>(medium) / total * 100;
  largePercent =  static_cast<double>(large) / total * 100;
  familyPercent = static_cast<double>(family) / total * 100;

  cout << "Total pizzas sold: " << total << endl;
  cout << "Percent of small pizzas sold: " << smallPercent << endl;
  cout << "Percent of medium pizzas sold: " << mediumPercent << endl;
  cout << "Percent of large pizzas sold: " << largePercent << endl;
  cout << "Percent of family pizzas sold: " << familyPercent << endl;
  
  return 0;
} // end of main function