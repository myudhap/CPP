#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,res=0;
    cin >> a >> b;
    while(b>=a){
        res++;
        a*=3;
        b*=2;
    }
    cout << res << endl;
}
