class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        /*
         int a=0;
        int b=0;
        int n=edges.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                if(edges[i][j]==edges[0][0]){
                    a++;
                }
                if(edges[i][j]==edges[0][1]){
                    b++;
                }
            }
        }
        if(a>b){
            return edges[0][0];
        } else{
            return edges[0][1];
        }*/
        if(edges[0][0]==edges[1][0] || edges[0][0]==edges[1][1])
            return edges[0][0];
        else
            return edges[0][1];
    }
};