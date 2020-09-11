#include <iostream>
using namespace std;

class Ponto{
  public:
    int x, y;
  
  Ponto(int a, int b){
    x = a;
    y = b;
  }

  int getX(){
    return this->x;
  }


  int getY(){
    return this->y;
  }

  void print(){
    cout << "x: " << x << " Y: " << y << endl;
  }

  ~Ponto(){
    
  }
};


class Retangulo {
  public:
    Ponto * a;
    Ponto * b;
    Ponto * c;
    Ponto * d;


  Ponto * getA(){
    return a;
  }

  Ponto * getB(){
    return b;
  }

  Ponto * getC(){
    return c;
  }

  Ponto * getD(){
    return d;
  }

  Retangulo(int x0, int y0, int x1, int y1){
    this->a = new Ponto(x0, y0);
    this->c = new Ponto(x1, y1);
    this->b = new Ponto(x0, y1);
    this->d = new Ponto(x1, y0);
  }

  bool checkInside(Ponto * w){
    if(w->getX() >= a->getX() && w->getX() <= c->getX() && w->getY() >= a->getY() && w->getY() <= c->getY()){
      return true;
    }
    return false;
  }


  bool checkCut(Ponto * w, Ponto * v){

    if(w->getX() >= a->getX() && w->getX() <= c->getX() && w->getY() < a->getY() && v->getY() >= a->getY()){
      return true;
    }    
    return false;
  }


  ~Retangulo(){
    a->~Ponto();
    b->~Ponto();
    c->~Ponto();
    d->~Ponto();
  }
};




int main () {

  Retangulo * a, * b;
  int x0, y0, y1, x1, i;
  bool inside;

  cin >> x0 >> y0 >> x1 >> y1;

  a = new Retangulo(x0, y0, x1, y1);

  cin >> x0 >> y0 >> x1 >> y1;

  b = new Retangulo(x0, y0, x1, y1);


  inside = a->checkInside(b->getA());
  
  if(inside){
    cout << 1 << endl;
    return 0;
  }

  inside = a->checkInside(b->getB());
  
  if(inside){
    cout << 1 << endl;
    return 0;
  }

  inside = a->checkInside(b->getB());
  
  if(inside){
    cout << 1 << endl;
    return 0;
  }

  inside = a->checkInside(b->getD());
  
  if(inside){
    cout << 1 << endl;
    return 0;
  }

  inside = a->checkCut(b->getA(), b->getB());
  
  if(inside){
    cout << 1 << endl;
    return 0;
  }

  inside = a->checkCut(b->getD(), b->getC());
  
  if(inside){
    cout << 1 << endl;
    return 0;
  }

  cout << 0 << endl;


  a->~Retangulo();
  b->~Retangulo();  

  return 0;
}