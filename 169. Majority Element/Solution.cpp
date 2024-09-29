class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto c:mp){
            if(c.second > nums.size()/2) return c.first;
        }
        return -1; // returned
    }
};
