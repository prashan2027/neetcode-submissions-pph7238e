class Solution {
public:
    bool validPalindrome(string s) {
        int first=0;
        int second=s.size()-1;
        while(first<second){
            if(s[first]!=s[second]){
                break;
            }
            first++;
            second--;
        }
        if(first==second) return true;
string s1="";
string s2="";
int n=s.size();
        for(int i=0;i<n;i++){

            if(i!=first){
                s1+=s[i];
            }
            if(i!=second){
                s2+=s[i];
            }
        }
        first=0;
        second=s1.size()-1;
          while(first<second){
            if(s1[first]!=s1[second]){
                break;
            }
            first++;
            second--;
        }
     if(first>=second) return true;

     first=0;
        second=s2.size()-1;
          while(first<second){
            if(s2[first]!=s2[second]){
                return false;
            }
            first++;
            second--;
        }
     return true;

    }
};