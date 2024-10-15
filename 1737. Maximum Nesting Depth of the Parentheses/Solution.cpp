class Solution {
public:
    int maxDepth(string s) {
        int res =0;
        int maxi =0;
        for(auto i:s){
            if(i=='(') {
                res++;
                maxi = max(maxi,res);
            }
            else if(i==')') res--;
        }
        return maxi;
    }
};