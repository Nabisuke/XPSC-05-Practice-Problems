#include<bits/stdc++.h>
using namespace std;

vector<int> process(int n, vector<int>& final,vector<string>& moves)
{
    vector<int> initial(n);
    for (int i = 0; i < n; i++)
    {
        int x = final[i];
        for (char c : moves[i])
        {
            if (c == 'U')
            {
                x = (x - 1 + 10);
                x = x % 10;
            }
            else{
                x = (x + 1);
                x = x % 10;
            }
            
        }
        initial[i] = x;
    }
    return initial;
}
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
        vector<int> final(n);
        for (int i = 0; i < n; i++)
        {
            cin>>final[i];
        }
        vector<string> moves(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            string move;
            cin>>x>>move;
            moves[i] = move;
        }
        vector<int> ini_digits = process(n,final,moves);
        for (int digit : ini_digits)
        {
            cout<<digit<<" ";
        }
        cout<<"\n";
    }   
    return 0;
}