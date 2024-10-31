#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i,j,k;
    ll s=0,n;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2==0) cout<<s<<"\n";
    else
    {
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if((s-a[i])%2==0)
            {
                cout<<s-a[i]<<"\n";
                break;
            }
        }
    }

    return 0;
}