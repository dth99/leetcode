class Solution {
    public int addDigits(int num) {
        int sum=0,rem;
        while(num>0){
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        if(sum<10){
            return sum;
        }
        return addDigits(sum);
    }
}