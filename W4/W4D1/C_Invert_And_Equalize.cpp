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
        int cnt = 0;
        if (n > 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] != s[i+1]) cnt++;
            }
        }       
        cout<<cnt/2<<"\n";
    }   
    return 0;
}