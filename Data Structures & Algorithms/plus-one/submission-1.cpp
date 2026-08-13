class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 0;

        for(int i = digits.size()-1; i >= 0; i--){
            if(i == digits.size()-1)
                    digits[i]++;

            int sum = digits[i]+carry;

            // cout << sum << " " << sum%10 << endl;

            if(sum > 9){
                ans.push_back(sum%10);
                carry = sum / 10;
            }else {
                ans.push_back(digits[i]+carry);
                carry = 0;
            };
        }


        if(carry == 1) ans.push_back(carry);
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
