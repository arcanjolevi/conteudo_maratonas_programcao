#include <iostream>
using namespace std;




int main () {
  
  string n;
  int i;
  int soma;

  cin >> n;

  for(i = 0, soma = 0; i < n.size();i++){
    if(i%2 == 0){
      soma += (n[i] - '0')%11;
    }else{
      soma += ((n[i] - '0') * 10)%11;
    }
  }
    

  (soma%11 == 0)
    ? cout << "S" 
    : cout << "N";
  
  cout << endl;


  return 0;
}
