#include <algorithm>
#include <iostream>
using namespace std;


char color;
int number, number1, number2, score, res;
int color_of_card[5], number_of_card[5], cnt[10];


void Initialize()
{
    for (int i = 0; i < 10; i++) cnt[i] = 0;
}


int ColorToIndex(char color)
{
    switch (color) {
    case 'R': return 0;
    case 'B': return 1;
    case 'Y': return 2;
    case 'G': return 3;
    }
}


bool SameColor(int count)
{
    Initialize();

    for (int i = 0; i < 5; i++)
        cnt[color_of_card[i]]++;

    for (int col = 0; col <= 3; col++)
        if (cnt[col] == count)
            return true;

    return false;
}


bool SameNumber(int count)
{
    Initialize();

    for (int i = 0; i < 5; i++)
        cnt[number_of_card[i]]++;

    for (int num = 1; num <= 9; num++) {
        if (cnt[num] == count) {
            number = num;
            return true;
        }
    }

    return false;
}


bool SameNumber(int count1, int count2)
{
    Initialize();

    for (int i = 0; i < 5; i++)
        cnt[number_of_card[i]]++;

    number1 = number2 = 0;
    for (int num = 1; num <= 9; num++) {
        if (cnt[num] == count1 && number1 == 0) number1 = num;
        else if (cnt[num] == count2 && number2 == 0) number2 = num;
    }

    if (count1 == count2 && number1 < number2)
        swap(number1, number2);

    return number1 && number2 ? true : false;
}


bool ContinuousNumber(int count)
{
    Initialize();

    for (int i = 0; i < 5; i++)
        cnt[number_of_card[i]]++;

    int sum = 0;
    for (int num = 1; num <= 9; num++) {
        sum = (cnt[num] ? sum + 1 : 0);
        if (sum == count) {
            number = num;
            return true;
        }
    }

    return false;
}


int CalculateScore()
{
    if (SameColor(5) && ContinuousNumber(5)) {
        score = number + 900;
        if (score > res) res = score;
    }

    if (SameNumber(4)) {
        score = number + 800;
        if (score > res) res = score;
    }

    if (SameNumber(3, 2)) {
        score = number1 * 10 + number2 + 700;
        if (score > res) res = score;
    }

    if (SameColor(5)) {
        score = *max_element(number_of_card, number_of_card + 5) + 600;
        if (score > res) res = score;
    }

    if (ContinuousNumber(5)) {
        score = number + 500;
        if (score > res) res = score;
    }

    if (SameNumber(3)) {
        score = number + 400;
        if (score > res) res = score;
    }

    if (SameNumber(2, 2)) {
        score = number1 * 10 + number2 + 300;
        if (score > res) res = score;
    }

    if (SameNumber(2)) {
        score = number + 200;
        if (score > res) res = score;
    }

    if (res == 0)
        res = *max_element(number_of_card, number_of_card + 5) + 100;

    return res;
}


int main()
{
    for (int i = 0; i < 5; i++) {
        cin >> color >> number;
        color_of_card[i] = ColorToIndex(color);
        number_of_card[i] = number;
    }

    cout << CalculateScore();

    return 0;
}
