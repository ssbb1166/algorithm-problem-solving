#include <iostream>
#include <string>
using namespace std;


int s, num;
string digits;


bool hor[10][3] = {
    {1, 0, 1},
    {0, 0, 0},
    {1, 1, 1},
    {1, 1, 1},
    {0, 1, 0},
    {1, 1, 1},
    {1, 1, 1},
    {1, 0, 0},
    {1, 1, 1},
    {1, 1, 1}
};


bool ver[10][4] = {
    {1, 1, 1, 1},
    {0, 1, 0, 1},
    {0, 1, 1, 0},
    {0, 1, 0, 1},
    {1, 1, 0, 1},
    {1, 0, 0, 1},
    {1, 0, 1, 1},
    {0, 1, 0, 1},
    {1, 1, 1, 1},
    {1, 1, 0, 1}
};


void PrintHorLine(int idx)
{
    for (char digit : digits) {
        num = digit - '0';
        cout << ' ';
        for (int i = 0; i < s; i++)
            cout << (hor[num][idx] ? '-' : ' ');
        cout << ' ';
        cout << ' ';
    }
    cout << '\n';
}


void PrintVerLine(int idx1, int idx2)
{
    for (char digit : digits) {
        num = digit - '0';
        cout << (ver[num][idx1] ? '|' : ' ');
        for (int i = 0; i < s; i++)
            cout << ' ';
        cout << (ver[num][idx2] ? '|' : ' ');
        cout << ' ';
    }
    cout << '\n';
}


int main()
{
    cin >> s >> digits;

    PrintHorLine(0);

    for (int i = 0; i < s; i++)
        PrintVerLine(0, 1);

    PrintHorLine(1);

    for (int i = 0; i < s; i++)
        PrintVerLine(2, 3);

    PrintHorLine(2);

    return 0;
}
