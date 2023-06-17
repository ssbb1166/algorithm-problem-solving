#include <iostream>
#include <string>
using namespace std;


string chant;


int main()
{
    cin >> chant;

    if (chant == "SONGDO")
        cout << "HIGHSCHOOL" << '\n';
    else if (chant == "CODE")
        cout << "MASTER" << '\n';
    else if (chant == "2023")
        cout << "0611" << '\n';
    else if (chant == "ALGORITHM")
        cout << "CONTEST" << '\n';

    return 0;
}
