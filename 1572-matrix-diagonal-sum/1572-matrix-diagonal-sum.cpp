class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        /* brute force (not bad one)
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    sum+=mat[i][j];
                }
                if(j==n-i-1){
                    sum+=mat[i][j];
                }
            }
        }
        if(n&1) return sum-mat[n/2][n/2];
        else    return sum;
        
        */
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            if(i!=n-i-1){
                sum+=mat[i][n-i-1];
            }
        }
        return sum;
    }
};