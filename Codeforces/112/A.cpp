#include <bits/stdc++.h>
using namespace std;

int main(){
    string x,y;
    cin >> x >> y;
    while(x.length()--) {
        if(x[i]<97) x[i]+=32;
        if(y[i]<97) y[i]+=32;
    }

    if(x<y)cout << "-1\n";
    else if(x>y)cout << "1\n";
    else cout << "0\n";
}

