class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0 ;
        int j = n-1;
        vector<int>res(2,-1);
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]==target){
                res[0]=mid;
                j = mid -1;}
          
            else if(nums[mid]<target){
                i = mid + 1;
            }else{
               j = mid-1;
            }
            
        }
        i = 0,j=n-1;
         while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]==target){
                res[1]=mid;
                i = mid  + 1;}
          
            else if(nums[mid]<target){
                i = mid + 1;
            }else{
               j = mid-1;
            }
            
        }
        return res;
    }
};