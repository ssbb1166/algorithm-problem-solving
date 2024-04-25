#include <iostream>
#include <queue>
using namespace std;


int n, dasom, vote, cnt;
priority_queue<int> votes;


int main()
{
    cin >> n >> dasom;

    for (int i = 1; i < n; i++) {
        cin >> vote;
        votes.push(vote);
    }

    while (n > 1 && votes.top() >= dasom) {
        vote = votes.top();
        votes.pop();
        dasom++, cnt++;
        votes.push(vote - 1);
    }

    cout << cnt << '\n';

    return 0;
}
