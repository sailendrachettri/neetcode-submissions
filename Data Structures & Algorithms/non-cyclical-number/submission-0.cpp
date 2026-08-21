class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        int val = n;

        while(true){
            int sum = 0;

            while(val){
                sum += (val%10);
                val = val / 10;
            }
            if(sum == 1) return true;

            st.insert(sum);

            if(st.count(sum)) return false;

            sum = 0;
            val = n;
        }

        return true;
    }
};
