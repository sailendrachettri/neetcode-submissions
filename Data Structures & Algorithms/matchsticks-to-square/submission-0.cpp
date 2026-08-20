class Solution {
public:
    bool makesquare(vector<int>& m) {
        if(m.size() < 4) return false;
        int count = 0;

        int maxi = *max_element(m.begin(), m.end());

        int sum = 0;
        for(int i = 0; i < m.size(); i++){
            sum += m[i];

            if(sum == maxi){
                sum = 0;
                count++;
            }
        }

        return count == 4;
    }
};