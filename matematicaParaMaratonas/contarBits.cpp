#include <iostream>
using namespace std;


int main () {


  int n, count;

  cin >> n;

  count = 0;


  while(n){
    count++;
    n = n - (n&-n);
  }

  cout << count << endl;

  return 0;
}