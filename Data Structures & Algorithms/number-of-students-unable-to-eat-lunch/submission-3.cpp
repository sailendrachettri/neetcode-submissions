class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& s) {
        int times = 0;
        int idx = 0;

        deque<int> q;

        for(int val : students){
            q.push_back(val);
        }

        while(!q.empty() && idx < s.size()){
            int stu = q.front();
            q.pop_front();

            int san = s[idx];

            if(s[idx] != stu){
                q.push_back(stu);
                times++;
            }else{
                times = 0;
                idx++;
            } 

            if(times == q.size()) break;
        }

        return q.size();
    }
};