class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(char &ch : s)
            mp[ch]++;

        // for(auto it : mp) cout<< it.first << " " << it.second << endl;

        for(int i = 0; i < s.size(); i++){
            auto it = mp.find(s[i]);

            if(it != mp.end()){
                // cout << it->second << endl;
                if(it->second <= 1)
                    return i;
            }
        }

        return -1;
    }
};