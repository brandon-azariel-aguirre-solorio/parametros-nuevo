#include <iostream>
#include <string>
using namespace std;
//PARAMETROS POR REFERENCIAS 
//*sicnifica que es un puntero
void intercambio(int*, int*);
int main()
{
	int a, b;
	cout << "introduce el primer valor: \n";
	cin >> a;
	cout << "introduce el segundo valor: \n";
	cin >> b;
	cout << endl;
	cout << "Valor a vale: " << a << " Valor de b: " << b << endl;
	intercambio(&a, &b);
	cout << endl << "Despues del intercambio: " << endl << endl;
	cout << "Valor a vale: " << a << " Valor de b: " << b << endl;
	system("pause");
	return 0;
}
void intercambio(int* x,int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}