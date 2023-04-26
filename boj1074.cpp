#include <iostream>
using namespace std;


int n, r, c, pivot, area, cnt, power[31] = { 1 };


int main()
{
    cin >> n >> r >> c;

    // 2의 거듭제곱수 배열
    for (int i = 1; i <= 30; i++)
        power[i] = power[i - 1] << 1;

    // n을 1씩 줄이면서 범위 좁히기
    while (n > 0) {
        pivot = power[n - 1];
        area = power[n << 1] >> 2;

        // 첫 번째 방문 영역
        if (r < pivot && c < pivot) {
            cnt += area * 0;
        }

        // 두 번째 방문 영역
        if (r < pivot && c >= pivot) {
            cnt += area * 1;
            c -= pivot;
        }

        // 세 번째 방문 영역
        if (r >= pivot && c < pivot) {
            cnt += area * 2;
            r -= pivot;
        }

        // 네 번째 방문 영역
        if (r >= pivot && c >= pivot) {
            cnt += area * 3;
            r -= pivot;
            c -= pivot;
        }

        n--;
    }

    cout << cnt << '\n';

    return 0;
}
