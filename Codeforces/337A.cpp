#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, res=1000, tmp;
    cin >> n >> m;
    int f[m];
    for(i=0; i<m; i++){
        cin >> f[i];
    }
    sort(f, f+m);
    for(i=0; i<m-n+1; i++){
        tmp = f[(n-1)+i] - f[i];
        if(tmp < res) {
            res = tmp;
        }
    }
    cout << res << endl;
}
