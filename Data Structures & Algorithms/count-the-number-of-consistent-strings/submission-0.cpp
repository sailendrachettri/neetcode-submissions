class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        unordered_set<char> st(allowed.begin(), allowed.end());

        for(string &str : words){
            bool allow = true;

            for(char & ch : str){
                if(!st.count(ch)){
                   allow = false;
                   break;
                }
            }

            if(allow) ans++;
        }

        return ans;
    }
};