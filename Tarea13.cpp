#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Definimos 
struct Person {
    string nombre;
    int vida;
    int ataque;
};
int main() {
    int opcion = 0;
    do {
        cout << "   SISTEMA DE REGISTRO DE PERSONAJES     " << endl;
        cout << "1 Registrar nuevo personaje" << endl;
        cout << "2 Ver los personajes guardados" << endl;
        cout << "3 Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();
        if (opcion == 1) {
            ofstream archivo("personaje.txt", ios::app);
            // Validacion open
            if (!archivo.is_open()) {
                cout << "\n error No se pudo abrir el archivo personaje.txt para escritura." << endl;
            } else {
                Person p;
                cout << "\n-- Registrar Nuevo Personaje --" << endl;
                cout << "Ingrese el nombre del personaje: ";
                getline(cin, p.nombre);
                cout << "Ingrese los puntos de vida de " << p.nombre << ": ";
                cin >> p.vida;
                cout << "Ingrese los puntos de ataque de " << p.nombre << ": ";
                cin >> p.ataque;
                // Limpiar memoria
                cin.ignore();
                // Guardar los datos
                archivo << p.nombre << endl;
                archivo << p.vida << endl;
                archivo << p.ataque << endl;
                // Cierre
                archivo.close();
                cout << "\nPersonaje '" << p.nombre << "' guardado en personaje.txt" << endl;
            }
        } else if (opcion == 2) {
            //VER PERSONAJES
            ifstream archivo("personajes.txt");
            //Val
            if (!archivo.is_open()) {
                cout << "\n No existe el archivo personaje.txt o no se pudo abrir. Registre un personaje primero." << endl;
            } else {
                Person p;
                int contador = 0;
                cout << "LISTA DE PERSONAJES" << endl;
                while (getline(archivo, p.nombre)) {
                    if (archivo >> p.vida >> p.ataque) {
                        archivo.ignore(); // Limpiar
                        contador++;
                        cout << contador << ". Nombre: " << p.nombre 
                             << " | Vida: " << p.vida 
                             << " | Ataque: " << p.ataque << endl;
                    }
                }
                if (contador == 0) {
                    cout << "El archivo no contiene registros de personajes." << endl;
                } 
                // Cierre
                archivo.close();
            }

        } else if (opcion == 3) {
            cout << "\n¡Saliendo del programa...!" << endl;
        } else {
            cout << "\nOpción no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 3);

    return 0;
}
