#include <iostream>
#include <string>
using namespace std;


int n;
string seminar;


int main()
{
    cin >> n;

    while (n--) {
        cin >> seminar;
        if (seminar == "Algorithm")
            cout << "204" << '\n';
        if (seminar == "DataAnalysis")
            cout << "207" << '\n';
        if (seminar == "ArtificialIntelligence")
            cout << "302" << '\n';
        if (seminar == "CyberSecurity")
            cout << "B101" << '\n';
        if (seminar == "Network")
            cout << "303" << '\n';
        if (seminar == "Startup")
            cout << "501" << '\n';
        if (seminar == "TestStrategy")
            cout << "105" << '\n';
    }

    return 0;
}
