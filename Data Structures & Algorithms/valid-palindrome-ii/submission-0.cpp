class Solution {
public:
    bool check(int left, int right, string s){
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }

        return true;
    }
    bool validPalindrome(string s) {
        int left = 0, right = s.size()-1;
        bool res = check(left, right, s);

        if(res) return true;


        while(left < right){
            if(s[left] != s[right]){
                res = check(left, right-1, s);

                cout << res << " " << left << " " << right << " " << endl;
                if(res) return true;
                
                res = check(left+1, right, s);
                cout << res << " " << left << " " << right << " " << endl;
                if(res) return true;

                return false;
            }
            left++; right--;
        }

        return true;
    } 
};