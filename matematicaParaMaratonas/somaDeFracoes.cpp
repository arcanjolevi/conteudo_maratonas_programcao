#include <iostream>
using namespace std;



unsigned long long int mdc(unsigned long long int maior, unsigned long long int menor){
  return (menor == 0? maior: mdc(menor, maior%menor));
}





int main () {

  unsigned long long int a, b, c, d, mdc1, numerador, denominador;


  cin >> a >> b >> c >> d;

  denominador = b * d;

  numerador=  (d*a) + (b*c);

  mdc1 = mdc(max(numerador, denominador), min(numerador, denominador));

  
  numerador = numerador/mdc1;
  denominador = denominador/mdc1;
  


  cout << numerador << " " << denominador << endl;



  return 0;
}