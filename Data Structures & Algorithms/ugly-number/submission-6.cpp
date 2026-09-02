class Solution {
public:
    bool prime(int n){
        bool isPrime = true;

        if(n <= 1) return false;
        else if(n == 2 || n == 3) return true;

        for(int i = 2; i <= n/2; i++){
            if(n%i == 0) return false;
        }

        return true;
    }
    bool isUgly(int n) {
        set<int> st;

        if(n == 1) return true;
        else if(n <= 0) return false;


        for(int i = 2; i <= n; i++){
            bool res = prime(i);
            
            if(res){
                if(!(i == 2 || i == 3 || i == 5)) return false;
            }
        }

        return true;

    }
};