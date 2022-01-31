class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        int r=accounts.size();
        int c=accounts[0].size();
        for(int i=0;i<r;i++){
            int wealth=0;
            for(int j=0;j<c;j++){
                wealth+=accounts[i][j];
            }
            maxWealth=max(wealth,maxWealth);
        }
        return maxWealth;
    }
};