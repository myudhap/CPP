#include<iostream>
using namespace std;
 
int main(){
    string x;
    cin >> x;
    for(int i=0; i<x.length(); i++){
        if(x[i]<97){
            x[i]+=32;
        }
        if(x[i]!='a'&&x[i]!='u'&&x[i]!='y'&&x[i]!='e'&&x[i]!='o'&&x[i]!='i'){
            cout << "." << x[i];
        }
    }
    cout << endl;
}