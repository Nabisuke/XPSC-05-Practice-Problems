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
        long long c;
        cin>>n>>c;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            v[i] += i+1;
        }
        sort(v.begin(),v.end());
        long long cnt = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i]+sum > c) break;
            cnt++;
            sum += v[i];

        }
        cout<<cnt<<"\n";

    }
    
    return 0;
}