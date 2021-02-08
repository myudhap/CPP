#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    string x;
    cin >> a;
    while(a--) {
        cin >> x;
        int n = x.length();
        if(n<11) cout << x;
        else cout << x[0] << n-2 << x[n-1];
        cout << endl;
    }
}

