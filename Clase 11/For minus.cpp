#include <iostream>

using namespace std;

int main() {
		char c;
    	cout << "Ingresa caracteres hasta que sea una vocal minuscula (a, e, i, o, u):\n";
    for ( ; ; ) {
        cout << "Ingresa un caracter: ";
        cin >> c;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cout << "La vocal minuscula es: " << c << "\n\n";
            break;
        } else {
            cout << "Error Sigue intentando.\n";
    }
    }
   return 0;
}
