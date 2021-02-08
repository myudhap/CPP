#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, res=0;
    string x;
    cin >> n;
    while(n--) {
        cin >> x;
        if(x[1]=='+') res++;
        else res--;
    }
    cout << res << endl;
}
