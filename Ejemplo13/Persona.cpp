#include "Persona.hpp"
using namespace std;

Persona::Persona(int edad)
{
    this->edad = edad;
    generarDni();
	this->genero = rand() % 2;
}

int Persona ::getEdad() { return this->edad; }

bool Persona ::esMujer() { return this->genero; }

void Persona ::setEdad(int edad) { this->edad = edad; }

void Persona ::mostrar()
{

    cout << "Edad: " << this->edad << endl;
    cout << "Genero: " << this->genero << endl;
    cout << "DNI: " << this->dni << endl;
}

void Persona::generarDni() {
    const char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < 8; i++) {
        dni[i] = '0' + rand() % 10; // Genera números del 0 al 9
    }
    dni[8] = letras[rand() % 26]; // Letra aleatoria
    dni[9] = '\0'; // Asegura que el arreglo sea una cadena de caracteres válida
}
Persona::~Persona() {}
