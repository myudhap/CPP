#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, res=1;
    cin >> n;
    string a[n];
    cin >> a[0];
    for(i=1; i<n; i++) {
        cin >> a[i];
        if(a[i]!=a[i-1]) res++;
    }
    cout << res << endl;
}
