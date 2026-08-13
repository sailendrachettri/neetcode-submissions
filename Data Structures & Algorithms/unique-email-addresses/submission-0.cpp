class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;

        for(string &str : emails){
            string temp = "";
            int idx = 0;

            while(idx < str.size() && str[idx] != '+' && str[idx] != '@'){
                temp += str[idx++];

                if(temp.back() == '.') temp.pop_back();
            }

            while(str[idx] != '@') idx++;

            while(idx < str.size()){
                temp.push_back(str[idx++]);
            }

            cout << temp << endl;

            st.insert(temp);
        }
        

        return st.size();
    }
};