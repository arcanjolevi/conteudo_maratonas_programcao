#include <iostream>
using namespace std;




int main () {
  
  string n;
  int i;
  unsigned long long soma;

  cin >> n;

  ((n[n.size() - 1] - '0')%2 == 0)
    ? cout << "S" 
    : cout << "N";

  cout << endl;

  for(i = 0, soma = 0; i < n.size();i++)
    soma += n[i] - '0';

  (soma%3 == 0)
    ? cout << "S" 
    : cout << "N";
  cout << endl;

  ((n[n.size() - 1] - '0')%5 == 0)
    ? cout << "S" 
    : cout << "N";

  cout << endl;

  return 0;
}
