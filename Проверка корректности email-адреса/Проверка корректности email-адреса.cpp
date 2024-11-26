#include <iostream>
#include <string>
//bool the_firs_part(bool part1,std::string email) {
//    int g = 0;
//    for (int i = 0; i < email.length(); i++) {
//        if ((email[i] = '@'&&g<1)||(email[i] = '@'&&g>64)) {
//          
//        }
//        else g++;
//    }
//
//}
bool english_letters(bool letters, std::string email) {
    for (int i = 0; i < email.length(); i++) {
        if ((email[i] >= 'a' && email[i] <= 'z') || (email[i] >= 'A' && email[i] <= 'Z')) {
            letters = true;
        }
        else letters = false;
    }
    return letters;
};

bool simbol(bool simbol,std::string email) {
    int tochka = 0;
    for (int i = 0; i < email.length()&&simbol==true; i++) {
        if (email[i] == '.' && tochka < 1) {
            tochka++;
            if(tochka>1){
                simbol = false;
            }
        }if (email[i] == '!' || email[i] == '#' || email[i] == '$' || email[i] == '%' || email[i] == '&' || email[i] == '\'' || email[i] == '*' || email[i] == '+' || email[i] == '-' || email[i] == '/' || email[i] == '=' || email[i] == '?' || email[i] == '^' || email[i] == '_' || email[i] == '`' || email[i] == '{' || email[i] == '|' || email[i] == '}' || email[i] == '~'|| email[i] == '.') {
            simbol = true;
        }
    }
    return simbol;
};

bool is_valid(std::string email) {
    bool letters_ = true, simbol_ = true, validate;
    letters_ = english_letters(letters_, email);
    simbol_ = simbol(simbol_, email);
    simbol_ == true && letters_ == true ? validate = true : validate = false;

    return validate;
};


int main()  {
    std::string email;
    std::cout << "Enter your email address: ";
    getline(std::cin, email);

    bool validate = is_valid(email);

    if (validate) {
        std::cout << "Yes\n";
    }else {
        std::cout << "No\n";
    }

    return 0;
}