#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, s, temp[5]={0}, res;
    cin >> n;
    while(n--){
        cin >> s;
        temp[s]++;
    }
    res = (temp[4] + temp[3] + temp[2]/2);
    temp[1] -= temp[3];
    if(temp[2]%2 > 0) {
        res++;
        temp[1]-=2;
    }
    if(temp[1] > 0) {
        res+=(temp[1] + 3)/4;
    }
    cout << res << endl;
}
