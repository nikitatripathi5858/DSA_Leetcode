class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>f;
        int maxi = 0 , l = 0;
        int n = s.size();
        for(int i = 0 ; i< n ;i++){
                  f[s[i]]++;
                while( f[s[i]]>1){
                     f[s[l]]--;
                     l++;
                }
                maxi=max(maxi,i-l+1);
        }
        return maxi;
    }
};