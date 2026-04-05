class Solution {
public:
    bool isAnagram(string s, string t) {

        int s1=s.size();
        int s2=t.size();
        if(s1!=s2) return false;

        vector<int>str1(256,0);
        vector<int>str2(256,0);

        for(int i=0;i<s1;i++){
            str1[s[i]-'a']++;
        }

        for(int i=0;i<s2;i++){
            str2[t[i]-'a']++;
        }

        for(int i=0;i<str1.size();i++){
            if(str1[i]!=str2[i]) return false;
        }
        return true;
        
    }
};
