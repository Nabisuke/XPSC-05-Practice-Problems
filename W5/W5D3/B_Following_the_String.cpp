#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string str = "abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> cnt(26,0);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            for (int j = 0; j < 26; j++)
            {
                if (v[i] == cnt[j])
                {
                    cout<<str[j];
                    cnt[j]++;
                    break;
                }
            }
        }
        cout<<"\n";
        
    }
    
    return 0;
}