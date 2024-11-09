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
        string a,b;
        cin>>a>>b;
        bool flag = true;
        for (int i =0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (!((a[i] == 'B' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'B')))
                {
                    flag = false;
                    break;
                }               
            }
        }
        if (flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";        
    }  
    return 0;
}