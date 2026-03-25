#include <iostream>
#include <locale.h>
using namespace std;

double calcularMedia(double numero1, double numero2) {
	double media = (numero1 + numero2)/2;
	return media;
	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	double valor1 = 5.5;
	double valor2 = 7.0;
	
	double resultado = calcularMedia(valor1, valor2);
	cout << "A média de " << valor1 << " e " << valor2 << " é " << resultado << endl;
	return 0;
}
