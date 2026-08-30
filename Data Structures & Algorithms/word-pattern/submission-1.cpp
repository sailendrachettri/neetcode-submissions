class Solution {
public:
    bool wordPattern(string p, string s) {
        unordered_map<string, char> mp1;
        unordered_map<char, string> mp2;
        int idx = 0;

        for(int i = 0; i < s.size(); i++){
            string temp = "";

            while(i < s.size() && s[i] != ' '){
                temp += s[i++];
            }
            // i++;

            cout << p[idx] << " " << temp << endl;
            

            auto it = mp1.find(temp);
            auto it2 = mp2.find(p[idx]);
            

            if(it != mp1.end()){
                // cout << p[idx] << " " << it->second << endl;
                if(it->second != p[idx]) return false;
            } else if(it2 != mp2.end()){
                if(it2->second != temp) return false;
            }

            mp1[temp] = p[idx];
            mp2[p[idx]] = temp;


            idx++;
        }

        cout << idx << " " << p.size() << endl;

        if(idx < p.size()) return false;

        return true;
    }
};