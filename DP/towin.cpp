#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        unsigned long long arr[n];
        unsigned long long sum_f=0;
        unsigned long long sum_s=0;
        for (long long i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i=0; i<n; i++) {
            if (i==0) {
                sum_f += arr[0];
                continue;
            }
            if (i==1) {
                sum_s += arr[1];
                continue;
            }
            if (((i%2) != 0) & (i>1)) {
                sum_f += arr[i];
                continue;
            }
            if(((i%2) == 0) & (i>1)) {
                sum_s += arr[i];
                continue;
            }
        }
        if (sum_f > sum_s) {
            cout<<"first";
        }
        else if (sum_f < sum_s) {
            cout<<"second";
        }
        else {
            cout<<"draw";
        }
        if (t != 0) {
            cout<<endl;
        }
    }
    return 0;
}
