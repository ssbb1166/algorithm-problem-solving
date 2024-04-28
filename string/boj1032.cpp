#include <iostream>
#include <string>
using namespace std;


int n, len;
string filename;


int main()
{
    cin >> n >> filename;
    len = filename.size();

    for (int i = 1; i < n; i++) {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < len; j++)
            if (tmp[j] != filename[j])
                filename[j] = '?';
    }

    cout << filename << '\n';

    return 0;
}
