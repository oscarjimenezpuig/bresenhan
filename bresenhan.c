/*
============================================================
  Fichero: bresenhan.c
  Creado: 26-12-2019
  Ultima Modificacion: sáb 04 ene 2020 20:32:12 CET
  oSCAR jIMENEZ pUIG                                       
============================================================
*/

#include "lbresenhan.h"

const Bresenhan bresnew(int xi,int yi,int xf,int yf)
{
	Bresenhan br;
	br.x0=xi;
	br.y0=yi;
	br.x1=xf;
	br.y1=yf;
	br.dx=br.x1-br.x0;
	br.dy=br.y1-br.y0;
	br.ix=1;
	br.iy=1;
	if(br.dy<0)
	{
		br.dy=-br.dy;
		br.iy=-1;
	}
	if(br.dx<0)
	{
		br.dx=-br.dx;
		br.ix=-1;
	}
	br.irx=br.ix;
	br.iry=br.iy;
	if(br.dx>=br.dy)
		br.iry=0;
	else
	{
		br.irx=0;
		int k=br.dx;
		br.dx=br.dy;
		br.dy=k;
	}
	br.ar=2*br.dy;
	br.ag=br.ar-br.dx;
	br.ai=br.ag-br.dx;
	br.nx=br.x0;
	br.ny=br.y0;
	br.step=0;
	return br;
}

int bresget(Bresenhan* br,int *x,int *y)
{
	if(br->step!=br->dx+1)
	{
		*x=br->nx;
		*y=br->ny;
		if(br->ag>=0)
		{
			br->nx+=br->ix;
			br->ny+=br->iy;
			br->ag+=br->ai;
		}
		else
		{
			br->nx+=br->irx;
			br->ny+=br->iry;
			br->ag+=br->ar;
		}
		br->step++;
		return 1;
	}
	else
		return 0;
}


	
