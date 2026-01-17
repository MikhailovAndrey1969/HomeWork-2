#include <iostream>
#include <string>
#include <Windows.h>

int main() {

	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string	str{};

	std::cout << "Введите слово:" << std::endl;
	std::getline(std::cin, str);
	std::cout << "Вы ввели:" << std::endl;
	std::cout << str << std::endl;

	return 0;
}
 