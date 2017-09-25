/**
		LLVM Compiler Project
    eulerODE.cpp
    Purpose: Uses Euler method to approximately solve a simple ODE

    @author Abbas Hadizadeh
    @version 1.0 9/1/2017
*/

#include <iostream>
#include <vector>

using namespace std;

double fxy(double, double);
double EulerMethodODE(double(*)(double, double), double, double, int, double);

int main(){
	double (*pfun)(double, double) = &fxy;
    cout<< EulerMethodODE(pfun, 0, 5, 1000, 100)<< endl;
    return 0;
}

double fxy(double x, double y){
	return 0.05 * y;
}

double EulerMethodODE(double(*fxy)(double x, double y), double x0, double xn, int n, double y0){
	vector <double> y;
	y.push_back(y0);
	double h = (xn-x0)/n;
	int i;
	for(i=1; i<=n; i++){
		y.push_back(y[i-1]+h*fxy(x0+h*(i-1), y[i-1]));
	}

	return y[n];
}
