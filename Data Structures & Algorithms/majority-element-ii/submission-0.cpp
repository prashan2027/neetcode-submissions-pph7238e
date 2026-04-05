class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
     unordered_map<int,int>mp;
     for(int num:nums){
        mp[num]++;
     }

     vector<int>ans;
     int criteria=nums.size()/3;
     for(auto it:mp){
        if(it.second>criteria)
        ans.push_back(it.first);
     }
     return ans;

    }
};