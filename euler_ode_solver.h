/**
	LLVM Compiler Project
    euler_ode_solver.h
    Purpose: Uses Euler method to approximately solve a simple ODE

    @author Abbas Hadizadeh
    @version 1.0 9/26/2017
*/


#ifndef euler_ode_solver
#define euler_ode_solver

double euler_methode_ode(double(*)(double, double), double, double, int, double);

#endif
