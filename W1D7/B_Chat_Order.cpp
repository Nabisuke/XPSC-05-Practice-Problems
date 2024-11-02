#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    map<string, bool> mp;
    for (int i = n - 1; i >= 0; i--) {
        if (mp.find(v[i]) == mp.end())
        {
            cout<<v[i]<<"\n";
            mp[v[i]] = true;
        }
    }
    return 0;
}
