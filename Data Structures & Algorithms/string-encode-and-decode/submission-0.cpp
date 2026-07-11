class Solution {
public:

    char code = '`';

    string encode(vector<string>& strs) {
        string ans = "";
        for(string st : strs){
            ans += st;
            ans += code;
        }

        // ans.pop_back();
        // cout << "encoded: " << ans << endl;
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        // cout << "str: " << s << endl;
        string temp = "";
        for(char ch : s){
            if(ch != code)
                temp += ch;
            else {
                ans.push_back(temp);
                temp = "";
            }
        }
        return ans;
    }
};
