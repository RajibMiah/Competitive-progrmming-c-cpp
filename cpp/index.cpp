#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

int digit_sum(int n){
    if(n <= 0){
        return 0;
    }
    return digit_sum(n/10) + n % 10;
}

int main(){
    string str1;
    cin >> str1;
    cout << str1[str1.size() - 1] - '0';
}

// 10 ^ 7 ==== 1 second
// 10 ^ 8 = 10 second
// 10 ^ 9 = 100 second

// Time limit	Operations (approximate)
// 1 second     	10^7
// 10 seconds	    10^8
// 1 minute	        10^9
// 1 hour	        10^11
// 1 day	        10^13
// 1 week	        10^15
// 1 month	        10^16
// 1 year	        10^17