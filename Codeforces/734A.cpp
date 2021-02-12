#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, a=0, d=0;
    string s;
    cin >> n >> s;
    for(i=0; i<n; i++) {
        if(s[i]=='A') a++;
        else d++;
    }
    if(a>d) cout << "Anton\n";
    else if(a<d) cout << "Danik\n";
    else cout << "Friendship\n";
}
