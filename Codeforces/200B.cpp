#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    double n, p, total=0;
    cin >> n;
    for(i=0; i<n; i++) {
        cin >> p;
        total+=p;
    }
    cout << setprecision(12) << fixed << total/n << endl;
}
