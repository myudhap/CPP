#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, a, res=0, tmp=0, cnt=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a;
        int tmp2 = a;
        if(tmp2>=tmp) {
            tmp = tmp2;
            cnt++;
        } else {
            tmp = tmp2;
            cnt=1;
        }
        if(cnt > res) res=cnt;
    }
    cout << res << endl;
}
