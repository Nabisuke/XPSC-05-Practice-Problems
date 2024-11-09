#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int max_count = 1, current_count = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1]) current_count++;
        else
        {
            max_count = max(max_count, current_count);
            current_count = 1;
        }
    }
    max_count = max(max_count, current_count);
    cout<<max_count<<"\n";
    return 0;
}
