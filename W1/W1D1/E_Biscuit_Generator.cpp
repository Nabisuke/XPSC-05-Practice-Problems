#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;
    int time = a;
    int total = 0;
    while(time <= c)
    {
        total += b;
        time += a;
    }
    cout<<total<<"\n";
    return 0;
}