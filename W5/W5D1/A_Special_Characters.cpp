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
        if (n %2 != 0) cout<<"NO"<<"\n";
        else{
            cout<<"YES"<<"\n";
            int turns = n / 2;
            for (int i = 1; i <= turns; i++)
            {
                if (i % 2) cout<<"AA";
                else cout<<"BB";
            }
            cout<<"\n";
        }
    }
    
    return 0;
}