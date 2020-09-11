#include <iostream>
using namespace std;

bool e_primo(unsigned long long int x){
  if(x == 1 || x == 0)  return 0;
  for(int i = 2; i <= x/2; ++i){
    if(x % i == 0){
      return 0;
    }
  }
  return 1;
} 

int main () {


  long i;

  for(i = 1; i < 10000000000;i++){
    if(e_primo(i))
      cout << i << endl;
  }

  return 0;
}