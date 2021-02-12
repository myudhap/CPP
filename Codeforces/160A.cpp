#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, sum=0, half=0, res=0;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++) {
        cin >> a[i];
        half+=a[i];
    }
    half/=2;
    sort(a, a+n);
    for(i=n-1; i>=0; i--) {
        res++;
        sum+=a[i];
        if(sum > half) {
            break;
        }
    }
    cout << res << endl;
}
