class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int prod = 0 ;
      
           sort(nums.begin(),nums.end());
            prod = nums[0]*nums[1]*nums[n-1];
        int prod1 = 0;
            prod1 = nums[n-1]*nums[n-2]*nums[n-3];
        return max(prod1,prod);
    }
};