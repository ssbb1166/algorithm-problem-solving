#include <iostream>
#include <string>
using namespace std;


string form;


int main()
{
    getline(cin, form);

    if (form[0] + form[4] - '0' == form[8])
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}
