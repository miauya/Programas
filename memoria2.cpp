#include <iostream>
using namespace std;

int main (){
	int edades[] = { 18, 20, 14, 28, 30 ,32};
	int *ptr;
	ptr = edades;
	
	cout << "Trabajo con enteros:]" << endl << endl;
	cout << "La direcci�n del primer elemento es:" <<edades << endl;
	cout << "El valor del primer elemento es:" << edades << endl << endl;
	
	cout << "La direcci�n del segundo elemento es:" << edades+1 << endl;
	cout << "El valor del segundo elemento es:" << *(edades+1) << endl << endl;
	
	cout << "La direcci�n del tercer elemento es:" << edades+2 << endl;
	cout << "El valor del tercer elemento es:" << *(edades+2) << endl << endl;
	
	cout << "La direcci�n del cuarto elemento es:" << edades+3 << endl;
	cout << "El valor del cuarto elemento es:" << *(edades+3) << endl << endl;
	
	cout << "La direcci�n del quinto elemento es:" << edades+4 << endl;
	cout << "El valor del sexto elemento es:" << *(edades+4) << endl << endl;
	
	cout << "La direcci�n del sexto elemento es:" << edades+5 << endl;
	cout << "El valor del sexto elemento es:" << *(edades+5) << endl << endl;
	
	return 0;
}
