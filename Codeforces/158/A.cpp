#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i,res=0;
    cin >> n >> k;
    int a[n];
    for(i=1; i<=n; i++) {
        cin >> a[i];
    }
    for(i=1; i<=n; i++) {
        if(a[i]>0&&a[i]>=a[k]) res++;
    }
    cout << res << endl;
}

