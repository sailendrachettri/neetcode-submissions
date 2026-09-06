class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        string rev = "";

        for(char ch : s){
            if(isalnum(ch)) a += tolower(ch);
        }

        cout << a << endl;

        rev = a;
        reverse(rev.begin(), rev.end());
        

        return a == rev;
    }
};
