#include <iostream>
#include <string>
using namespace std;


string sound;


int main()
{
    getline(cin, sound);

    if (sound == "1 2 3 4 5 6 7 8")
        cout << "ascending" << '\n';
    else if (sound == "8 7 6 5 4 3 2 1")
        cout << "descending" << '\n';
    else
        cout << "mixed" << '\n';
    
    return 0;
}
