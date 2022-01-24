class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int case1=0,case2=0,case3=0;
        if(word[0]>='a' && word[0]<='z'){
            case2++;
        }
        else if(word[0]>='A'&& word[0]<='Z'){
            case1++;
            case3++;
        }
        for(int i=1;i<n;i++)
        {
            if(word[i]>='A'&& word[i]<='Z'){
                case1++;
            }
            else if(word[i]>='a' && word[i]<='z'){
                case2++;
                case3++;
            }
        }
        if(case1==n || case2==n || case3==n)
            return true;
        return false;
    }
};