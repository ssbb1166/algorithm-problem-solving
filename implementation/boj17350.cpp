#include <iostream>
#include <string>
using namespace std;


int n, cnt;
string name;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        if (name == "anj") cnt++;
    }

    if (cnt)
        cout << "뭐야;" << '\n';
    else
        cout << "뭐야?" << '\n';

    return 0;
}
