/*
beecrowd | 2253
Passwords Validator

By Gustavo Marmentini, URI BR Brazil
Timelimit: 1

Rolien and Naej are the developers of a big programming portal. To help the new
site registration system, they requested your help. Your job is write a code that
validates passwords that are registered on the portal, for that you should be 
aware for the following requirements:
  - The password must contain at least one uppercase letter, one lowercase letter
    and a number;
  - It can’t have any punctuation character, accent or space;
  - Moreover, the password must be 6 to 32 characters.

Input
The input contains several test cases and ends with EOF. Each line has a string
S, corresponding to the password that is entered by the user at registration.

Output
The output contains a line, which can be "Senha valida.", if the password has
all previously requested requirements, or "Senha invalida.", if one or more 
requirements aren’t met.
*/
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string pwd;
    bool validSize, hasLower, hasUpper, hasNumber;
    string valid = "Senha valida.";
    string invalid = "Senha invalida.";

    while (getline(cin, pwd)) {
        hasLower = false;
        hasUpper = false;
        hasNumber = false;

        if (!(pwd.size() >= 6 && pwd.size() <= 32 )) goto invalid;
        
        for (char c : pwd) {
            if (!isalnum(c)) goto invalid;

            if (isupper(c)) hasUpper = true;
            if (islower(c)) hasLower = true;
            if (isdigit(c)) hasNumber = true;
        }

        if (hasUpper && hasLower && hasNumber) {
            cout << valid << endl;
        } else {
            invalid:
            cout << invalid << endl;
        }
    }
    
	return 0;
}
