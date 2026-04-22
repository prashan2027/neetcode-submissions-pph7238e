class Solution {
public:
    int maxProfit(vector<int>& prices) {
   int n=prices.size();
   int profit=0,ans=0;
   int pre=prices[0];
    for(int i=1;i<n;i++){
        profit=prices[i]-pre;

        if(profit>0){
            ans+=profit;
        }
        pre=prices[i];
    }
    return ans;
        
    }
};