#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    int p[n], res[n];
    for(i=1; i<=n; i++) {
        cin >> p[i];
        res[p[i]] = i;
    }
    for(i=1; i<=n; i++) {
        cout << res[i] << " ";
    }

    cout << endl;
}
