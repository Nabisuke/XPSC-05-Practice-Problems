#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        ll k;
        cin>>k;
        vector<int> v(n);
        vector<int> v_1(m);
        for (int i = 0; i < n; i++) cin>>v[i];
        for (int i = 0; i < m; i++) cin>>v_1[i];     
        sort(v.begin(),v.end());
        sort(v_1.begin(),v_1.end());
        if (k % 2 != 0)
        {
            if (v[0] < v_1[m-1])
            {
                swap(v[0],v_1[m-1]);
                sort(v.begin(),v.end());
                sort(v_1.begin(),v_1.end());

            }
            
        }
        else
        {
            if (v[0] < v_1[m-1])
            {
                swap(v[0],v_1[m-1]);
                sort(v.begin(),v.end());
                sort(v_1.begin(),v_1.end());

            }
            if (v_1[0] < v[n-1])
            {
                swap(v_1[0],v[n-1]);
                sort(v.begin(),v.end());
                sort(v_1.begin(),v_1.end());
            }
        }
        ll result = 0;
        for (int i = 0; i < n; i++)
        {
            result += v[i];
        }
        cout<<result<<"\n";
    }
    
    return 0;
}