class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i=1; i<=n; i++){
            int index = i-1;
            if(n % i == 0){
                ans+= nums[index] * nums[index];
            }
        }
        return ans;
    }
};