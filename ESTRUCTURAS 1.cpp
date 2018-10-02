#include <iostream>
using namespace std;


struct Punto {
 int x;
 int y;
};

int main() {
  Punto punto_1[20];
  int final = 19;
  
  // aqui lleno valores
  for ( int i=0; i< 20; i++) {
    punto_1[i].x = i;
    punto_1[i].y = final;
    final--;
  }


  // y aqui itero sobre los valores
  for ( int i=0; i< 20; i++) {
    cout<<"punto x: "<< punto_1[i].x << " y punto y: ";
    cout << punto_1[i].y << endl;
    final--;
  }
  

}
