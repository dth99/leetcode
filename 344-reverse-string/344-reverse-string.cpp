class Solution {
public:
    void reverseString(vector<char>& s) {
        
        helper(s,0,s.size()-1);
        
    }
    void helper(vector<char>& s,int i,int j){
        if(i>=j) return ;
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        helper(s,++i,--j);
    }
};