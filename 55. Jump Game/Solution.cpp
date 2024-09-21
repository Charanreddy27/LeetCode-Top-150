class Solution {
public:
    bool canJump(vector<int>& nums) {
        // 2 3 1 1 4 
        // 0 1 2 3 4
        // last = 4 -> if(3+3 = 6) last = 3
        int last = nums.size() -1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]+i>=last) last = i;
        }
        return last==0;
    }
};