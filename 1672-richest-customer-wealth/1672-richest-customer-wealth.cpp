class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        int r=accounts.size();
        for(int i=0;i<r;i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];
            }
            maxWealth=max(wealth,maxWealth);
        }
        return maxWealth;
    }
};