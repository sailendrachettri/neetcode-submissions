class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;

        for(int i = 0; i < s.size(); i++){
            for(int j = s.size()-1; j >= 0; j--){
                if(s[i] == s[j]){
                    ans = max(ans, j-i-1);
                    cout << j << " " << i << " " << ans << endl;
                }
            }
        }

        return ans;
    }
};