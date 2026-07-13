class Solution {
public:
    int arrangeCoins(int n) {
        int idx = 1;
        int ans = 0;

       for(int i = 1; i <= n; i++){
            if(i >= idx) ans++;
            n = n - idx++;
       }

        return ans;
    }
};