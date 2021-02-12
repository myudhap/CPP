#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h,a,res=0;
    cin >> n >> h;
    while(n--) {
        cin >> a;
        res++;
        if(a>h) res++;
    }
    cout << res << endl;
}
