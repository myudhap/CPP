#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    int i,tmp=1;
    cin >> x;
    for(i=0; i<x.length()-1; i++) {
        if(x[i]==x[i+1]) tmp++;
        else tmp=1;
        if(tmp>6) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
