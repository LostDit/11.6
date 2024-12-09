//Корректные результаты валидации адресов электронной почты. Должны устанавливаться как валидные адреса, так и невалидные.
#include <iostream>
#include <string>
using namespace std;

bool ValidString(string body, string WhiteList, int maxlen) {

    if (body.length() > maxlen || body.length() == 0)
        return false;

    for (int i = 0; i < body.length(); i++) {
        if (!((body[i] >= '0' && body[i] <= '9') || (body[i] >= 'a' && body[i] <= 'z') || (body[i] >= 'A' && body[i] <= 'Z'))) {
            bool IsCorect = false;
            for (int j = 0; j < WhiteList.length(); j++) {
                if (body[i] == WhiteList[j])
                {
                    IsCorect = true;
                    break;
                }
            }
            if (!IsCorect)
            {
                return false;
            }
        }
    }
    return true;
}

bool CheckMailValid(std::string email) {

    std::string BodyValid, DomainValid;
    int sobakaIndex = -1;
    bool isdotfind = false;

    if (email[0] == '.' && email[email.length() - 1] == '.')
        return false;
    if (email[0] == '@' && email[email.length() - 1] == '@')
        return false;
    for (int i = 0; i < email.length() - 1; i++) {

        if (email[i] == '.' && email[i + 1] == '.') {
            return false;
        }

        if (email[i] == '@') {
            if (sobakaIndex == -1)
                sobakaIndex = i;
            else
                return false;
        }
    }
    if (sobakaIndex == -1) {
        return false;
    }
    return  ValidString(email.substr(0, sobakaIndex), "!#$%&'*+-/=?^_`{|}~.", 64) && ValidString(email.substr(sobakaIndex + 1, email.length() - 1), ".-", 63);

}

int main() {
    std::string email;
    while (true) {
        std::cout << "Enter the email: ";
        getline(std::cin, email);
        system("cls");
        std::cout << email << "\n";
        CheckMailValid(email) ? std::cout << "Yes\n" : std::cout << "No\n";
    }
}