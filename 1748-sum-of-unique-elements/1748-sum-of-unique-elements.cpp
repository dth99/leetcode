class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
       // for(auto x:umap)    cout<<x.first<<" : "<<x.second<<"\n";
        for(auto x:umap){
            if(x.second==1){
                sum+=x.first;
            }
        }
        return sum;
    }
};