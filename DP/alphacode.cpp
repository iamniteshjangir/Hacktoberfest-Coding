#include<bits/stdc++.h>
using namespace std;

int alpha_codes(int *n, int size, int *dp)
{
    if (size == 0 || size == 1) {
        return 1;
    }
    if (dp[size] > 0) {
        return dp[size];
    }
    int output = alpha_codes(n, size-1, dp);
    if (n[size-2] * 10 + n[size-1] <= 26) {
        output += alpha_codes(n, size-2, dp);
    }
    dp[size] = output;
    return output;
}

int main()
{
    while(true) {
        string s;
        cin>>s;
        if (s[0] == '0' && s.length() == 1) {
            break;
        }
        int arr[s.length()];
        for (int i=0; i<s.length(); i++) {
            arr[i] = s[i] - '0';
        }
        int dp[s.length()+1] = {0};
        cout<< alpha_codes(arr, s.length(), dp) <<endl;
    }
    return 0;
}
