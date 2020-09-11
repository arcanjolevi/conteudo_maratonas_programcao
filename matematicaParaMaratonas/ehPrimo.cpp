#include <iostream>
using namespace std;



bool eh_primo(unsigned long x){
  unsigned long i;
  if(x == 1 || x == 0)  return 0;
  for(i = 2; i*i <= x; i++){
    if(x % i == 0){      
      return 0;
    }
  }
  return 1;
}  


int main () {

  unsigned long x;

  cin >> x;

  if(eh_primo(x)){
    cout << "S" << endl;
  }else{
    cout << "N" << endl;
  }

  return 0;
}