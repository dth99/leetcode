class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0) return false;
    
    long int a=0,b=(int)sqrt(c); 
    while(a<=b){
        long int total=a*a + b*b;
        if(total>c){
            b--;
        }
        else if(total==c){
            return true;
        }
        else{
            a++;
        }
    }
    return false;
        
    }
};