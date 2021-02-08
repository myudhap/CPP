#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, x;
    cin >> s;
    int i, j, n=s.length();
    for(i=0; i<n-1; i+=2) {
        for(j=0; j<n-i-1; j+=2) {
            char tmp=s[j];
            if(s[j]>s[j+2]) {
                s[j] = s[j+2];
                s[j+2] = tmp;
            }
        }
    }

    cout << s << endl;
}
