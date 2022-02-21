class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]]++;
        
        long long int maxi=0,maxia=0;
        for (auto x : mp){
            if(x.second>maxi){
                maxi=x.second;
                maxia=x.first;
            }
        }
        return maxia;
    }
};