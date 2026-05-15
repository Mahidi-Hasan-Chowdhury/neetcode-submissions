class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i] || s.length()!=t.length())
            {
                return false;
            }
        }
        return true;
    }
};
