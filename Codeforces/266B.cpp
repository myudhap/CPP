#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, i, j;
    string s;
    cin >> n >> t;
    cin >> s;
    while(t--) {
        for(i=1; i<n; i++) {
            if(s[i]=='G'&&s[i-1]=='B'){
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }
    cout << s << endl;;
}

