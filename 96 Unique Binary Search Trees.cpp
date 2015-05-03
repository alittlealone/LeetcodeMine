//递归，用数组储存结果，否则超时
class Solution {
public:
    int numTrees(int n) {
        vector<int> v;
        v.push_back(1);
        v.push_back(1);
        for(int i = 2; i <= n; i++) {
            int num = 0;
            for(int j = 0; j < i; j++) {
                num += v[j] * v[i - 1 - j];
            }
            v.push_back(num);
        }
        return v[n];
    }
};