#include <iostream>
using namespace std;

int main() {

  int n, revnum = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    revnum = revnum * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << revnum;

  return 0;
}