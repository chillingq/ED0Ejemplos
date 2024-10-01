#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona
{
public:
	Persona(int edad);
	~Persona();
	int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
	void generarDni();
	
private:
	int edad;
	bool genero; //0 hombre, 1 mujer
	char dni[10];

};

#endif // PERSONA_HPP
