/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& m) {
        vector<int> st, ed;

        for(auto it : m){
            st.push_back(it.start);
            ed.push_back(it.end);
        }

        sort(st.begin(), st.end());
        sort(ed.begin(), ed.end());

        for(int i = 1; i < st.size(); i++){
            if(st[i] < ed[i-1]) return false;
        }

        return true;
    }
};
