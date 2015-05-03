class Solution {
public:
    int titleToNumber(string s) {
        int n;
        if(s.empty())
            return 0;
        if(s.size() == 1)
            n = s[0] - 'A' + 1;
        else {
            n = (s[0] - 'A' + 1) * pow(26, s.size() - 1);
            s.erase(s.begin());
            n += titleToNumber(s);
        }
        return n;
    }
};