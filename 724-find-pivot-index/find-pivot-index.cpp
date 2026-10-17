class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n,0);
        int sum =0;
        for(int i =0;i<n;i++){
            sum+=nums[i];
        }
        int l = 0,r=0;
        for(int i = 0;i<n;i++){
          
            r= sum - l - nums[i];
            if(r==l) return i;
              l += nums[i];
        }
         return -1;
    }
};