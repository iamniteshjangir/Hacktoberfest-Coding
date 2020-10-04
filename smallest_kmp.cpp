// Using map
#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s,p;
        cin>>s;
        cin>>p;
        sort(s.begin(), s.end());
        map<char, int> m;
        for (int i=0; i<s.length(); i++) {
            m[s[i]]++;
        }
        for (int i=0; i<p.length(); i++) {

            m[p[i]]--;
        }
        map<char, int>:: iterator it;
        string ans;
        for(it=m.begin(); it!=m.end(); it++) {
            if (it->second != 0) {
                ans += string((it->second), (it->first));
            }
            if (it->first == p[0]) {
                ans += p;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

