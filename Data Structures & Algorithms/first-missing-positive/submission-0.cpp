class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        unordered_set<int>mp(nums.begin(),nums.end());
int i=0;
        for(i=1;i<=mp.size();i++){
            if(mp.find(i)==mp.end())
            return i;
        }

return i;




    }
};