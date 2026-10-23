class Solution {
public:
    long long calculateScore(string s) {
        vector<vector<int>> idx(26);
        int n = s.length();

        long long total = 0;
        
        for(int i=0; i<n; i++){
            idx[s[i] - 'a'].push_back(i);
            char rev = 'z' - (s[i] - 'a');

            if(idx[rev-'a'].size() != 0 && idx[rev-'a'].back() < i){
                total += (i-idx[rev-'a'].back());
                idx[rev-'a'].pop_back();
                idx[s[i]-'a'].pop_back();
            }
        }
        return total;
    }
};