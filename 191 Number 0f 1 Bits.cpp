class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum  = 0;
        vector<int> v;
        while(n) {
            v.push_back(n % 2);
            n = n / 2;
        }
        vector<int>::iterator it;
        for(it = v.begin(); it != v.end(); it++) {
            sum += *it;
        }
        return sum;
    }
};