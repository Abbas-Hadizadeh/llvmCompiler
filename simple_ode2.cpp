/**
	LLVM Compiler Project
    simple_ode2.cpp
    Purpose: Runs euler_ode_solver on a simple ODE
        ODE: dy/dx = 2x
            0<x<5
            y0=100
			exact answer: y(5) = 125

    @author Abbas Hadizadeh
    @version 1.0 9/26/2017
*/

#include <iostream>
#include "euler_ode_solver.h"

using namespace std;

#define TOTAL_POINTS 1000
#define X_BEGINNIG 0
#define X_ENDING 5
#define Y_BEGINNING 100

double fxy(double, double);

int main(){
	double (*pfun)(double, double) = &fxy;
    cout<< euler_methode_ode(pfun, X_BEGINNIG, X_ENDING, TOTAL_POINTS, Y_BEGINNING)<< endl;
    return 0;
}

double fxy(double x, double y){
	return 2*x;
}
