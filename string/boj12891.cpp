#include <iostream>
#include <map>
#include <string>
using namespace std;


int s, p, res;
string dna;
char base[4] = { 'A', 'C', 'G', 'T' };
map<char, int> min_cnt, cnt;


int main()
{
    cin >> s >> p >> dna;

    for (int i = 0; i < 4; i++)
        cin >> min_cnt[base[i]];

    for (int i = 0; i < p; i++)
        cnt[dna[i]]++;

    for (int i = 0; i <= s - p; i++) {
        if (cnt['A'] >= min_cnt['A'] &&
            cnt['C'] >= min_cnt['C'] &&
            cnt['G'] >= min_cnt['G'] &&
            cnt['T'] >= min_cnt['T'])
            res++;
        cnt[dna[i]]--;
        cnt[dna[i + p]]++;
    }

    cout << res << '\n';

    return 0;
}
