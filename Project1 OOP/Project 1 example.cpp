#include<iostream>
#include<cmath>
#include "Example.h"

using namespace std;

// Calculation of the function: b[x,y,z]=pow((3*x+pow(sin, 2)*((pow(fabs(x+z), 1./3))/(2*x+1.34)), 2)-y*exp(pow(x, 2)-z)
 
double Example::Fn_b(double x, double y, double z) {
	double b1 = pow(fabs(x + z), 1. / 3);
	double b2 = 2 * x + 1.34;
	double b3 = b1 / b2;
	double b4 = pow(3 * x + pow(sin(b3), 2), 2);
	double b5 = y * exp(pow(x, 2) - z);
    b = b4 - b5;
	return b;
}
// Calculation of the function: a[x, y, z, b]=(((fabs(pow(x, 1.5))+sqrt(pow(cos(x), 2)*pow(fabs(x-b),1.2))/(3+pow(x, 2)+pow(sin(pow(y+z, 3), 2)) +((3-x)/(y+z))

double Example::Fn_a(double x, double y, double z) {
	double a111 = pow(abs(x), 1.5);
	double a11 = abs(a111);
	double a12 = pow(fabs(x - b), 1.2);
	double a13 = cos(a12);
	double a1 = a11 + sqrt(pow(a13, 2));
	double a2 = 3 + pow(x, 2) + pow(sin(pow(y + z, 3)), 2);
	double a3 = (3 - x) / (y + z);
	double a4 = a1 / a2;
	a = a4 + a3;
	return a;
}

int main() {
	cout << "-------------------------------Var-15-------------------------" << endl;
	
	double x = 0.48 * 3;
	double y = 0.47 * 3;
	double z = -1.32 * 3;

	Example example{};

	double result_b = example.Fn_b(x, y, z);
	double result_a = example.Fn_a(x, y, z);

	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
	cout << "Result of Fn_b: b = " << result_b << endl;
	cout << "Result of Fn_a: a = " << result_a << endl;

	cout << "-------------------------------2-------------------------" << endl;

	double x_start = -1;
	double x_end = 1;
	double delta_x = 0.2;

	cout << "x\t\tFn_b(x, y, z)\t\tFn_a(x, y, z)" << endl;
	for (double x = x_start; x <= x_end; x += delta_x) {
		double result_b = example.Fn_b(x, y, z);
		double result_a = example.Fn_a(x, y, z);

		cout << x << "\t\t" << result_b << "\t\t" << result_a << endl;
	}

	return 0;
}