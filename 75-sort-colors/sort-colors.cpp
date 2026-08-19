class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0;i<n;i++){
            int m = i;
           for(int j = i+1; j < n; j++) {
                if(arr[j] < arr[m]) {
                    m = j;
                }}
            int temp = arr[i];
            arr[i]=arr[m];
            arr[m]=temp;
        }

    }
};