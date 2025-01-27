#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ll n,l,r; cin>>n>>l>>r;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll result = 0;
        for (ll i = 0; i < n; i++)
        {
            int left = lower_bound(v.begin()+i+1,v.end(),l-v[i]) - v.begin();
            int right = upper_bound(v.begin()+i+1,v.end(),r-v[i]) - v.begin();
            result += right - left;            
        }
        cout<<result<<"\n";

    }
    
    return 0;
}