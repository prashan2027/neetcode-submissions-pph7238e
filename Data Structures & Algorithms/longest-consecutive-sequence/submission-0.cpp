class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());
     int ans=0;
        for(int num:mp){

            if(mp.find(num-1)==mp.end()){
              int curr=num;
              int seq=1;
                while(mp.find(curr+1)!=mp.end()){
                    curr++;
                    seq++;
                }
                ans=max(ans,seq);

            }
        }
        return ans;
        

    }
};
