#include <iostream>

using namespace std;


bool e_primo(unsigned long long int x){
  if(x == 1 || x == 0)  return 0;
  for(int i = 2; i*i <= x; ++i){
    if(x % i == 0){
      return 0;
    }
  }
  return 1;
}  


bool f(unsigned long long int a){

  if(a <= 3)
    return false;

  if(a%2 == 0)
    return true;
  
  return !e_primo(a);
}

int main () {

  unsigned long long x;

  cin >> x;


  if(f(x)){
    cout << "S" << endl;
  }else{
    cout << "N" << endl;
  }

  return 0;
}