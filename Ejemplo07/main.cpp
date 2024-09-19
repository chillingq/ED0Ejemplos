#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	char c;
	bool test;
	cout << "Por favor pulse teclas numericas. Acabe pulsando ESP + ENTER, muchas grasias\n";
	do {
		c = getchar();
		test = ((c >= '0') && (c <= '9'));
		if (test){
			cout << c << " pulsado.\n";
		}
		} while (c != 32); //el esc no me funciona por algún motivo
	
	return 0;
}
