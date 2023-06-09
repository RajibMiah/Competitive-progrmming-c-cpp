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
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == n / 2 && j == n / 2) {
                cout << "X";
            }
            else if (i == j) {
                cout << "\\";
            } else if (j == n - i - 1) {
                cout << "/";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}