#include <iostream>
#include <cmath>
using namespace std;


int main () {

  int a, b, c, d, soma;

  cin >> a >> b >> c >> d;


  soma = 0;


  soma += abs(c - a) + abs(d -b);


  cout << soma << endl;


  return 0;
}