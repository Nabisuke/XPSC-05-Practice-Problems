#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a, b;
        cin>>a>>b;
        int n = a.size();
        int m = b.size();
        char last_a = a[n - 1];
        char last_b = b[m - 1];
        if (last_a != last_b)
        {
            if (last_a == 'S' || (last_a == 'M' && last_b == 'L')) cout<<"<\n";              
            else cout<<">\n";               
            continue;
        }
        int cnt_a = count(a.begin(), a.end(), 'X');
        int cnt_b = count(b.begin(), b.end(), 'X');
        if (last_a == 'S')
        {
            if (cnt_a > cnt_b) cout<<"<\n";               
            else if (cnt_a < cnt_b) cout<<">\n";               
            else cout<<"=\n";               
        }
        else if (last_a == 'L')
        {
            if (cnt_a > cnt_b) cout<<">\n";                
            else if (cnt_a < cnt_b) cout<<"<\n";               
            else cout << "=\n";                
        }
        else cout<<"=\n";
    }

    return 0;
}
