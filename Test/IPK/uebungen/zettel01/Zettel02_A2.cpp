#include <iostream>

int number;
int i = 1;

void collatz(int number)
{	
	while (number != (1 or 0 or -1 or -5 or -17)) { //Abbruchbedingung 
		if (number%2 == 0) {
			number = number/2;
			std::cout << i << ". " << "Schritt: " << number << std::endl; //Keine Funktion, bloß optisch ansprechender.
			i++; //Hochzählen der Zählvariable i.
		}
		else {
			number = (number*3) + 1;
			std::cout << i << ". "  << "Schritt: " <<number << std::endl; //Keine Funktion, bloß optisch ansprechender.
			i++;
		}
	}
	std::cout << "Endresultat: " << number << std::endl; //Ausgabe von number, wenn Abbruchbedingung erfüllt.
}

int main()
{
	std::cout << "Geben Sie bitte eine Zahl ein: " << std::endl; //Input des Users.
	std::cin >> number;
	
	collatz(number); //Ausführung der Funktion.
	
	return 0;
}
