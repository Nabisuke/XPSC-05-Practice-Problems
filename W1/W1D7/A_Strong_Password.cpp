#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int max_time = 0;
        string strong_password = s + 'a';
        for (char c = 'a'; c <= 'z'; ++c)
        {
            for (int i = 0; i <= s.size(); ++i)
            {
                string temp = s;
                temp.insert(temp.begin() + i, c);
                int time = 2;
                for (int j = 1; j < temp.size(); ++j)
                {
                    if (temp[j] == temp[j - 1]) time += 1;
                    else time += 2;                       
                }
                if (time > max_time)
                {
                    max_time = time;
                    strong_password = temp;
                }
            }
        }
        cout << strong_password << endl;
    }

    return 0;
}
