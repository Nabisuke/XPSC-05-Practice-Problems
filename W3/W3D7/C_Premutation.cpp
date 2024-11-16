#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int mat[n+5][n];
        for(int i = 1; i<=n; i++)
        {
            for(int j=1; j<n; j++)
            {
                cin>>mat[i][j];
            }
        }
        map <int, int>mp;
        map <int, int> m;
        for(int i=1; i<=n; i++){
            mp[mat[i][n-1]] = i;
            m[mat[i][n-1]]++;
        }
        int idx =0, val;
        for(auto u:m)
        {
            if(u.second==1) idx = u.first;
            else val = u.first;
        }
        for(int i=1; i<n; i++)
        {
            cout<<mat[mp[idx]][i]<<" ";
        }
        cout<<val<<"\n";
    }
    
    return 0;
}