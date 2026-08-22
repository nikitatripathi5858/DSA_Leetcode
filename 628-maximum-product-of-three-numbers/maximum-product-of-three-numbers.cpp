class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first, second, third; 
        int smallest, secondSmallest; 
        int prod1, prod2; 
        smallest = secondSmallest = INT_MAX; 
        first = second = third = INT_MIN;

        for(auto x : nums){
            if(x > first){
                third = second;
                second = first; 
                first = x; 
            }else if(x > second){
                third = second; 
                second = x;
            }else if(x > third){
                third = x; 
            }

            if(x < smallest){
                secondSmallest = smallest; 
                smallest = x; 
            }else if(x < secondSmallest){
                secondSmallest = x; 
            }
        }

        prod1 = first * second * third; 
        prod2 = smallest * secondSmallest * first ;

        return max(prod1, prod2);
    }
};