#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string moves;
bool cup[3] = { 1, 0, 0 };


int main()
{
    cin >> moves;

    for (char move : moves) {
        switch (move) {
        case 'A': swap(cup[0], cup[1]); break;
        case 'B': swap(cup[1], cup[2]); break;
        case 'C': swap(cup[0], cup[2]); break;
        }
    }

    for (int i = 0; i < 3; i++)
        if (cup[i]) cout << i + 1;

    return 0;
}
