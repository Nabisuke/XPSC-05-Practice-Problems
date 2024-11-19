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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n);
        ll time = 0;
        if (b >= a)
        {
            time = a;
            b = a;
        }
        else time = b;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if (v[i]+1 <= a) time += v[i];
            else time += a-1;                     
        }
        cout<<time<<"\n";
    }
    
    return 0;
}