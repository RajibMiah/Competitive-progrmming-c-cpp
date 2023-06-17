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
int main() {
    int ttt;
    cin >> ttt;

    vector<int> v1(ttt);
    vector<bool> seen(1e9 + 5, false);
    for (int i = 0; i < ttt; ++i) {
        cin >> v1[i];
    }

    bool isDuplicate = false;
    for (int i = 0; i < ttt; i++) {
        if (seen[v1[i]]) {
            isDuplicate = true;
            break;
        }
        seen[v1[i]] = true;
    }

    if (isDuplicate) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}