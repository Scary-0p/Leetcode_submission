class Solution {
public:
    bool checkString(string s) {
        // bool is_true = true;
        for(int i=0; i<s.length()-1; i++){
            if(s[i] == 'b' && s[i+1] == 'a'){
                return false;
            }
        }
        return  true;
    }
};