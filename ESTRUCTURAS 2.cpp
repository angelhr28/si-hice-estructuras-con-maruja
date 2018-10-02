#include <iostream>
using namespace std;

struct persona {
  string nombre;
  string apellido_p;
  string apellido_m;
  string dni;
} hombre, mujer[50];

int main() {
  hombre.nombre = "ANGEL";
  hombre.apellido_m = "HUAMANAÑAHUI  ";
  hombre.apellido_p = "ROBLES";

  // y aca lo tienes como un array poruqe mujer lo cree como array
  mujer[0].nombre = "allison";
  mujer[0].apellido_m = "huarhua";
  mujer[0].apellido_p = "velazques";

  cout << hombre.nombre << endl;
  cout << hombre.apellido_p << endl;
  cout << hombre.apellido_m << endl;


  cout << mujer[0].nombre << endl;
  cout << mujer[0].apellido_m <<endl;
  cout << mujer[0].apellido_p <<endl;


}
