#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<char> set_1(s.begin(), s.end());
        vector<char> r(set_1.begin(), set_1.end());
        sort(r.begin(),r.end());
        map<char, char> mp;
        int len = r.size();
        for (int i = 0; i < len; i++)
        {
            mp[r[i]] = r[len - i - 1];
        }
        string result;
        for (char ch : s)
        {
            result += mp[ch];
        }
        cout<<result<<"\n";
    }
    return 0;
}