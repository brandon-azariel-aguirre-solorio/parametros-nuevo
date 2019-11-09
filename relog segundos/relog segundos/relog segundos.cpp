#include <iostream>
#include <string>
using namespace std;
int main()
{
	int segundomasuno;
	int horas, segundos, minutos;
	cout << "Ingresa la hora en un formato de 24 horas: \n";
	cin >> horas;
	cout << "Ingresa la cantidad de minutos : \n";
	cin >> minutos;
	cout << "Ingresa la cantidad de segundos : \n";
	cin >> segundos;
	segundomasuno = segundos + 1;
	if (horas > 24)
	{
		cout << "Ingrese una hora en el formato de 24 horas ";
		return 0;

	}
    if (segundomasuno >= 60)
	{
	    minutos = minutos + 1;
		segundomasuno = 0;
	}
	if (minutos >= 60)
	{
		minutos = 0;
		horas = horas + 1;
	}

	cout << "La hora es " << horas << " con " << minutos << " minutos y " << segundomasuno << endl;
	return 0;
}
