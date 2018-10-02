#include <iostream>
using namespace std;


struct persona {
  string nombre;
  string apellido_p;
  string apellido_m;
  string dni;
} hombre, mujer[50];

int main() {
  persona ANGEL;

  ANGEL.nombre = "ANGEL";
  ANGEL.apellido_m = "ROBLES";
  ANGEL.apellido_p = "HUAMANÑAHUI";


  cout << ANGEL.nombre << endl;
  cout << ANGEL.apellido_p << endl;
  cout << ANGEL.apellido_m << endl;



  //hombre.nombre = "ANGEL";
  //hombre.apellido_m = "ROBLES";
  //hombre.apellido_p = "HUAMANÑAHUI";

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
