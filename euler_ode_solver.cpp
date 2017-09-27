/**
	LLVM Compiler Project
    euler_ode_solver.cpp
    Purpose: Uses Euler method to approximately solve a simple ODE

    @author Abbas Hadizadeh
    @version 1.0 9/1/2017
*/

#include <iostream>
#include <vector>

using namespace std;

double euler_methode_ode(double(*fxy)(double x, double y), double x0, double xn, int n, double y0){
	vector <double> y;
	y.push_back(y0);
	double h = (xn-x0)/n;
	int i;
	for(i=1; i<=n; i++){
		y.push_back(y[i-1]+h*fxy(x0+h*(i-1), y[i-1]));
	}

	return y[n];
}
