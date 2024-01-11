#include <iostream>
using namespace std;

int main()
{
  int number, shift_number;
  cout << "Enter the number: ";
  cin >> number;
  // We are doing the shift operators in this file
  shift_number = number >> 1;
  cout << shift_number;
  return 0;
}