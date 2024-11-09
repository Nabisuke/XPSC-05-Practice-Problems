#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cin>>x>>y>>z;
    bool flag = false;
    for (int i = x; i <= y; i++)
    {
        if (i % z == 0)
        {
            cout<<i<<"\n";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout<<-1<<"\n";
    }
    return 0;
}