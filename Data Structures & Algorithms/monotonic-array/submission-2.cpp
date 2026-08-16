class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIn = true;
        bool isDe = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]){
                isIn = false;
                break;
            }
        }

        if(isIn) return true;

        for(int i = nums.size()-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                isDe = false;
                break;
            }
        }

        return isDe;
    }
};