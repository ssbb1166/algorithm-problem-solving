#include <iostream>
#include <string>
using namespace std;


string line;


int main()
{
    while (getline(cin, line))
        cout << line << '\n';

    return 0;
}
