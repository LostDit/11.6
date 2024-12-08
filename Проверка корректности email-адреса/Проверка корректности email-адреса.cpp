#include <iostream>
#include <string>
#include<vector>
std::string WhiteList = "!#$%&'*+-/=?^_`{|}~";
using namespace std;
bool CheckMailBodyValid(string body) {
    return true;
}
bool CheckMailDomainValid(string domain) {
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
        
        if(email[i] == '.' && email[i+1] == '.'){
            return false;
        }

        if(email[i] == '@') {
            if(sobakaIndex == -1)
                sobakaIndex = i;
            else
                return false;
        }
    }

    return  CheckMailBodyValid(email.substr(0, sobakaIndex - 1)) && CheckMailDomainValid(email.substr(sobakaIndex + 1, email.length() - 1));

}

int main() {
    std::string email;
    std::cout << "Enter the email: ";
    getline(std::cin, email);
    CheckMailValid(email) ? std::cout << "Yes" : std::cout << "No";
}