class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        long long a= num/3;
        
        if(a+(a-1)+(a+1)==num){
            ans.push_back(a-1);
            ans.push_back(a);
            ans.push_back(a+1);
        }
        return ans;
    }
};