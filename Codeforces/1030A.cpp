#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    while(n--) {
        cin >> i;
        if(i==1) {
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";
}
