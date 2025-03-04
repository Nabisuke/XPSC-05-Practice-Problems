#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin>>v[i];
        vector<int> v_1;
        v_1.push_back(0);
        v_1.insert(v_1.end(),v.begin(),v.end());
        v_1.push_back(x);
        int max_distance = 0;
        for(int i=1;i<v_1.size();i++)
        {
            if (v_1[i] == x)
            {
                max_distance = max(((x-v_1[i-1])*2),max_distance);
                break;
            }
            else
            {
                max_distance = max(max_distance,v_1[i]-v_1[i-1]);
            }
        }
        cout<<max_distance<<"\n";
        
    }
    
    return 0;
}