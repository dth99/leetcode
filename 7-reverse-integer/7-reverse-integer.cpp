class Solution {
public:
    int reverse(int x) {
        if(x/10==0) return x;
        long long int sum=0;
        while(x){
            sum=sum*10+ x%10;
            x/=10;
        }
        return (sum<INT_MIN || sum>INT_MAX)?0:sum;
    }
    
};