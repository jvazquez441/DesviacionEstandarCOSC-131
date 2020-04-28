// Jonathan Vazquez Rivera
// Tutor Universidad Ana G. Mendez Recinto Cupey
// jvazquez441@email.uagm.edu
// 04/28/2020

//Ejercicio para estudiantes de COSC-131
// Programa que calcula la media(average) y la desviacion estandar de 5 numeros. 


#include <iostream>
#include <cmath>

using namespace std;



double mean(double x1, double x2, double x3, double x4, double x5) // Funcion para calcular la media de 5 numeros
{
	return (x1 + x2 + x3 + x4 + x5) / 5;
}

double standarDev(double x1, double x2, double x3, double x4, double x5, double mean) // Funcion para calcular la desviacion estandar de 5 numeros. 
{
	double sd = sqrt(((pow((x1 - mean), 2)) + (pow((x2 - mean), 2)) + (pow((x3 - mean), 2)) + (pow((x4 - mean), 2)) + (pow((x5 - mean), 2))) / 5);

	return sd;
}

int main()
{
	double x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;

	double x = mean(x1, x2, x3, x4, x5);


	cout << "Number 1: " << x1 << endl;
	cout << "Number 2: " << x2 << endl;
	cout << "Number 3: " << x3 << endl;
	cout << "Number 4: " << x4 << endl;
	cout << "Number 5: " << x5 << endl;
	cout << "Mean: " << x << endl;

	cout << "Standard deviation: " << standarDev(x1, x2, x3, x4, x5, x) << endl;

	return 0;


}