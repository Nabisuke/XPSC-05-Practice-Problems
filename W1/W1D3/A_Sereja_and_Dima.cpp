#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++) cin>>dq[i];
    int sereja = 0; int dima = 0; int turn = 1;
    while(!dq.empty())
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left,right);
        if (turn % 2 == 0) dima += mx;
        else sereja += mx;
        if (mx == left) dq.pop_front();
        else dq.pop_back();
        turn++;
    }
    cout<<sereja<<" "<<dima<<"\n";
    return 0;
}