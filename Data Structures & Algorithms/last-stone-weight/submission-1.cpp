class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());

            int val1 = stones.back();
            stones.pop_back();
            int val2 = stones.back();
            stones.pop_back();

            if(val2 < val1){
                // cout << val1 << " " << val2 << " " << val1-val2 << endl;
                stones.push_back(val1-val2);
            }
        }

        if(stones.size() == 1) return stones[0];

        return 0;
    }
};
