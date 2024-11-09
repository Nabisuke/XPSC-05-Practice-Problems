#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    getline(cin, n);
    while (n.size() < 4)
    {
        n = "0" + n;
    }
    cout<<n<<"\n";
    return 0;
}