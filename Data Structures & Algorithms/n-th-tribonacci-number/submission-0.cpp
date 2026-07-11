class Solution {
public:
    int tribonacci(int n) {
        vector<int> arr;
        int res = 0;

        int a= 0, b = 1, c = 1, d;

        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);

        for(int i = 1; i <= 37; i++){
            d = a + b + c;
            a = b; b = c; c = d;

            arr.push_back(d);
        }

       return arr[n];

        return res;
    }
};