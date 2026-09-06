class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        
        for(int start = 0; start < nums.size(); start++){
            for(int end = start; end < nums.size(); end++){
                int sum = 0;

                for(int i = start; i <= end; i++){
                    sum += nums[i];
                }

                if(sum == k) ans++;
            }
        }

        return ans;
    }
};