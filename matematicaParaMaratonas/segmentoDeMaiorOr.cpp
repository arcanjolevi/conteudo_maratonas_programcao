#include <iostream>
using namespace std;


int main () {


  int n, i, ou, x;

  cin >> n;

  ou = 0;
  for(i = 0; i < n;i++){
    cin >> x;
    ou |= x;
  }

  cout << ou << endl;

  

  return 0;
}