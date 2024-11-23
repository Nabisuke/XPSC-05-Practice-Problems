#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i =0; i < n; i++)
    {
        cin>>v[i];
    }
    int l = 0, r = 0;
    long long sum = 0;
    map<int,int> mp;
    int cnt = 0;
    while(r < n)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 1) cnt++;
        while(cnt > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0) cnt--;
            l++;
        }
        sum += (r-l+1);
        
        r++;
        
        
    }
    cout<<sum<<"\n";
    
    return 0;
}