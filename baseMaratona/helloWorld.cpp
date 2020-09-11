#include <iostream>
#include <algorithm>
using namespace std;


int pilotos[105][105];
int vet[105];

int main(){
	
  int g, p, i, s, k, j, maior, aux, w, flag;

  cin >> g >> p;

  while(g && p){

    
    for(i = 1;i <= g;i++){
      for(j = 1; j <= p;j++){
        cin >> aux;
        pilotos[i][aux] = j;
      }
    }
   
    cin >> s;

    
    for(w = 1;w <= s;w++){
      cin >> k;
      fill(vet, vet+p+1, 0);

      for(i = 1;i <= k;i++){
        cin >> aux;
        for(j = 1;j <= g;j++){
          vet[pilotos[j][i]] += aux;
        }        
      }

      maior = 1;
      for(i = 1;i <= p;i++){
        if(vet[i] > vet[maior]){
          maior = i;
        }
      }

      maior = vet[maior];

      flag = 0;

      for(i = 1;i <= p;i++){
        if(maior == vet[i]){
          if(flag){
            cout << " ";
          } 
          flag = 1;         
          cout << i;
        }
      }
      cout << endl;
    }
      

    cin >> g >> p;
  }
  
  


  return 0;
	
}