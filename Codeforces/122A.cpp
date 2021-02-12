#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool res = true;
    cin >> n;
    while(n>0){
        if(n%4==0 || n%7==0 || n%47==0 || n%744==0) break;
        else if(n%10!=7 && n%10!=4) { res = false; break; }
        else n/=10;
    }
    if(res) cout << "YES\n";
    else cout << "NO\n";
}
