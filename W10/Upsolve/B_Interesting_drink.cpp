#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;cin>>q;
    while(q--)
    {
        ll x; cin>>x;
        int count = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout<<count<<"\n";
    }

    return 0;
}