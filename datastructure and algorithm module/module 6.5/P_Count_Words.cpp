#include<bits/stdc++.h>

using namespace std;

bool hasOnlyAlphabets(const string& word) {
    for (char c : word) {
        if (isalpha(c)) {
            return true;
        }
    }
    return false;
}

int main() {
    string ttt;
    getline(cin, ttt);
    stringstream ss(ttt);
    string word;
    int count = 0;
    
    while (ss >> word) {
        if (hasOnlyAlphabets(word)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


