class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    unordered_set<int> result;
    int i=0,j=0;
    while(i<nums1.size() && j<nums2.size())
    {
        if(nums1[i]==nums2[j]){
            result.insert(nums1[i++]);
            j++;
        } 
        else if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
    }
    vector<int> ans(result.begin(),result.end());
    return ans;
    }
};