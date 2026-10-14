class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        int cnt = 0;
        vector<int> br(n,0);
        vector<int> bl(n,0);

        for(int i = n-1; i >= 0; i--){
            if (i == n-1){
                if (boxes[i] == '1') cnt++;
                continue;
            }
            br[i] = br[i+1]+cnt;
            if (boxes[i] == '1')
                cnt++;
        }
        cnt = 0;
        for(int i = 0; i < n; i++){
            if (i == 0){
                if (boxes[i] == '1') cnt++;
                continue;
            }
            bl[i] = bl[i-1]+cnt;
            if (boxes[i] == '1')
                cnt++;
        }
        vector<int>ans(n);
        for (int i = 0; i < n; i++){
            ans[i]=br[i]+bl[i];
        }

        return ans;
    }
};