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

  unsigned long n;


  cin >> n;


  for(int i = 2; i <= n;i++){
    if(eh_primo(i)){
      cout << i << " ";
    }
  }

  cout << endl;

  return 0;
}
