#include <iostream>
using namespace std;


int main () {

  int a;

  cin >> a;
  
  a++;

  if((a&(a - 1)) == 0 && (a - 1)){
    cout << "S";
  }else{
    cout << "N";
  }


  cout << endl;



  return 0;
}