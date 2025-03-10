#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int n, m;
string site, pw;
unordered_map<string, string> password;


int main()
{
    cin >> n >> m;

    while (n--) {
        cin >> site >> pw;
        password[site] = pw;
    }

    while (m--) {
        cin >> site;
        cout << password[site] << '\n';
    }

    return 0;
}
