class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;
        int n = nums.size()/3;

        for(int &val : nums) mp[val]++;

        for(auto &it : mp){
            if(it.second > n) ans.push_back(it.first);
        }

        return ans;
    }
};