class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = -1;
        int i = 0;
        int j = n-1;
        while(i<=j){
            int mid = i+(j - i)/2;
            if(nums[mid]<target){
                i = mid+1;
            }else if(nums[mid]>target){
                j = mid -1;
            }else{
               ans =  mid;
                break;
            }
        }
        return ans;
    }
};