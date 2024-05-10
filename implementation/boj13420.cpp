#include <iostream>
using namespace std;


int t;
char op, eq;
bool answer;
long long int a, b, c;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        scanf("%lld %c %lld %c %lld", &a, &op, &b, &eq, & c);

        answer = false;
        switch (op) {
        case '+':
            if (a + b == c) answer = true;
            break;
        case '-':
            if (a - b == c) answer = true;
            break;
        case '*':
            if (a * b == c) answer = true;
            break;
        case '/':
            if (a / b == c) answer = true;
            break;
        }

        if (answer)
            cout << "correct" << '\n';
        else
            cout << "wrong answer" << '\n';
    }

    return 0;
}
