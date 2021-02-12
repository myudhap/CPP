#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w,i,tmp=0;
    cin >> k >> n >> w;
    for(i=1; i<=w; i++) {
        tmp+=(k*i);
    }
    if(tmp >n) cout << tmp-n << endl;
    else cout << 0 << endl;
}


