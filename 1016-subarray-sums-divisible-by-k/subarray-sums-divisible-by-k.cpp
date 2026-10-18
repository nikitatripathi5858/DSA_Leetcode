class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>f;
        int sum = 0, res=0;
        f[0]=1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sum+=nums[i];
            int rem = sum % k;
            if(rem < 0 ) {
                rem=rem+k;
            }
           res+=f[rem];
           f[rem]++;
        }
        return res;
    }
};