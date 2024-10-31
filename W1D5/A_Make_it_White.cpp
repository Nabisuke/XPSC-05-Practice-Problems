#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B') v.push_back(i);
        }
        int min = v.front();
        int max = v.back();
        int cnt = 0;
        for (int i = min; i <= max; i++)
        {
            cnt++;       
        }
        cout<<cnt<<"\n";
    }   
    return 0;
}