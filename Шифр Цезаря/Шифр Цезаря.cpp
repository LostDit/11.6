//Корректность работы программы по созданию зашифрованной версии слова или текста.

#include <iostream>
#include <string>
std::string encrypt_caesar(std::string stroka) {
	int g;
	getline(std::cin, stroka);
	std::cout << "Code: ";
	std::cin >> g;
	for (int i = 0; i < stroka.length(); i++) {
		if ((stroka[i] >= 'A' && stroka[i] <= 'Z') || (stroka[i] >= 'a' && stroka[i] <= 'z')) {
			if (stroka[i] <= 'Z') {
				
				stroka[i] = 65+(stroka[i] - 65 + g) % 26;
			
			}else {
				stroka[i] = 97+(stroka[i] - 97 + g) % 26;
			}
		}

	}
	return stroka;
};

int main() {
	std::string stroka;
	std::cout << "Enter the text: ";
	stroka = encrypt_caesar(stroka);
	std::cout << stroka;
}