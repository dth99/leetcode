class Solution {
    public int addDigits(int num) {
        /*
        int sum=0,rem=0;
        while(num>0){
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        if(sum<10){
            return sum;
        }
        return addDigits(sum);
        */
        
        // digit root d[num]=1+(num-1)%9;
        return 1 + (num-1) % 9;
    }
}