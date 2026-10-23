#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct person {
    string nombre;
    int ataque;
};

int main() {
    person p1;
    person p2;
    
    p1.nombre = "Kung Lao";
    p1.ataque = 101;
    
    p2.nombre = "Liu Kang";
    p2.ataque = 100;
    
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Puntos de Ataque: " << p1.ataque << endl;
    
    cout << "Nombre: " << p2.nombre << endl;
    cout << "Puntos de Ataque: " << p2.ataque << endl;
    
    if (p1.ataque > p2.ataque) {
        cout << "El mas fuerte es: " << p1.nombre << endl;
    } 
    else if (p2.ataque > p1.ataque) {
        cout << "El mas fuerte es: " << p2.nombre << endl;
    } 
    else {
        cout << "Chupala Mati" << endl;
    }
    
    return 0;
}
