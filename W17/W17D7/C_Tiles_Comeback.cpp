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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool flag = false;
        if (v[0] == v[n-1])
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                {
                    cnt++;
                }
                if (cnt % k == 0)
                {
                    cout<<"YES"<<"\n";
                    flag = true;
                    break;
                }
            }
            if (!flag) cout<<"NO"<<"\n";

        }
        else
        {
            int l = -1;
            int r = -1;
            int cnt_l = 0;
            int cnt_r = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                {
                    cnt_l++;
                }
                if (cnt_l % k == 0)
                {
                    l = i;
                    break;
                }
            }
            for (int i = n-1; i >=0; i--)
            {
                if (v[i] == v[n-1])
                {
                    cnt_r++;
                }
                if (cnt_r % k == 0)
                {
                    r = i;
                    break;
                }
            }
            if (l != -1 && r != -1 && l < r)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }

        }
    }
    
    return 0;
}