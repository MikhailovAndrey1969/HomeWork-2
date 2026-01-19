#include <iostream>
#include <string>
//#include <Windows.h>
#include <clocale>

int main() {

	//setlocale(LC_CTYPE, "rus"); 
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);  
	
	std::setlocale(LC_ALL, "");		
	std::wcin.imbue(std::locale("rus_rus.866"));
			
	std::wstring	str{};

	std::wcout << L"Введите слово:" << std::endl;
	std::getline(std::wcin, str);
	std::wcout << L"Вы ввели:" << std::endl;
	std::wcout << str << std::endl;
		
	return 0;
}
 