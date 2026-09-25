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
	cout << "Ingrese numeros de 0 a 100 " "\n";
	cout << "Ingrese el primer numero: ";
    cin >> n1;
    //validar que el numero sea entero antes de segui
    if (n1 >0 && n1<=100) {
    	cout << "Ingrese el segundo numero: ";
   		 cin >> n2;
		//llamamos a la funcion de suma y guardamos en sumr
		sumr=sum(n1,n2);
		cout<<"Suma: "<<sumr<<endl;
		
		//llamamos a la funcion de resta y guardamos en restr 
		restr=rest(n1,n2);
		cout<<"Resta: "<<restr<<endl;
		
		//llamamos a la funcion de Multiplicacion y guardamos en multr 
		multr=mult(n1,n2);
		cout<<"Multiplicacion: "<<multr<<endl;
		
		//llamamos a la funcion de Division y guardamos en divr 
		divr=div(n1,n2);
		cout<<"Division: "<<divr<<endl;
		return 0;
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
float div
(float a, float b){
	return a/b;
}
