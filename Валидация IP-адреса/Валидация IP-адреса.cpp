#include <iostream>
#include <string>

bool _tochka(std::string ipvalidation, bool tochka) {
	int t = 0;
	for (int i = 0; i < ipvalidation.length() && tochka == true; i++) {
		if (ipvalidation[i] == '.') {
			t++;
		}else continue;
	} if (ipvalidation[0] == '.') {
		tochka = false;
	}else if (t == 3) {
		tochka = true;
	}else tochka = false;
	return tochka;
}

bool _digit(std::string ipvalidation, bool digit) {
	for (int i = 0; i < ipvalidation.length()&&digit==true;i++) {
		if (ipvalidation[i] > '9' || ipvalidation[i] < '0') {
			if (ipvalidation[i] == '.') {
				digit = true;
				continue;
			}digit = false;
			continue;
		}
	}
	return digit;
}
bool _sizedigits(std::string ipvalidation, bool sizedigits) {
	bool chekdigitssize = true;std::string sizedi; int sd = 0;
	chekdigitssize = _digit(ipvalidation, chekdigitssize);
	for (int i = 0; i < ipvalidation.length() && sizedigits == true;i++) {
		if (ipvalidation[i] == '.') {
			sd = stoi(sizedi);
			
			if (sd < 0 || sd>=256) {
				sizedigits = false;
				continue;
			}else sizedi = "";
			
			continue;                                           
		}else if (chekdigitssize == true) {
			sizedi += ipvalidation[i];
		}
	
	}
	return sizedigits;
}

bool _valid(std::string ipvalidation, bool valid) {
	valid = _digit(ipvalidation, valid)&&_tochka(ipvalidation,valid)&&_sizedigits(ipvalidation,valid);
	return valid;
}
int main() {
	std::string ipvalidation;bool valid = true;
	std::cout << "Enter the IPv4: ";
	getline(std::cin, ipvalidation);
	valid = _valid(ipvalidation, valid);
	valid == true ? std::cout << "Valid" : std::cout << "Invalid";

}
