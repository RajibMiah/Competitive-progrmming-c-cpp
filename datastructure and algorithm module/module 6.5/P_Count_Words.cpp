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
int main(){
    string ttt ; 
    getline(cin , ttt);
    stringstream ss;
    ss << ttt;
    string word;
    int count = 0;
    bool hasAlphabates = false;
    while( ss >> word){
        hasAlphabates = false;
        for(char c : word){
            if(isalpha(c)){
               hasAlphabates = true;
               break;
            }
          
        }
        if(hasAlphabates){
            count++;
        }
    }
    cout<< count;
    return 0;
}