#include<bits/stdc++.h>
using namespace std;

int binarySearch(int l , int r , vector<int> arr , int search){
    int mid = l + (r - l) /2;
    if(arr[mid] == search){
        return mid;
    }else if(arr[mid] > search){
        binarySearch(l , mid - 1 , arr , search);
    }else{
        binarySearch( mid + 1 , r , arr , search);
    }
    
    return -1;
}
int main(){
    int n , num;
    vector<int> arr;
    cin >> n;
    for(int i = 0 ; i<n ; i++){
        cin >> num;
        arr.push_back(num);
    }
    int x ;
    cin >> x;
    sort(arr.begin() , arr.end());
    cout << binarySearch(0 , arr.size() - 1 , arr , x );
}