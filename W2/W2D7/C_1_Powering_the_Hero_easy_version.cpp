#include<bits/stdc++.h>
#define ll long long int
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
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll ans = 0;
        priority_queue<ll> pq;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (pq.empty()) continue;
                else{
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout<<ans<<"\n";
    }   
    return 0;
}