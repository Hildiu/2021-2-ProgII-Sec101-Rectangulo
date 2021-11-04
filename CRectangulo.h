//
// Created by MARIA HILDA BERMEJO RIOS on 11/4/21.
//

#ifndef PROG1_CRECTANGULO_H
#define PROG1_CRECTANGULO_H

#include <iostream>
using namespace std;

using tnumero = double;

class CRectangulo
{
  private:
    tnumero largo;
    tnumero ancho;
  public:
    CRectangulo(){}; //--- el constructor por defecto
    CRectangulo(tnumero _largo, tnumero _ancho):largo(_largo),ancho(_ancho) {};
    virtual ~CRectangulo() { cout << "\nDestruyendo el objeto... ! ."; }
    //--- otros metodos
    tnumero area();
    tnumero perimetro();
    //--- metodos de acceso
    void setLargo(tnumero _largo) { largo = _largo;}
    tnumero getLargo() { return largo; }
    void setAncho(tnumero _ancho) { ancho = _ancho;}
    tnumero getAncho() { return ancho; }
};


#endif //PROG1_CRECTANGULO_H
