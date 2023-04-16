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
    int ttt ; cin >> ttt;
    vector<long long int> v;
    for(int i = 0 ; i< ttt ; i++){
        int n;
        cin >> n;
        v.push_back(n);
    }
    long long int t;
    cin >> t;
    sort(v.begin() , v.end());
    auto it = lower_bound(v.begin() , v.end() , t);
    if(it != v.end() && *it == t){
        cout << (int) distance(v.begin() ,it);
    }else{
         cout << -1;
    }
    
}