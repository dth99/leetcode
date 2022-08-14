class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int copy=x;
        int lastDigit=0;
        unsigned int rev=0;
        while(x!=0){
            lastDigit=x%10;
            rev=(rev*10)+lastDigit;
            x/=10;
        }
        if(rev==copy){
            return true;
        }
        return false;
    }
};