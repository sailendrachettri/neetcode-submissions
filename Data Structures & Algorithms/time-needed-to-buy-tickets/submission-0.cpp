class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        deque<pair<int, int>> q;
        int count = 0;

        for(int i = 0; i < t.size(); i++){
            q.push_back({t[i], i});
        }

        while(!q.empty()){
            count++;

            int val = q.front().first;
            int idx = q.front().second;
            val--;

            // cout << val << " " << idx << " " << count << endl;

            q.pop_front();

            if(val > 0){
                q.push_back({val, idx});
            }

            if(val == 0 && idx == k){
                return count;
            }
            
        }

        return count;
    }
};