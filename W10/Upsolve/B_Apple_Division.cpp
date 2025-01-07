#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll total = 0;
ll solve(vector<ll> &v, int n, ll sum)
{
    if (n == 0) return abs((total - sum) - sum);
    return min(solve(v,n-1,sum+v[n-1]),solve(v,n-1,sum));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        total += v[i];
    }
    cout<<solve(v,n,0)<<"\n";
    return 0;
}