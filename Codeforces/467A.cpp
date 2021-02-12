#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, i, res=0;
    cin >> n;
    while(n--){
        cin >> p >> q;
        if(p < q-1) res++;
    }
    cout << res << endl;
}
