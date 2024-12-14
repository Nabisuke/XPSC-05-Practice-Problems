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
        int n; cin>>n;
        vector<ll> v(n);
        ll OR = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            OR |= v[i];
        }
        cout<<OR<<"\n";

    }
    
    return 0;
}