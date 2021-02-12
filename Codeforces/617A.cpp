#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, res=0;
    cin >> x;
    while(x>0) {
        if(x<5) {
            x-=4; res++;
        }else if(x<4) {
            x-=3; res++;
        }else if(x<3) {
            x-=2; res++;
        }else if(x<3) {
            x-=2; res++;
        }else if(x<2) {
            x-=1; res++;
        }else {
            x-=5; res++;
        }
    }
    cout << res << endl;
}
