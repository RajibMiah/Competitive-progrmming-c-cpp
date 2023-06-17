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
    int ttt ; cin >> ttt;
    vector<long long int> v1(ttt);
    for(int i = 0 ; i< ttt ; ++i ){
        cin >> v1[i];
    }
    
    for(int i = 1 ; i < ttt ; ++i){
        v1[i] += v1[i - 1];
    }

    for(int i = ttt - 1  ; i >= 0 ; --i){
        cout << v1[i] << " ";
    }
}