class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        unordered_map<char,int> mp2;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:t){
            mp2[i]++;
        }
        if(mp==mp2) return true;
        return false;
    }
};