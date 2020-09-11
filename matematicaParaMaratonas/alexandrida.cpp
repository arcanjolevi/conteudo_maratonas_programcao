#include <iostream>
using namespace std;

long long int kFat(long long int a, long long int b){
  long long int x, r = a;

  
  x = b;
  while((a - x)>= 1){
    r = r * (a-x);
    x += b;
  }
  return r;
}

int main () {

  long long int n, x, c;
  string a;


  cin >> n;



  for(int i = 0; i < n;i++){
    cin >> x;
    getline(cin, a);

    cout << kFat(x, a.size()) << endl;
  }

  return 0;
}