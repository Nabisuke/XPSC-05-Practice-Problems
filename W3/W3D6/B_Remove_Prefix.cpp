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
        vector<int> a(n);       
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        set<int> s;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.count(a[i]))
            {
                cnt = i + 1;
                break;
            }
            s.insert(a[i]);
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}