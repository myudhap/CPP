#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    int tmp=0;
    bool res=false;
    cin >> n;
    while(n>0) {
        if(n%10==7 || n%10==4) tmp++;
        n/=10;
    }
    while(tmp>0) {
        if(tmp%10==4 || tmp%10==7) {
            tmp/=10;
            res=true;
        } else {
            break;
        }
    }
    if(res && tmp==0) cout << "YES\n";
    else cout << "NO\n";
}
