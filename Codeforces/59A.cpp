#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int i, h=0, l=0;
    cin >> s;
    for(i=0; i<s.length(); i++) {
        if(s[i]>91)l++;
        else h++;
    }
    if(h>l) {
        for(i=0; i<s.length(); i++) {
            if(s[i]>91)s[i]-=32;
        }
    } else {
        for(i=0; i<s.length(); i++) {
            if(s[i]<91)s[i]+=32;
        }
    }
    cout << s << endl;
}
