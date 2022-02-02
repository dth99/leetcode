class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)
            return true;
        return false;
        */
        // using hashmap
        if(s.length()!=t.length()) return false;
        unordered_map<char, int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            mp[c]--;
            if(mp[c]<0) return false;
        }
        return true;
        
    }
};