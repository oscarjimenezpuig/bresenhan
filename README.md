Este programa da las coordenadas enteras de una recta desde un xi,yi coordenadas en enteros iniciales y xf,yf coordenadas en enteros finales.
Estructuras:
  Bresehan: Estructura opaca que guarda todos los datos de la recta. No se ha de modificar.
Funciones:
  const Bresenhan bresnew(int xi,int yi,int xf,int yf): Funcion que crea una estructura Bresenhan a partir del punto inicial y final de la recta
  int bresget(Bresenhan* b,int* x,int* y): Funcion que devuelve 1 si no ha llegado al final de la recta y en ese caso devuelve el punto x,y correspondiente a la recta. Si el  algoritmo llega al final, devuelve un cero.
