#include <iostream>
#include <string>
using namespace std;
int main()
{
	float a, b, c;
	cout << "ingresa el primer valor: \n";
	cin >> a;
	cout << "ingresa el segundo valor: \n";
	cin >> b;
	cout << "ingresa el tercer valor \n";
	cin >> c;
	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
			{
				cout << a << " es el  valor mayor que " << b << " y el menor es " << c;
			}
			else if (b >= c)
			{
				cout << a << " es el  valor mayor que " << b << "y " << c << " que valen lo mismo";
			}
			else
			{
				cout << a << " es el  valor mayor que " << c << " y el menor es " << b;
			}
		}
		else
		{
			cout << c << " es el  valor mayor que " << a << " y el menor es " << b;
		}

	}
	else
	{
		if (b > c)
		{
			if (a > c)
			{
				cout << b << " es el  valor mayor que " << a << " y el menor es " << c;
			}
		    else if (a>=c)
			{
				cout << b << " es el  valor mayor que " << a << " y " << c << " que valen lo mismo";
			}
			else
			{
				cout << b << " es el  valor mayor que " << c << " y el menor es " << a;
			}
		}
		else if (c > b && a >= b)
		{
			cout << c << " es el  valor mayor que " << b << " y " << a << " valen lo mismo";
		}
		else
		{
			cout << c << " es el  valor mayor que " << b << " y el menor es " << a;
		}

	}
	return 0;
}

