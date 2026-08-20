class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        vector<string> vec;

        for(string &s : arr) mp[s]++;

        for(int i = 0; i < arr.size(); i++){
            auto it = mp.find(arr[i]);

            if(it != mp.end() && it->second == 1){
                vec.push_back(arr[i]);
            }
        }

        if(vec.size() < k) return "";

        return vec[k-1];
    }
};