class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                k++;i++;
            }
            else{
                res.push_back(nums2[j]);
                k++;j++;
            }
        }
        while(i<m){
            res.push_back(nums1[i]);
            i++;k++;
        }
        while(j<n){
            res.push_back(nums2[j]);
            j++;k++;
        }
        nums1 = res; // return
    }
};
