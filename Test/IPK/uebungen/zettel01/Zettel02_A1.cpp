#include <iostream>
#include <cmath>

int main ()
{		
	double a;
	double b;
	double c;
	double x1;
	double x2;
	
	//User wird mitgeteilt, was das Progrmm tut und bittet diesen, dass er die benötigte Funktion angibt.
	
	std::cout << "Es sollen nun die Nullstellen einer Funktion f(x)= a*x^2+b*x+c berechnet werden" << std::endl;
	
	std::cout << "Bitte geben sie a ein: " << std::flush;
	std::cin >> a;
	
	std::cout << "Bitte geben sie b ein: " << std::flush;
	std::cin >> b;
	
	std::cout << "Bitte geben sie c ein: " << std::flush;
	std::cin >> c;
	
	//Berechnung Nullstellen x1 und x2
	
	x1 = ((-1)*b + std::sqrt(b*b - 4*a*c))/(2*a);
	x2 = ((-1)*b - std::sqrt(b*b - 4*a*c))/(2*a);
	
	//Ausgabe der berechneten Werte
	if (x1 == 0 and x2 == 0)
	{
		std::cout << "Es existiert leider keine eindeutige Lösung" << std::endl; //Für eine eindeutige Lösung darf nicht a=b=0 gelten
	} else if (std::isnormal(x1) or std::isnormal(x2)) { //Checkt, bevor Ergebnis ausgeben wird, ob x1 und x2 Dezimalzahlen sind
		std::cout << "Die Lösung für x1 lautet " << x1 << " und für x2 " << x2 << "." <<std::endl;
	} else { //Wenn beide Abfragen oben nicht zutreffen, muss mindestens eine Nullstelle eine komplexe Zahl sein
		std::cout << "Die Lösung ist leider eine komplexe Zahl!" <<std::endl;
	}
	
	return 0;
}
