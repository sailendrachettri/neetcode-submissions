class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int> q;
        deque<int> sw;
        int rotation = 0;

       for(int i = 0; i < students.size(); i++){
            q.push_back(students[i]);
            sw.push_back(sandwiches[i]);
       }

       while(rotation != q.size()){
            int val1 = q.front();
            int val2 = sw.front();
            
            q.pop_front();

            if(val1 == val2){
                sw.pop_front();
                rotation = 0;
            }else{
                q.push_back(val1);
                rotation++;
            }
       }

       return q.size();


    }
};