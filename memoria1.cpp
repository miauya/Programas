#include <iostream>
using namespace std;
int main(){
	int var = 5;
	int* pointVar;
	pointVar = &var;
	cout<<"var = "<<var<<endl;
	cout<<"Direcci�n de la variable var (&var) = "<<&var<<endl<<endl;
	cout<<"Apuntador pointVar = "<<pointVar<<endl<<endl;
	cout<<"Cambia el valor de var a 7:"<<endl<<endl;
	var=7;
	cout<<"var = "<<var<<endl<<endl;
	cout<<"pointVar = "<< *pointVar<<endl<<endl;
	cout<<"Cambia el valor de *pointVar a 16:"<<endl;
	*pointVar=16;
	cout<<"var = "<<var<<endl<<endl;
	cout<<"Apuntador pointVar = "<<pointVar<<endl;
	cout<<"*pointVar = "<< *pointVar<<endl;
	cout<<"var = "<<var<<endl<<endl;
	
	return 0;
}
