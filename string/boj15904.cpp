#include <iostream>
#include <string>
using namespace std;


string str, res;


int main()
{
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'U' && res.size() == 0 ||
            str[i] == 'C' && res.size() == 1 ||
            str[i] == 'P' && res.size() == 2 ||
            str[i] == 'C' && res.size() == 3)
            res += str[i];
    }

    if (res == "UCPC")
        cout << "I love UCPC" << '\n';
    else
        cout << "I hate UCPC" << '\n';

    return 0;
}
