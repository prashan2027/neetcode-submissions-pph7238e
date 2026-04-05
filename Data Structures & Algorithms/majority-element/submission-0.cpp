class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mp;

        for(int i=0 ; i<nums.size() ; i++){
            mp[nums[i]]+=1;
        }
int c=nums.size()/2;
        for(auto it:mp)
        {
            if(it.second>c) return it.first;
        }
        return 0;
    }
};