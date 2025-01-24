#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> v(n), prefix(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i-1] + v[i-1];
    }
    int q; cin>>q;
    for (int i = 0; i < q; i++)
    {
        int k;
        cin>>k;
        auto it = lower_bound(prefix.begin(),prefix.end(),k) - prefix.begin();
        cout<<it<<"\n";
        
    }
    
    return 0;
}