class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, two = 0, one = 0;
        int idx = 0;

        for(int &val : nums){
            if(val == 0) zero++;
            else if(val == 1) one++;
            else if(val == 2) two++;
        }

        while(zero--){
            nums[idx] = 0;
            idx++;
        }
        while(one--){
            nums[idx] = 1;
            idx++;
        }
        while(two--){
            nums[idx] = 2;
            idx++;
        }
    }
};