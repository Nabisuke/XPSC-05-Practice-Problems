class Solution{
public:
	int search(string pat, string txt) {
	    int n = txt.size();
        int k = pat.size();
        vector<int> p(26, 0);
        vector<int> w(26, 0);
        for (char c : pat)
        {
            p[c - 'a']++;
        }
        
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            w[txt[i] - 'a']++;
            if (i >= k)
            {
                w[txt[i - k] - 'a']--;
            }
            if (w == p)
            {
                count++;
            }
        }
        
        return count;
	}

};