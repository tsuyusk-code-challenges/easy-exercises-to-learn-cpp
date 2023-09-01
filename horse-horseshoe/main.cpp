#include <iostream>
using namespace std;

int main() { 
  int shoes_1, c1, c2, c3, c4, new_horseshoes_to_be_bought = 0;

  cin >> c1 >> c2 >> c3 >> c4;

  if (c1 == c2 || c1 == c3 || c1 == c4) {
    new_horseshoes_to_be_bought++;
  }
  if (c2 == c3 || c2 == c4) {
    new_horseshoes_to_be_bought++;
  }
  if (c3 == c4) {
    new_horseshoes_to_be_bought++;
  }
  cout << new_horseshoes_to_be_bought;

  return 0;
}
