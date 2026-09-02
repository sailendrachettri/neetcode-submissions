class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = 0;

        int prod = 1;

        if(nums.size() == 1)
            return nums[0];
            
        for(int i = 0; i < nums.size(); i++){
            prod = prod * nums[i];

            if(prod > ans){
                ans = prod;
                prod = ans;
            } else {
                prod = 1;
            }
        }

        return ans;
    }
};
