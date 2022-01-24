class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int a=0,b=0,c=0;
        if(word[0]>='a' && word[0]<='z'){
            b++;
        }
        else if(word[0]>='A'&& word[0]<='Z'){
            a++;
            c++;
        }
        for(int i=1;i<n;i++)
        {
            if(word[i]>='A'&& word[i]<='Z'){
                a++;
            }
            else if(word[i]>='a' && word[i]<='z'){
                b++;
                c++;
            }
        }
        if(a==n || b==n || c==n)
            return true;
        return false;
    }
};