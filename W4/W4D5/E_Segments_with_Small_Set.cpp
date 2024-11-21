#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    long long ans = 0;
    map<int, int> freq;
    int cnt = 0;
    while (r < n)
    {
        freq[a[r]]++;
        if (freq[a[r]] == 1)
        {
            cnt++;
        }
        while (cnt > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
            {
                cnt--;
            }
            l++;
        }
        ans += (r - l + 1);
        r++;
    }
    cout<<ans<<"\n";

    return 0;
}
