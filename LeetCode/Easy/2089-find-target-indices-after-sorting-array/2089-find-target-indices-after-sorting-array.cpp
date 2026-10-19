class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int small = 0, big = 0;
        for(auto num : nums){
            if(num < target) small++;
            else if(num > target) big++;
        } 
        vector<int> ans;
        int n = nums.size() - small - big;
        for(int i=0; i<n; i++){
            ans.push_back(i + small);
        }
        return ans;
    }
};