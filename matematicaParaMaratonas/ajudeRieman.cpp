#include <iostream>
using namespace std;

#define max 13000300

bool vet[max];
int primos[max];

void clivo(unsigned long long int n){
  unsigned long long int i , j;
  vet[1] = 1;

  for( i = 2; i <= n;i++){
    if(!vet[i]){
      for(j = 2; j*i <= n;j++){
        vet[j*i] = true;
      }
    }
  }
}

int main () {

  unsigned long long n, aux, i, x, x_ant, j;

  cin >> n;
  
  clivo(max);

  aux = 0;
  i = 2;
  x_ant = 0;

  for(j = 0;j < n;j++){
    cin >> x; 
    if(x > x_ant){
      x_ant = x;
      for(;i <= x;i++){
        if(!vet[i]){
          aux++;
          primos[i] = aux;     
        }

        if(i == x){
          cout << aux << endl;
        }
      }
    }else{
      cout << primos[x] << endl;
    }  
    
  }

    
  
  
  return 0;
}