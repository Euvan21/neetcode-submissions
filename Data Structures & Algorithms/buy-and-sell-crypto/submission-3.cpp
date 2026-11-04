class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int res=0;
        for(int i=0;i<n-1;i++){
                int mini=prices[i];
                for(int j=i+1;j<n;j++){
                    int maxi=prices[j];
                    res=max(res,maxi-mini);
                }      
    }
    return res;
    }
};
