class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int count = INT_MIN;
        int ans = -1;

        for(int &val : nums) mp[val]++;

        for(auto it : mp){
            if(it.second > count){
                 ans = it.first;
                 count = it.second;
            }
        }

        return ans;
    }
};