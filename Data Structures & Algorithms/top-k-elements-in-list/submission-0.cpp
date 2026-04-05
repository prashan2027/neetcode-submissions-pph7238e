class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;

        for(int num:nums){
            mp[num]++;
        }
       int len=nums.size();
       vector<vector<int>>ans(len+1);

       for(auto it:mp){
        ans[it.second].push_back(it.first);
       }

       vector<int>result;

       for(int i=len;i>=0;i--){
        for(int num:ans[i]){
            result.push_back(num);
            if(result.size()>=k)
            return result;
        }
       }

    }
};
