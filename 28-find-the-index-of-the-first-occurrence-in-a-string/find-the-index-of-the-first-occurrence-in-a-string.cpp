class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int i = 0;
        int cnt = 0;
        int index = -1;
        if(m>n) return -1;
       while(i < n) {
            int start = i;
            int j = 0;

            while(j < m && i < n && haystack[i] == needle[j]) {
                i++;
                j++;
            }

            if(j == m)
                return start;

            i = start + 1;
        }
       
        return index;
    }
};