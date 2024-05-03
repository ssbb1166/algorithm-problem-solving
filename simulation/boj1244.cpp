#include <iostream>
using namespace std;


int num_of_switch, state[101];
int num_of_student, sex, num;


int main()
{
    cin >> num_of_switch;

    for (int i = 1; i <= num_of_switch; i++)
        cin >> state[i];

    cin >> num_of_student;

    for (int i = 1; i <= num_of_student; i++) {
        cin >> sex >> num;
        switch (sex) {
        case 1:
            for (int j = 1; j <= num_of_switch; j++)
                if (j % num == 0)
                    state[j] = state[j] ? 0 : 1;
            break;
        case 2:
            state[num] = state[num] ? 0 : 1;
            for (int j = 1; j <= num_of_switch / 2; j++) {
                if (num - j < 1 || num + j > num_of_switch ||
                    state[num - j] != state[num + j])
                    break;
                state[num - j] = state[num - j] ? 0 : 1;
                state[num + j] = state[num + j] ? 0 : 1;
            }
            break;
        }
    }

    for (int i = 0; i <= (num_of_switch - 1) / 20; i++) {
        for (int j = 1; j <= 20 && i * 20 + j <= num_of_switch; j++)
            cout << state[i * 20 + j] << ' ';
        cout << '\n';
    }

    return 0;
}
