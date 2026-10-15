class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxi = INT_MIN;
        int maximum = INT_MIN;
        int sum = 0;
        int n = arr.size();
        for(int i = 0 ; i<n;i++){
            sum+=arr[i];
            if(sum<0){
                sum = 0;
            }if(sum>maxi){
               maxi = sum;
            }
            maximum = max(arr[i],maximum);
        }
       if(maxi == 0){
        return maximum;
       }
        return maxi;
    }
};