#include <iostream>
using namespace std;

bool vet[10000100];

void clivo(int n){
  vet[1] = 1;

  for(int i = 2; i <= n;i++){
    if(!vet[i]){
      for(int j = 2; j*i <= n;j++){
        vet[j*i] = true;
      }
    }
  }
}



int main () {

  int n, aux;
  bool flag = false;


  cin >> n;
  clivo(n);

  for(int i = 2; i <= n;i++){
    if(!vet[i]){
      if(flag)
        cout << " ";
      cout << i;
      flag = true;
    }
  }

  cout << endl;


  return 0;
}