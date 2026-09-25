#include "iostream"
using namespace std;
//prototipo de funciones
	float sum(float a, float b);
	float rest(float a, float b);
	float mult(float a, float  b);
	float div(float a, float  b);
int main(){
	//Declaracion de variables 
	float n1, n2, sumr, restr, multr, divr; 
	//Solicitamos los numeros 
	cout << "Ingrese numeros de 0 a 100: " "\n";
	cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    //validar que el numero sea entero antes de seguir 
    if (n1, n2 !=0 and n1, n2 <=100){
	
		//llamamos a la funcion de suma y guardamos en sumr
		sumr=sum(n1,n2);
		cout<<"La suma de: " <<n1<<" y " <<n2;
		cout<<" es: "<<sumr<<endl;
		//llamamos a la funcion de resta y guardamos en restr 
		restr=rest(n1,n2);
		cout<<"La resta de: " <<n1<<" y " <<n2;
		cout<<" es: "<<restr<<endl;
		//llamamos a la funcion de Multiplicacion y guardamos en multr 
		multr=mult(n1,n2);
		cout<<"La Multiplicacion de: " <<n1<<" y " <<n2;
		cout<<" es: "<<multr<<endl;
		multr=mult(n1,n2);
		//llamamos a la funcion de Multiplicacion y guardamos en divr 
		cout<<"La Division de: " <<n1<<" y " <<n2;
		cout<<" es: "<<divr<<endl;
		system("PAUSE");
	}
	 else {
	cout<< "Valor Invalido";
}
}

float sum(float a, float b){
	return a+b;
}
float rest(float a, float b){
	return a-b;
}
float mult(float a, float b){
	return a*b;
}
float divr(float a, float b){
	return a/b;
}
