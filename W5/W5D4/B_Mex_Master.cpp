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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int zero=0;
        int nonzero=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0) nonzero++;
            else zero++;
        }
        int ans;
        if(zero==0) ans=0;
        else
        {
            if(nonzero>=zero-1)
            {
                ans=0;
            }
            else
            {
                int mx=*max_element(a.begin(),a.end());
                if(mx==1) ans=2;
                else ans=1;
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}