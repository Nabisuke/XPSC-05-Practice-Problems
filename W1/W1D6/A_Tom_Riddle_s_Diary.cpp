#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    set<string> tracker;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if (tracker.find(s) != tracker.end()) cout<<"YES"<<"\n";
        else
        {
            cout<<"NO"<<"\n";
            tracker.insert(s);
        }
    }
    return 0;
}