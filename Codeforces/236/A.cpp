#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int i,j,res=0,n=s.length();
    for(i=0;i<n;i++) {
        if(s[i]=='0') continue;
        res++;
        for(j=i+1;j<n;j++) {
            if(s[i]==s[j]) {
                s[j]='0';
            }
        }
    }
    if(res%2==0) cout << "CHAT WITH HER!\n";
    else cout << "IGNORE HIM!";
}
