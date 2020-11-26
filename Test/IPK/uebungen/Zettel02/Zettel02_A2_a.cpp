#include <iostream>

int q;
int n;
int p=1;

namespace power {
	int iterative (int q, int n)
	{
		for (int i = 1; i <= n; i++) {
        p =  p * q;
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
	power::iterative(q,n);
	return 0;
}
	
