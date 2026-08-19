class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;

        for(int start = 0;  start < nums.size(); start++){
            for(int end = start; end < nums.size(); end++){
                int temp = 0;

                for(int i = start; i <= end; i++){
                    temp |= nums[i];
                }
                ans += temp;
            }
        }

        return ans;
    }
};