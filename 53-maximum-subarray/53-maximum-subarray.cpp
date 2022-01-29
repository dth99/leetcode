class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int MaxSum=nums[0];
        int CurrentSum=0;
        for(int i=0;i<nums.size();i++){
            if(CurrentSum<0){
                CurrentSum=0;
            }
            CurrentSum+=nums[i];
            MaxSum=max(MaxSum,CurrentSum);
        }
        return MaxSum;
    }
};