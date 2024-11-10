#include <iostream>
std::string valid_characters(std::string symbols) {
	symbols = '!', '#', '$', '%', '*', '+', '-', '/', '=', '?', '^', '_', '`', '{', '|', '}', '~';
	for (int i = 0; i < symbols.length(); i++) {
	
	
	};
};

std::string correctness_of_the_input(std::string stroka) {
	bool final = true, validate = true;
	while (final) {
		system("cls");
		validate == true ? std::cout << "Enter your email address: " : std::cout << "Error re-enter email: ";
		std::cin >> stroka;
		for (int i = 0; i < stroka.length() && validate == true; i++) {
			if (stroka[i] == '@' && stroka.length() < 1) {
				validate = false;
			}

		}
	}
	return stroka;
};


int main() {
	std::string stroka;
	stroka = correctness_of_the_input(stroka);
	
}