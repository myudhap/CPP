#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, res="";
    cin >> s;
    int i, tmp=0, n=s.length();
    for(i=0; i<n; i++) {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B') {
            if(i>0) res+=" ";
            i+=2;
        } else {
            res+=s[i];
        }
    }
    cout << res << endl;
}
