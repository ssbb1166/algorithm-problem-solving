#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Student
{
    string name;
    int kor, eng, mat;

public:
    Student(string name, int kor, int eng, int mat) : name(name), kor(kor), eng(eng), mat(mat) {}

    bool operator<(Student& student)
    {
        if (this->kor == student.kor && this->eng == student.eng && this->mat == student.mat)
            return this->name < student.name;
        else if (this->kor == student.kor && this->eng == student.eng)
            return this->mat > student.mat;
        else if (this->kor == student.kor)
            return this->eng < student.eng;
        else
            return this->kor > student.kor;
    }

    void PrintName()
    {
        cout << name << '\n';
    }
};


int n, kor, eng, mat;
string name;
vector<Student> students;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name >> kor >> eng >> mat;
        students.push_back(Student(name, kor, eng, mat));
    }

    sort(students.begin(), students.end());

    for (int i = 0; i < n; i++)
        students[i].PrintName();

    return 0;
}
