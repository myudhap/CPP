#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, tmp="hello";
    int i, res=0;
    cin >> s;
    for(i=0; i<s.length(); i++) {
        if(tmp[res]==s[i]){
            res++;
        }
        if(res==5) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}

