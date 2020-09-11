#include <iostream>
#include <cmath>
using namespace std;



typedef struct ponto
{
  double x, y;

  ponto(){}

  ponto(double _x, double _y){
    x = _x;
    y = _y;
  }

  ponto operator+(const ponto outro){
    return ponto(x+outro.x, y + outro.y);
  }

  ponto operator-(const ponto outro){
    return ponto(x-outro.x, y - outro.y);
  }

  ponto operator/(double n){
    return ponto(x/n, y/n);
  }
  
  bool operator==(ponto outro){
    return (outro.x == x && outro.y == y);
  }

  double dist(ponto a, ponto b){
    ponto c = a-b;
    return sqrt(c.x * c.x + c.y * c.y);
  }

  double dist(ponto a){
    ponto c = a-(*this);
    return sqrt(c.x * c.x + c.y * c.y);
  }

  bool sameLine(ponto a){
    return this->y == a.y;
  }


  double produtoEscalar(ponto a){
    return x * a.x + y *a.y;
  }

  ponto operator=(ponto outro){
    x = outro.x;
    y = outro.y;
    return ponto(x, y);
  }


  void show(){
    cout << "Ponto: " << x << "," << y << endl;
  }

}Ponto;


double cross(Ponto a, Ponto b){
  return a.x*b.y - a.y*b.x;
}


typedef struct line{

  Ponto a, b;

  line(Ponto _a, ponto _b){
    a = _a;
    b = _b;
  }

  double dist(Ponto x){
    double crs = cross(Ponto(x-a), Ponto(b-a));
    return abs(crs/a.dist(b));
  }

  Ponto pontoMedio(){
    return a + (b-a)/2;
  }

  double size(){
    return a.dist(b);
  }

  bool perpendicular(line outra){

    double m1, m2;

    m1 = outra.coeficienteAngular();
    m2 = this->coeficienteAngular(); 


 

    if(m1 == m2)
      return true;

    if(!m1 || !m2){
      if(!m1 && !m2)
        return true;
      return false;
    }
   
    return abs(m1) == abs(1/m2);
  }

  double coeficienteAngular(){
    double aux1, aux2;
    aux1 = (b.y - a.y);
    aux2 = (b.x - a.x);
    
    if(aux2){
      return aux1 / aux2;
    }

    return 0;
  }


  void show(){
    cout << "Line: (" << a.x << ", " << a.y << "), (" << b.x << ", " << b.y << ");\n";
  }

  //r: y = ax + b


}Line;

int main () {

  double x, y;
  double adjacente, angulo1, b, c, d, e, hipotenusa;
  int i;

  Ponto vet[10];


  for(i = 0; i < 7;i++){
    cin >> x >> y;
    vet[i].x = x;
    vet[i].y = y;
  }

  
  adjacente = vet[1].dist(vet[2])/2;
  hipotenusa = vet[0].dist(vet[1]);
  angulo1 = (180 - ((acos(adjacente/hipotenusa) * 180 / 3.14) + 90)) * 2;


  

  
  
  if(angulo1 > 0 && angulo1 < 90){//primeiro check
    //cout << "1"<< endl;
    if(vet[0].dist(vet[1]) == vet[0].dist(vet[2])){//Segundo check
      //cout << "2"<< endl;
      if(Line(vet[1], vet[4]).dist(vet[2]) == 0 && Line(vet[1], vet[4]).dist(vet[3]) == 0){//terceiro check
        //cout << "3 -> "<< endl;

        if(Line(vet[1], vet[2]).pontoMedio() == Line(vet[3], vet[4]).pontoMedio()){//quarto check
            //cout << "4"<< endl;
            if(vet[1].dist(vet[2]) > vet[3].dist(vet[4])){//quinto check
              //cout << "5"<< endl;

              
              if(Line(vet[3], vet[5]).perpendicular(Line(vet[1], vet[2])) && Line(vet[3], vet[5]).perpendicular(Line(vet[4], vet[6]))){//sexto check
                //cout << "6"<< endl;
                if(vet[3].dist(vet[5]) == vet[4].dist(vet[6])){
                  //cout << "7"<< endl;
                  if(vet[0].dist(vet[5]) > vet[0].dist(vet[3])){
                    //cout << "8"<< endl;
                    cout << "S" << endl;
                    return 0;
                  }
                }
              }


            }
        }

      }

    }


  }
  

  cout << "N" << endl;

  return 0;
}