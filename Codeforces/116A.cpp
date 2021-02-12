#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    int total = a+b, res=total;
    n--;
    while(n--) {
        cin >> a >> b;
        total = total - a + b;
        if(total > res) res=total;
    }
    cout << res << endl;
}
