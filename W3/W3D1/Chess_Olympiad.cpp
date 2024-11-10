#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    float team_1 = 0, team_2 = 0;
    team_1 = (x*1) + (y*0.5) + ((4-(x+y+z))*1);
    team_2 = (y*0.5) + (z*1);
    if (team_1 > team_2) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
    return 0;
}