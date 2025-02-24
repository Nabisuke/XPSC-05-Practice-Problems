#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        string result = "";
        for(int i = 0; i < k; i++)
        {
            result += 'a'+i;
        }
        string result_1 = "";
        for (int i = 0; i <n; i++)
        {
            result_1 += result;
        }
        cout<<result_1<<"\n";
    }
    
    return 0;
}