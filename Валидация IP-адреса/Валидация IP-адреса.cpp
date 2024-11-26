#include <iostream>
#include <string>
bool _digit(std::string ipvalidation, bool valid) { //проверка на то что только цифры в строке
	for (int i = 0; i < ipvalidation.length() && valid == true; i++) {
		if (ipvalidation[i] < '0' || ipvalidation[i]>'9'){
			ipvalidation[i] == '.' ? valid = true : valid = false;
			continue;
		}else valid = true;
	}
	return valid;
};
bool _lengthdigit(std::string ipvalidation,bool lengthdigit) { //проверка на длину цифр между точками
	for (int i = 0; i < ipvalidation.length()&& lengthdigit == true; i++) {
		

	}
};
bool _tochka(std::string ipvalidation, bool tochka) { //проверка на точки
	int tochka = 0;
	for (int i = 0; i < ipvalidation.length() && tochka == true; i++) {
		if (ipvalidation[i] == '.'&&tochka>3) {
			tochka = false;
			continue;
		}else if (ipvalidation[i] == '.') {
			tochka++;
		}else if (ipvalidation[i]=='.') {

		}else tochka = true;
	}
	return tochka;
};
bool _valid(std::string ipvalidation,bool valid) {
	bool tochka = true, lengthdigit =true;
	valid = _digit(ipvalidation, valid);	//проверка на то что только цифры в строке
	tochka = _tochka(ipvalidation, tochka);	//проверка на точки
	lengthdigit = _lengthdigit(ipvalidation, lengthdigit);	//проверка на длину цифр между точками
	return valid;
};
int main() {
	std::string ipvalidation;
	bool valid = true;
	std::cout << "Enter IPv4: ";
	getline(std::cin, ipvalidation);
	valid = _valid(ipvalidation, valid);
	valid == true ? std::cout << "Valid" : std::cout << "Invalid";
}