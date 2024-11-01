#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin>>name>>ip;
        mp[ip] = name;
    }
    for (int i = 0; i < m; i++)
    {
        string command, ip_1;
        cin>>command>>ip_1;
        ip_1.pop_back();
        cout<<command<<" "<<ip_1<<"; #"<<mp[ip_1]<<"\n";     
    }
    return 0;
}