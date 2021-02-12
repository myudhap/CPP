#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, temp;
    int res=0, h=0;
    cin >> s;
    temp = s;
    if(s[0]<91) h++;
    for(int i=1; i<s.length(); i++){
        if(s[i]<91) {
            s[i]+=32;
            h++;
        }
        else res++;
        if(res>0) {
            cout << temp << endl;
            return 0;
        }
    }
    if(s[0]>90 && h<s.length()) {
        s[0]-=32;
        cout << s << endl;
    } else if (s[0]<91) {
        s[0]+=32;
        cout << s << endl;
    }
}
