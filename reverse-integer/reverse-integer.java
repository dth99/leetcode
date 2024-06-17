class Solution {
    public int reverse(int x) {
        if(x/10==0) return x;
        int reverse=0;
        while(x!=0){
            reverse=reverse*10 + x%10;
            x=x/10;
        }
        return reverse;
    }
    
}
