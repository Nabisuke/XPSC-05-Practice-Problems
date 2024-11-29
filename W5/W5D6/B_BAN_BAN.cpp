#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s = "q";
        for (int i = 0; i < n; i++)
        {
            s += "BAN";
        }
        n = s.size()-1;

        int l = 2, r = n;
        vector<pair<int,int>> v;
        int cnt = 0;
        while(l < r)
        {
            v.push_back({l,r});
            swap(s[l],s[r]);
            l += 3;
            r -= 3;
            cnt++;
        }
        cout<<cnt<<"\n";
        for (auto it: v)
        {
            cout<<it.first<<" "<<it.second<<"\n";
        }
    }
    return 0;
}