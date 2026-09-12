class Solution {
public:
    int maxArea(vector<int>& h) {
        int left = 0, right = h.size()-1;
        int ans = 0;

        cout << left << " " << right << endl;

        while(left < right){
            int a = h[left];
            int b = h[right];

            int h = min(a, b);
            int w = right - left;

            ans = max(ans, h*w);

            if(a < b) left++;
            else right--;
        }

        return ans;
    }
};
