#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int i, res=0, n=s.length();
    for(int i=0; i<n; i++) {
        if(s[i]==t[n-1-i]) {
            res++;
        }
    }
    if(res==n) cout << "YES\n";
    else cout << "NO\n";
}

