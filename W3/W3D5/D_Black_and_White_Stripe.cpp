#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt = 0, ans = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W') cnt++;
        }
        ans = cnt;
        for (int i = k; i < n; i++)
        {
            if (s[i - k] == 'W') cnt--;
            if (s[i] == 'W') cnt++;
            ans = min(ans, cnt);
        }
        cout<<ans<<"\n";
    }

    return 0;
}