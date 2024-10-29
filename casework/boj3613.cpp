#include <iostream>
#include <string>
using namespace std;


string name;
bool error, capital, underbar;


bool IsCapital(char c)
{
    return c >= 'A' && c <= 'Z';
}


bool IsUnderbar(char c)
{
    return c == '_';
}


string CppToJava(string name)
{
    string res = "";

    for (char c : name) {
        if (IsUnderbar(c)) {
            capital = true;
            continue;
        }
        else if (capital) {
            res += toupper(c);
            capital = false;
        }
        else {
            res += c;
        }
    }

    return res;
}


string JavaToCpp(string name)
{
    string res = "";

    for (char c : name) {
        if (IsCapital(c)) {
            res += '_';
            res += tolower(c);
        }
        else {
            res += c;
        }
    }

    return res;
}


int main()
{
    cin >> name;

    if (IsCapital(name[0]) || IsUnderbar(name[0]) || IsUnderbar(name[name.length() - 1])) error = true;

    char prev_c = '\0';
    for (char c : name) {
        if (IsCapital(c)) capital = true;
        if (IsUnderbar(c)) underbar = true;
        if (IsUnderbar(prev_c) && IsUnderbar(c)) error = true;
        prev_c = c;
    }

    if (capital && underbar) error = true;

    if (!error && !underbar && !capital)
        cout << name;
    else if (!error && underbar)
        cout << CppToJava(name);
    else if (!error && capital)
        cout << JavaToCpp(name);
    else
        cout << "Error!";

    return 0;
}
