class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_freq;
        for(auto i : s){
            s_freq[i]++;
        }

        for(auto i : t){
            s_freq[i]--;
        }
        for(auto pair : s_freq){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};