class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(string s : strs){
            ans += s;
            ans += "~";
        }

        // ans.pop_back();

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        cout << s << endl;

        if(s.size() == 1 && s[0] == '~') return {""};

        for(int i = 0; i < s.size(); i++){
            string temp = "";

            while(i < s.size() && s[i] != '~'){
                temp += s[i];
                i++;
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
