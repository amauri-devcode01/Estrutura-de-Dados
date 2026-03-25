#include <iostream>
using namespace std;

int somarVetores (int valores[]){
	int total;
	for (int i = 0; i < 5; i++){
		total += valores[i];
	}
	return total;
	
}

int main() {
	int total;
	int vector [5]= {1, 1, 1, 1, 2};
	int resultado = somarVetores(vector);
	
	cout << resultado << endl;
}

