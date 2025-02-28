#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s, s_1;
        cin>>s>>s_1;
        int total = 0; 
        int cnt = 0; int cnt_1 = 0;
        for(int i = 0; i < n; i++)
        {
            if (s[i] == '1') cnt++;
            if (s_1[i] == '1') cnt_1++;
            if ((s[i] != s_1[i]) && s_1[i] == '1') total++;
        }
        int ans = total;
        if (cnt > cnt_1) ans += cnt - cnt_1;
        cout<<ans<<"\n";

    }
    
    return 0;
}