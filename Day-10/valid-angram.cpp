class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.length();
        int n=t.length();
        int FreqS[26]={0};
        int FreqT[26]={0};
        if(m!=n)
            return false;
        for(int i=0;i<m;i++){
            FreqS[s[i]-'a']+=1;
            FreqT[t[i]-'a']+=1;
        }
        
        for(int i=0;i<26;i++){
            if(FreqS[i]!=FreqT[i])
                return false;
        }
        return true;
    }
};