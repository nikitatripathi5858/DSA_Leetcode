class Solution {
public:
void st(vector<int>& nums, int s,int e){
    while(s<=e){
        int temp = nums[s];
        nums[s] = nums[e];
        nums[e] = temp;
        s++;
        e--;
    }
}
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(n==0) return;
        k = k % n;
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin() + k);
       reverse(nums.begin()+k,nums.end());
       
    }
};