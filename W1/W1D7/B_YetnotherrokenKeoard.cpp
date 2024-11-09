#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ch_lower=0;
        int ch_upper=0;
        deque<char> dq;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                ch_upper++;
                continue;
            }
            if(s[i]=='b')
            {
                ch_lower++;
                continue;
            }
            if(ch_lower && islower(s[i]))
            {
                ch_lower--;
                continue;
            }
            if(ch_upper && isupper(s[i]))
            {
                ch_upper--;
                continue;
            }
            dq.push_front(s[i]);
        }
        for(auto value :dq)
        {
            cout<<value;
        }
        cout<<"\n";
    }
    return 0;
}