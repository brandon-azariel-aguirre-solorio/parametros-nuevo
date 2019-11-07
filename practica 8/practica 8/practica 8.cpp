#include <string>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float salario,sueldoincrementado,incremento;

	cout << "Bienbenido maestro cual es su salario? \n";
	cin >> salario;
	if (salario < 8000)
	{
		sueldoincrementado = salario * 0.12 + salario;
		incremento = 12;
	}
	else if (8000 <= salario <= 15000)
	{
		sueldoincrementado = salario * 0.08 + salario;
		incremento = 8;
	}
	else if (15000 < salario <=20000)
	{
		sueldoincrementado = salario * 0.07 + salario;
		incremento = 7;
	}
	else if (25000 < salario)
	{
		sueldoincrementado = salario * 0.06 + salario;
		incremento = 6;
	}
	cout << "El salario final con el incremento del " << incremento << "% es igual a " << sueldoincrementado;
	return 0;
}

