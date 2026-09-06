class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        int len = 1;
        int ans = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]) continue;
            else if(nums[i-1] == nums[i] - 1) len++;
            else{
                ans = max(len, ans);
                len = 1;
            }
        }

        return max(len, ans);
    }
};
