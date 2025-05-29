/*
============================================================
  Fichero: lbresenhan.h
  Creado: 26-12-2019
  Ultima Modificacion: sáb 04 ene 2020 20:14:25 CET
  oSCAR jIMENEZ pUIG                                       
============================================================
*/

#ifndef BRESENHAN_H
#define BRESENHAN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x0,y0,x1,y1;
	int dx,dy;
	int ix,iy;
	int irx,iry;
	int ar,ag,ai;
	int nx,ny;
	int step;
}Bresenhan;

const Bresenhan bresnew(int xi,int yi,int xf,int yf);

int bresget(Bresenhan* br,int *x,int* y);

#endif //BRESENHAN_H

/*
 * Este algoritmo hace una aproximacion de enteros de un segmento con inicio xo,yo y final xf,yf
 * 	bresenhan_start: Da las condiciones de inicio de bresenhan
 * 	bresenhan_get: obtiene el siguiente punto (dando 0 si ha finalizado)
 * 	bresenhan_end: finaliza el bresenhan
 */
