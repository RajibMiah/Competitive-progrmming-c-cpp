#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846264338327951
class Student {
public:
    string name;
    string cls;
    string section;
    int math_marks;
    int eng_marks;

        Student(string name , string cls , string section, int math_marks, int eng_marks) {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
    }

};

void Reverse(vector<Student>& s) {
    size_t n = s.size();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i].cls, s[n - 1 - i].cls);
        swap(s[i].section, s[n - 1 - i].section);
        swap(s[i].math_marks, s[n - 1 - i].math_marks);
        swap(s[i].eng_marks, s[n - 1 - i].eng_marks);
    }
}

int main(){
    int ttt ; cin >> ttt;
    vector<Student> students;
    while (ttt--)
    {
       string name , cls , section;
       int math_marks , eng_marks;
       cin >> name >> cls >> section >> math_marks >> eng_marks;
       Student s(name , cls , section , math_marks , eng_marks);
       students.push_back(s);
    }
    
    Reverse(students);

    for( auto  i = 0 ; i < students.size() ; i++){
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

}