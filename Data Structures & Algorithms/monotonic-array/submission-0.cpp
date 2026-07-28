class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isInc = true;
        bool isDec = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]){
                isInc = false;
                break;
            }
        }

        if(isInc) return true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] < nums[i]){
                isDec = false;
                break;
            }
        }

        return isDec;
    }
};