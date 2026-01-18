#include <iostream>
#include <clocale>

int main() {

	setlocale(LC_CTYPE, "rus");

	int	num;

	std::cout << "Введите число: " << std::endl;
	std::cin >> num;	
	std::cout << "Вы ввели: " << std::endl;
	std::cout << num << std::endl;

	return 0;
}