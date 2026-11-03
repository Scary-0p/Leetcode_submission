class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = nums[0];
        for(auto num : nums){
            if(num > max) max = num;
        }
        int moves = 0;
        for(auto num : nums){
            moves += (max - num);
        }
        return moves;
    }
};