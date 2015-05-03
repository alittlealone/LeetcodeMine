//Òì»òÔËËã£ºa^b^a = b
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        int sn = nums[0];
        vector<int>::iterator it;
        for(it = nums.begin() + 1; it != nums.end(); it++) {
            sn = sn ^ *it;
        }
        return sn;
    }
};