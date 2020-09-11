#include <iostream>
using namespace std;




int main () {
  
  string n;
  int i;
  int soma;

  cin >> n;

  if(n.size() > 1){
    ((n[n.size() - 1] - '0' + ((n[n.size() - 2] - '0') * 2))%4 == 0)
    ? cout << "S" 
    : cout << "N";
  }else{
    ((n[n.size() - 1] - '0')%4 == 0)
    ? cout << "S" 
    : cout << "N";
  } 

  cout << endl;

  for(i = 0, soma = 0; i < n.size();i++)
    soma += (n[i] - '0')%9;

  (soma%9 == 0)
    ? cout << "S" 
    : cout << "N";
  cout << endl;

  if(n.size() > 1){
    ((n[n.size() - 1] - '0' + ((n[n.size() - 2] - '0') * 10))%25 == 0)
    ? cout << "S" 
    : cout << "N";
  }else{
    ((n[n.size() - 1] - '0')%25 == 0)
    ? cout << "S" 
    : cout << "N";
  } 

  cout << endl;

  return 0;
}
