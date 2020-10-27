#include <iostream>
using namespace std;

void lab2() {
	int num;
	cout << "вписати довжину сторін";
	cin >> num;
	double* x = new double[num];
	double* y = new double[num];
	for (int i = 1; i <= num; i++) {
		cout << "вписати вектор ";
		cin >> x[i] >> y[i];
	}
	for (int i = 1; i <= num; i++)
	{
		cout << "(" << x[i] << ";" << y[i] << ")" << endl;
	}
	double d1, d2, y_cent, x_cent, radius;
	d1 = -((x[2] - x[1]) * ((x[1] + x[2]) / 2)) - ((y[2] - y[1]) * ((y[1] + y[2]) / 2));
	d2 = -((x[3] - x[2]) * ((x[3] + x[2]) / 2)) - ((y[3] - y[2]) * ((y[3] + y[2]) / 2));
	y_cent = ((d2 * (x[2] - x[1])) - (d1 * (x[3] - x[2]))) / (((y[2] - y[1]) * (x[3] - x[2])) - ((y[3] - y[2]) * (x[2] - x[1])));
	x_cent = (-d1 - (y_cent * (y[2] - y[1]))) / (x[2] - x[1]);
	cout << "центр кола (" << x_cent << ";" << y_cent << ")" << endl;
	radius = sqrt((pow((x[1] - x_cent), 2)) + (pow((y[1] - y_cent), 2)));
	cout << "R = " << radius << endl;
}
