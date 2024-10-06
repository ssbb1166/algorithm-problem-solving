#include <iostream>
#include <set>
#include <string>
using namespace std;


int n, diff, cnt;
string word;
multiset<char> original, remain;
multiset<char>::iterator it;


int main()
{
    cin >> n >> word;

    for (char alphabet : word)
        original.insert(alphabet);

    for (int i = 1; i < n; i++) {
        cin >> word;

        diff = 0;
        remain = original;
        for (char alphabet : word) {
            it = remain.find(alphabet);
            if (it != remain.end())
                remain.erase(it);
            else
                diff++;
        }

        if (remain.size() + diff < 2 || remain.size() == 1 && diff == 1)
            cnt++;
    }

    cout << cnt;

    return 0;
}
