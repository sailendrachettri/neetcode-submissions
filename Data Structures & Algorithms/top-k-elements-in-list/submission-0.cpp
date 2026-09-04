class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<pair<int, int>> p;
        vector<int> ans;

        for(int &val : nums){
            mp[val]++;
        }

        for(auto it : mp){
           p.push_back(make_pair(it.first, it.second));
        }

        sort(p.begin(), p.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        for(int i = 0; i < k; i++){
            ans.push_back(p[i].first);
        }

        return ans;


    }
};
