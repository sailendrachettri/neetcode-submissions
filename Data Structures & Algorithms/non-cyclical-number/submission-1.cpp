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

            cout << sum << endl;
            if(sum == 1) return true;

            if(st.count(sum)) return false;
            st.insert(sum);

            val = sum;
        }

        return true;
    }
};
