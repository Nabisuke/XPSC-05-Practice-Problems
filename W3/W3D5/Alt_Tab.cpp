#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int n;
    cin>>n;
    vector<string> v(n);   
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }    
    map<string, bool> mp;
    string result;   
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.find(v[i]) == mp.end())
        {
            result += v[i][v[i].size()-2];
            result += v[i][v[i].size()-1];
            mp[v[i]] = true;
        }
    }   
    cout << result << "\n";   
    return 0;
}