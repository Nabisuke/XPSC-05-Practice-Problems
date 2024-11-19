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
        int a,b,c;
        cin>>a>>b>>c;
        if (a == 1) cout<<1<<"\n";
        else if (b < c)
        {
            int up = c-b;
            int down = c-1;
            int second_total = up+down;
            if ((a-1) == second_total) cout<<3<<"\n";
            else if ((a-1) > second_total) cout<<2<<"\n";
            else cout<<1<<"\n";
        }
        else if (b > c)
        {
            if ((a-1) > (b-1)) cout<<2<<"\n";
            else if ((a-1) == (b-1)) cout<<3<<"\n";
            else cout<<1<<"\n";        
        }
    }
    
    return 0;
}