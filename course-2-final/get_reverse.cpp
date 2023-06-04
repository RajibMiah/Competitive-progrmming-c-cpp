#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846264338327951
const int INF = 1e9;
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

bool cmp(pair <int , int> a , pair < int ,int> b){
    if(a.first != b.second) return a.first < b.second;
    return a.first > b.second;
}
// Time limit	Operations (approximate)
// 1 second     	10^7
// 10 seconds	    10^8
// 1 minute	        10^9
// 1 hour	        10^11
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
    
    reverse(students.begin() , students.end());

    for(int  i = 0 ; i < students.size() ; i++){
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

}