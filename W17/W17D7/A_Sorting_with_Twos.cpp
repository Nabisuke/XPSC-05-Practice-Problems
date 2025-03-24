#include<bits/stdc++.h>
using namespace std;
bool check(int x)
{
    if (x <= 0) return false;
    while(x != 1)
    {
        if (x % 2 != 0) return false;
        else x = x / 2;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag = true;
        for (int i  =0; i < n-1; i++)
        {
            if (!check(i+1))
            {
                if (v[i] > v[i+1])
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    
    return 0;
}