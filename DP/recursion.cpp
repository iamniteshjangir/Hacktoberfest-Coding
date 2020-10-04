#include<bits/stdc++.h>
using namespace std;

int countSeq(string s, int n)
{
    if (n == 0) {
        return 1;
    }
    int output =  countSeq(s, n-1);
    return output*2;
}

int main()
{

    string s;
    cin>>s;
    cout << countSeq(s, s.length()) <<endl;
    return 0;
}
