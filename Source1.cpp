#include <iostream>
#include <clocale>

int main() {

	setlocale(LC_ALL, "");

	int	num{};

	std::wcout << L"Введите число:" << std::endl;
	std::wcin >> num;	
	std::wcout << L"Вы ввели:" << std::endl;
	std::wcout << num << std::endl;

	return 0;
}