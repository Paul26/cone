#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double V;
	double S;
	double r;
	double h;

	cout << "Please enter a radius: " << endl;
	cin >> r;

	cout << "Please enter a height: " << endl;
	cin >> h;

	V = 1.0 / 3.0 * M_PI * pow(r, 2) * h;
	S = M_PI * r * sqrt(pow(r, 2) + pow(h, 2)) + M_PI * pow(r, 2);

	cout << "The volume is: " << V << endl;
	cout << "The surface area is: " << S << endl;

	//system("pause");
	return 0;
}