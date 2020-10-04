#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--) {
        int h,p;
        cin>>h>>p;
        while( true ) {
            h = h-p;
            if (h <= 0) {
                cout<<"1"<<endl;
                break;
            }
            p = p/2;
            if (p <= 0) {
                cout<<"0"<<endl;
                break;
            }
        }
    }
    return 0;
}
