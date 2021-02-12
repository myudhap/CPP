#include <bits/stdc++.h>
using namespace std;

int main() {
    string a="I hate", b="I love";
    int i, n;
    cin >> n;
    for(i=1; i<=n; i++) {
        if(i%2==0) cout << b;
        else cout << a;
        if(i<n) cout << " that ";
    }
    cout << " it" << endl;
}
