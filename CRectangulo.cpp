//
// Created by MARIA HILDA BERMEJO RIOS on 11/4/21.
//

#include "CRectangulo.h"

tnumero CRectangulo::area()
{
 return largo*ancho;
}


tnumero CRectangulo::perimetro()
{
  return 2*largo + 2*ancho;
}