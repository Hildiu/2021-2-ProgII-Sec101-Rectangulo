//-------------------------------------------
// Dato de entrada: largo, ancho (double)
// Dato de Salida: area, perimetro (double)
//-------------------------------------------

#include "CRectangulo.h"

int main()
{
  CRectangulo      R1;  //--- estamos invocando al constructor por defecto
  tnumero l, a;

  cout << "Largo :";
  cin >> l;
  cout << "Ancho : ";
  cin >> a;
  R1.setLargo(l);
  R1.setAncho(a);
  cout << "El perimetro es  :" << R1.perimetro() << "\n";
  cout << "El area es       : " << R1.area() << "\n";
  cout << "\nAhora creamos otro objeto R2\n";

  CRectangulo R2(100,50);
  cout << "El perimetro es  :" << R2.perimetro() << "\n";
  cout << "El area es       : " << R2.area() << "\n";

  cout << "\nAhora creamos otro objeto  R3\n";
  cout << "Largo :";
  cin >> l;
  cout << "Ancho : ";
  cin >> a;
  CRectangulo R3(l,a);
  cout << "El perimetro es  :" << R3.perimetro() << "\n";
  cout << "El area es       : " << R3.area() << "\n";
  //--- vamos a forzar el uso de los metodos de acceso...
  //--- ahora queremos modificar el valor del atributo largo de R3 de tal
  //-- manera que sera 5 unidades mas.
  R3.setLargo(R3.getLargo() + 5);
  cout << "\nSe realiza nuevamente el calculo \n";
  cout << "El perimetro es  :" << R3.perimetro() << "\n";
  cout << "El area es       : " << R3.area() << "\n";
  cout << "\nAhora usamos un puntero \n";
  CRectangulo  *R4= nullptr;
  R4 = new CRectangulo(500,20);
  cout << "Area es: " << R4->area()<<"\n";
  cout << "Perimetro : "<< (*R4).perimetro() << "\n";
  delete R4;

  return 0;
}


