class Solution {
public:
    bool makesquare(vector<int>& m) {
        int sum = 0;

        for(int val : m) sum += val;

        if((sum%4)%2 != 0) return false;

        return true;
    }
};