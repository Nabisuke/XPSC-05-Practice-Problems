#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll first = min(a, s/n);
        ll remaining = s-(first*n);
        if (remaining > b) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    
    }
    
    return 0;
}