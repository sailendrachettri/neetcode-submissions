class Solution {
public:
    bool check(string s, int nop, vector<string> &words){
        int idx = 0;
        for(string &str : words){
            if(str.size() >= s.size() && nop != idx){

                for(int i = 0; i < str.size(); i++){
                    string temp = "";
                    int count = 0;

                    if(str[i] == s[0]){
                        while(i < str.size() && count < s.size()){
                            temp += str[i++];
                            count++;
                        }
                    }

                    if(temp == s) return true;
                }
            }
            idx++;
        }

        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        int idx = 0;
        for(string &str : words){
            bool res = check(str, idx, words);
            idx++;

            if(res) ans.push_back(str);
        }

        return ans;
    }
};