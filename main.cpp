#include <iostream>

#define MODE -1

#ifdef MODE
#if MODE == 1
int add(int a, int b) {
	return a + b;
}
#endif
#endif

int main()
{
#ifndef MODE
#error Value MODE doesn't initializated!
#endif
#ifdef MODE
#if MODE == 0
	std::cout << "Training mode";
#elif MODE == 1
	int a, b;
	std::cout << "Fight mode" << std::endl;
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;
	std::cout << "Amount: " << add(a, b);
#else
	std::cout << "Incorrect MODE value!";
#endif
#endif
}