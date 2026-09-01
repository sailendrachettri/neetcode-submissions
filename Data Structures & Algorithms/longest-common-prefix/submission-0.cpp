class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        int idx = 0;
        for(int i = 0; i < strs[0].size(); i++){

            for(int j = 0; j < strs.size(); j++){
                cout << strs[0][i] << " " << strs[j][idx] << endl;
                if(strs[0][i] != strs[j][idx]) return ans;
            }

            ans += strs[0][idx];
            idx++;
        }

        return ans;
    }
};