#include<bits/stdc++.h>
using namespace std;
bool spell_check(string a)
{
    string name = "Timur";
    if (a.size() != name.size()) return false;
    sort(a.begin(),a.end());
    sort(name.begin(),name.end());
    return (a == name);

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
        string a;
        cin>>n>>a;
        if (spell_check(a)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }   
    return 0;
}