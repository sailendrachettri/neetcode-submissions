class Solution {
public:
    int MOD = 1e9 + 7;

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;

        for(int &val : nums) val = val%MOD;
        target = target%MOD;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                for(int k = j+1; k < nums.size(); k++){
                    for(int l = k+1; l < nums.size(); l++){
                        long long sum = 0;
                        sum += nums[i];
                        sum += nums[j];
                        sum += nums[k];
                        sum += nums[l];
                        // cout << sum << endl;

                        if(sum == target){
                            ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        }
                    }
                }
            }
        }

        for(vector<int> &arr : ans){
            sort(arr.begin(), arr.end());
            st.insert(arr);
        }

        ans.clear();
        for(vector<int> arr : st) ans.push_back(arr);



        return ans;
    }
};