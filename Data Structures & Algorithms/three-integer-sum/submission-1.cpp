class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;

        for(int i = 0; i < nums.size(); i++){
            unordered_map<int, int> mp;

            for(int j = i+1; j < nums.size(); j++){
                int sum = nums[i] + nums[j];
                auto it = mp.find(-sum);

                if(it != mp.end()){
                    if(it->second != i && i != j && j != it->second){
                        ans.push_back({nums[i], it->first, nums[j]});
                    }
                }
                mp[nums[j]] = j;
            }
        }

        for(vector<int> arr : ans) {
            sort(arr.begin(), arr.end());
            st.insert(arr);
        }
        ans.clear();
        for(vector<int> arr : st) ans.push_back(arr);

        return ans;
    }
};
