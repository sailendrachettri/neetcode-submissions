class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;
        int prod = 1;
        if(nums.size() == 1) return nums[0];

        for(int i = 0; i < nums.size(); i++){
            prod = prod * nums[i];

            if(prod > maxi) maxi = prod;
        }

        return maxi;
    }
};
