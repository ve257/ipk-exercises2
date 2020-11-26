#include <iostream>

int q;
int n;
int p=1;

namespace power {
	int rekursive(int q, int n)
	{
		if (n>0) {
			p= p*q;
			rekursive(q, n-1);
		}
		std::cout << p << std::endl;
		return 0;
	}
}

int main(int argc, char** argv)
{
	std::cout << "Geben Sie q ein: " << std::flush;
	std::cin >> q;
	std::cout << "Geben Sie n ein: " << std::flush;
	std::cin >> n;
	return 0;
}
	
