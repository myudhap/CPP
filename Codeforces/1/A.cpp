#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b,c,d,e;
    cin >> a >> b >> c;
    d = a/c;
    e = b/c;

    if(a%c>0)d++;
    if(b%c>0)e++;
    cout << d*e << endl;
}
