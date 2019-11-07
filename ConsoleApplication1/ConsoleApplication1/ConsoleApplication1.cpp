#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	float x, y;
	cout << "ingrese el primer valor: \n";
	cin >> x;
	if (x < 0 || x > 50)
	{
		y = 0;
	}
	else if (x <= 10)
	{
		y = 4 / x;
	}
	else if (x <= 25)
	{
		y = pow(x, 3) + pow(x, 3) - 18;
	}
	cout << "x vale: " << x << " " <<"y vale: "<<  y;
}
