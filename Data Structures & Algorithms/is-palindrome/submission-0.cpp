class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){

            if(isalnum(s[i])){
                ans+=tolower(s[i]);
            }
        }

int first=0;
int second=ans.size()-1;
        while(first<second){
            if(ans[first]!=ans[second]) return false;
            first++;
            second--;
        }
        return true;
    }
};
