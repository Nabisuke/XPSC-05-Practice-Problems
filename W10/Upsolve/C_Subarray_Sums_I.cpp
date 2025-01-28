#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll sum = 0;
    int cnt = 0;
    map<ll,int> mp;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (mp.find(sum - x) != mp.end())
        {
            cnt += mp[sum - x];
        }
        mp[sum]++;
    }
    cout<<cnt;

    
    return 0;
}