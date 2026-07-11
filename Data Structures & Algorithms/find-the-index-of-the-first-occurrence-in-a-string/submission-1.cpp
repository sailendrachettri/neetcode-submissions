class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int start = 0; start < haystack.size(); start++){
            for(int end = start; end < haystack.size(); end++){
                string s = "";
                for(int i = start; i <= end; i++){
                    s += haystack[i];
                }

                if(s == needle) return start;
            }

        }
        return -1;
    }
};