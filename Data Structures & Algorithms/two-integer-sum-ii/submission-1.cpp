class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int left = 0, right = nums.size()-1;

        while(left < right){
            int sum = nums[left] + nums[right];

            if(sum == t){
                return {left+1, right+1};
            }else if(sum > t){
                right--;
            }else left++;
        }

        return {-1, -1};
    }
};
