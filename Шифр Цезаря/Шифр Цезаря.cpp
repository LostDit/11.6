#include <iostream>
#include <string>
std::string encrypt_caesar(std::string stroka) {
	int g;
	getline(std::cin, stroka);
	std::cout << "Code: ";
	std::cin >> g;
	for (int i = 0; i < stroka.length(); i++) {
		if ((stroka[i] >= 'A' && stroka[i]<='Z') || (stroka[i] >= 'a' && stroka[i]<='z')) {
			stroka[i] = (char)stroka[i] + g;
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