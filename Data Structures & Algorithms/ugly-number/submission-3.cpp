class Solution {
public:
    bool prime(int n){
        bool isPrime = true;

        for(int i = 2; i <= n/2; i++){
            if(n%i == 0) return false;
        }

        return true;
    }
    bool isUgly(int n) {
        set<int> st;

        if(n <= 1) return true;


        for(int i = 2; i <= n; i++){
            bool res = prime(i);
            
            if(res){
                st.insert(i);
            }
        }

        for(int val : st){
            cout << val << endl;
            if(!(val == 2 || val == 3 || val == 5)) return false;
        }

        return true;

    }
};