#include <iostream>

int fn = 0;
int f1 = 1;
int f2 = 1;
int i;
int N;

int fibonacci(int number)
{
	while(i<N and N>0)
	{
		fn = f1 + f2;
		std::cout << fn << std::endl;
		f2 = fn;
		f1= fn-1;
		i++;
	}
	if (N=0)
	{
		fn = 0;
	}
	return 0;
}

int main()
{
	std::cout << "Bitte geben sie ein N ein: " << std::endl;
	std::cin >> N;
	fibonacci(N);
	return 0;
}
