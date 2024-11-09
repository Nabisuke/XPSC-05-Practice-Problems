#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    getline(cin, n);
    int cnt[26] = {0};
    for (char c : n)
    {
        cnt[c - 'a']++;
    }
    bool flag = false;
    for (int i = 0; i<26; i++)
    {
        if (cnt[i] == 0)
        {
            cout<<char(i+'a')<<"\n";
            flag = true;
            break;
        }
    }
    if (flag == false) cout<<"None"<<"\n";
    return 0;
}