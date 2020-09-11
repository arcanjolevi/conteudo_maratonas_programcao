#include <iostream>
#include <cmath>

using namespace std;

class Ponto{
    int x;
    int y;

  public:

  int getX(){
    return this->x;
  }

  int getY(){
    return this->y;
  }

  void setX(int a){
    this->x = a;
  }

  void setY(int a){
    this->y = a;
  }

  void show(){
    cout << endl << "Ponto" << endl << "X: " << this->x << " Y: " << this->y << endl;
  }

  Ponto(){
    this->x = 0;
    this->y = 0;
  }

  double distance(Ponto outro){

    double a, b;

    a = outro.getX() - this->x;
    b = outro.getY() - this->y;


    double d = abs((a * a) + (b * b));
    
    
    return d;
  }

  ~Ponto(){

  }
  
};




int main () {

  int soma;
  Ponto a, b;
  int n, i, x, y;

  cin >> n;
  
  for(i = 0, soma = 0; i < n;i++){
    
    cin >> x >> y;
    a.setX(x);
    a.setY(y);

    cin >> x >> y;
    b.setX(x);
    b.setY(y);

    soma += a.distance(b);
  }

  cout << soma << endl;

  return 0;
}

