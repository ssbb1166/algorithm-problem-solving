#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;


int na, nb, elem;
vector<int> a, res;
map<int, bool> b;


int main()
{
    cin >> na >> nb;

    while (na--) {
        cin >> elem;
        a.push_back(elem);
    }

    while (nb--) {
        cin >> elem;
        b[elem] = true;
    }

    for (int elem : a)
        if (!b[elem])
            res.push_back(elem);

    sort(res.begin(), res.end());

    cout << res.size() << '\n';

    for (int elem : res)
        cout << elem << ' ';

    return 0;
}
