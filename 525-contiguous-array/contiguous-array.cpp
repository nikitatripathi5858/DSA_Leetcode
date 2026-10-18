class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>f;
        int sum = 0 , n = nums.size(),cnt1=0,cnt0=0;
        
        int res = 0;
        for(int i = 0 ; i < n ; i++){
             sum+=nums[i];
            if(nums[i] == 0){
                cnt0++;
            }
             if(nums[i] == 1){
                cnt1++;
            }
            int diff = cnt0-cnt1;
            if(diff == 0){
                res = max(res,i+1);
                continue;
            }
            if(f.find(diff) == f.end()){
                f[diff] = i;
            }else{
                int ind = f[diff];
                int len = i - ind;
                res = max(res,len);
            }
           
        }
        return res;
    }
};