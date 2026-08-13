class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> char_mp(26, 0);
        for(auto &it: s){
            char_mp[it - 'a']++;
        }
        for(auto &it: t){
            char_mp[it -'a']--;
        }
        for(auto &it: char_mp){
            if(it != 0) return false;
        }
        return true;
    }
};
