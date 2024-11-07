#include <iostream>
#include <string>

static std::string encrypt_caesar(std::string stroka) {

	std::cin >> stroka;
	for (int i = 0; i < stroka.length(); i++) {
		if (stroka[i] < 'A' && stroka[i]>'Z' || stroka[i] < 'a' && stroka[i]>'z') {
			
		}else
			stroka[i] = (char)stroka[i] + 3;
	}
	return stroka;
};

int main() {
	std::string stroka;
	stroka = encrypt_caesar(stroka);
	std::cout << stroka;
}