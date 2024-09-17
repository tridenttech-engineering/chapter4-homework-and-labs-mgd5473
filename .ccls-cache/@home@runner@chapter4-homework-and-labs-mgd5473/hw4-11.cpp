// Introductory11.cpp - displays ending balance
// Created/revised by <gracie dean> on <9-15-2024>

#include <iostream>
using namespace std;

int main() {
  double startBalance = 0.0;
  double deposits = 0.0;
  double withdrawls = 0.0;
  double finalBalance = 0.0;

  cout << "Enter begining balance: ";
  cin >> startBalance;
  cout << "Enter total deposits: ";
  cin >> deposits;
  cout << "Enter total withdrawls: ";
  cin >> withdrawls;
  
  finalBalance = startBalance + deposits - withdrawls;
  cout << "Final balance: $" << finalBalance << endl;

  return 0;
} // end of main function