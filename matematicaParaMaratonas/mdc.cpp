#include <iostream>
using namespace std;

int mdc(int maior, int menor){
  return (menor == 0? maior: mdc(menor, maior%menor));
}

int main () {

  int a, b, n, i, _mdc;


  cin >> n >> a >> b;
  _mdc = mdc(max(a, b), min(a, b));

  for(i = 2;i < n;i++){
    cin >> a;
    _mdc = mdc(max(a, _mdc), min(a, _mdc));
  }

  cout << _mdc << endl;


  return 0;
}