#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string result;
        int i = n - 1;
        while (i >= 0)
        {
            if (s[i] == '0')
            {
                int let = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
                result += (char)('a' + let - 1);
                i -= 3;
            }
            else
            {
                int let = s[i] - '0';
                result += (char)('a' + let - 1);
                i--;
            }
        }
        reverse(result.begin(), result.end());
        cout<<result<<"\n";
    }
    return 0;
}
