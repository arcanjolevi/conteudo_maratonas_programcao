#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int vet[1000100];


int main () {

  int a, b, c, n, i, soma, x, count, maior;


  cin >> n;

  soma = 0;

  for(i = 0;i<n;i++){
    cin >> vet[i];
    soma += vet[i];
  }
  
  sort(vet, vet+n);

  count = n;

  for(i = n - 1; i >= 0;i--){
    if(vet[i] >= (soma - vet[i])){
      soma = soma - vet[i];
      count--;
    }
  }

  cout << count << endl;

  return 0;
}