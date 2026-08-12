class Solution {
   public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = INT_MAX;
        int sum = 0;
        int left = 0;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];

            if(sum >= target){

                while(sum-nums[left] >= target){
                    sum -= nums[left++];
                }
                len = min(len, right-left+1);
            }
        }

        if(len == INT_MAX) return 0;

        return len;
    }
};