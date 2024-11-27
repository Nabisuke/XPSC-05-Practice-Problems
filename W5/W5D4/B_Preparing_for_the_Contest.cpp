#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int first_segment = n-k, sec_segment = n-k-1;
        for (int i = first_segment; i <= n; i++)
        {
            cout<<i<<" ";
        }
        for (int i = sec_segment; i >= 1; i--)
        {
            cout<<i<<" ";
        }
        cout<<"\n";

    }
    
    return 0;
}