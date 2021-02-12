#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, z, r1=0, r2=0, r3=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y >> z;
        r1+=x; r2+=y; r3+=z;
    };
    if(r1==0&&r2==0&&r3==0) cout << "YES\n";
    else cout << "NO\n";
}

