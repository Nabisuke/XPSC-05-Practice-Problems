#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for (int i  =0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans = v[0];
        for (int i = 1; i < n; i++)
        {
            ans = ans & v[i];
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}