#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
public:
    int id;
    string name;
    string cls;
    string section;
    int math_marks;
    int eng_marks;

    Student(string name, string cls, string section, int id ,int math_marks, int eng_marks) {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
     
    }
};

bool compareStudents(const Student& a, const Student& b) {
    int totalMarksA = a.math_marks + a.eng_marks;
    int totalMarksB = b.math_marks + b.eng_marks;

    if (totalMarksA != totalMarksB) {
        return totalMarksA > totalMarksB;
    } else {
        return a.id < b.id;
    }
}

int main() {
    int ttt;
    cin >> ttt;
    vector<Student> students;

    while(ttt--) {
        string name, cls, section;
        int math_marks, eng_marks , id;
        cin >> name >> cls >> section >>  id >> math_marks >> eng_marks;
        // cout << name << " " << cls << " " << section << " " << id << " " << math_marks << " " << eng_marks << endl;
        Student s(name, cls, section, id , math_marks, eng_marks);
        students.push_back(s);
        cin.ignore();
    }

    sort(students.begin(), students.end(), compareStudents);

    for (const auto& student : students) {
       cout << student.name << " " << student.cls << " " << student.section << " " << student.id << " " << student.math_marks << " " << student.eng_marks << endl;
    }

    return 0;
}
