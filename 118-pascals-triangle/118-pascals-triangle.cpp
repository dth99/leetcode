class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1) return {{1}};
        vector<vector<int>> r(numRows);
        
        for(int i=0;i<numRows;i++){
            r[i].resize(i+1);   // number of col==number of rows
            r[i][0]=r[i][i]=1; // initalizing first & last elements fo row
            
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1] + r[i-1][j];
            }
            
        }
        return r;
    }
};