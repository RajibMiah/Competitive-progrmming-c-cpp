#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846264338327951
class Student {
public:
    string name;
    string cls;
    string section;
    int id;

    Student(string name, string cls, string section, int id) {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
    }
};

void Reverse(vector<Student> &students) {
    int n = students.size();
    for (int i = 0; i < n / 2; i++) {
        swap(students[i].id, students[n - 1 - i].id);
    }
}

int main() {
    int ttt;
    cin >> ttt;
    vector<Student> students;

    while(ttt--) {
        string name, cls, section;
        int id;
        cin >> name >> cls >> section >> id;
        Student s(name, cls, section, id);
        students.push_back(s);
    }

    Reverse(students);

    for (auto &student : students) {
        cout << student.name << " " << student.cls << " " << student.section << " " << student.id << endl;
    }

    return 0;
}




