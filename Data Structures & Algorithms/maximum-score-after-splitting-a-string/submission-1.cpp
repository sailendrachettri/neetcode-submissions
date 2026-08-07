class Solution {
public:
    int maxScore(string s) {
        int ans = 0;

        for(int i = 0; i < s.size()-1; i++){
            int count1 = 0, count2 = 0;

            for(int j = 0; j <= i; j++){
                if(s[j] == '0') count1++;
            }
            for(int j = i+1; j < s.size(); j++){
                if(s[j] == '1') count2++;
            }

            ans = max(ans, ( count1+count2));
        }

        return ans;
    }
};