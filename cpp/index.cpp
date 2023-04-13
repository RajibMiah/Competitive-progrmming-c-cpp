#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];

void printVector(vector<pair<int , int >> v){
    cout << "Size: " << v.size() << endl;
    for(int i=0 ; i< v.size(); i++){
        cout<< v[i].first<<" " << v[i].second << endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int , int>> v;
    int n;
    cin >> n;
    while(n--){
        int n1,  n2;
        cin >> n1 >> n2;
        v.push_back({n1 , n2});
    }
    printVector(v);
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