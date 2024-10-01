#include "Persona.hpp"
#include <ctime>
#include <cstdlib>


int main(int argc, char **argv)
{
	srand(time(0));

	
	for (int k=0; k<10; k++){
		Persona p(18+k);
		p.mostrar();
	
	}

	
	return 0;
}
