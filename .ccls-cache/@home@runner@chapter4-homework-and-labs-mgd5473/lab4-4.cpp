//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <gracie dean> on <9-15-2024>
#include <iostream>
using namespace std;

int main()
{
  
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  double PI       = 3.14159;
  
  cout << "Height: ";
  cin >> height;

  cout << "Radius: ";
  cin >> radius;
  
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;
 
  return 0;
} //end of main function

