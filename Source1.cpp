#include <iostream>
#include <clocale>

int main() {

	setlocale(LC_CTYPE, "rus");

	double	num{};

	std::cout << "Ââåäèòå ÷èñëî: " << std::endl;
	std::cin >> num;	
	std::cout << "Âû ââåëè: " << std::endl;
	std::cout << num << std::endl;

	return 0;

}
