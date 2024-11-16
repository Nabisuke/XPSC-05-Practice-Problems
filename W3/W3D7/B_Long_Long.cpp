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
        ll n;
        cin>>n;				
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll sum=0,op=0;
        bool negSeg=false;
        int cons=0;
        for(int i=0;i<=n;i++)
        {
            if(i<n)sum+=abs(a[i]);
            if(negSeg)
            {
                if(i==n or a[i]>0)
                {
                    op++;
                    negSeg=false;
                }
            }
            else
            {
                if(a[i]<0)
                {
                    negSeg=true;
                }
            }
        }

        cout<<sum<<" "<<op<<endl;
}
    
    return 0;
}