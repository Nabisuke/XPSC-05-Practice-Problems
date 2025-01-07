#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    string s; cin >> s;
    map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }
    int oddCount = 0;
    char oddChar = 0;
    for (auto it : freq)
    {
        if (it.second % 2 != 0)
        {
            oddCount++;
            oddChar = it.first;
        }
    }
    
    if (oddCount > 1)
    {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
    string first = "", last = "";
    for (auto it : freq)
    {
        string temp(it.second / 2, it.first);
        first += temp;
        last = temp + last;
    }
    
    if (oddCount == 1) cout << first + oddChar + last << "\n";
    else cout << first + last << "\n";
    
    return 0;
}