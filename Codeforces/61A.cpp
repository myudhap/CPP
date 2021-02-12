#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, res="";
    cin >> a >> b;
    for(int i=0; i<a.size(); i++) {
        if(a[i]!=b[i])res+="1";
        else res+="0";
    }
    cout << res << endl;
}
