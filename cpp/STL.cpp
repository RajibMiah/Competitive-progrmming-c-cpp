#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846264338327951
const int INF = 1e9;
const int MAX_N = 1e5 + 5;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

// Time limit	Operations (approximate)
// 1 second     	10^7
// 10 seconds	    10^8
// 1 minute	        10^9
// 1 hour	        10^11
int main(){
    queue<string>  q; 
    q.push("abc");
    q.push("bcs");
    q.push("deb");
    while(!q.empty()){
        cout<< q.front() << endl;
        q.pop();
    }
}