class Solution {
public:
//memorisation
    int util(int ind,int buy,vector<int>& prices,int n,vector<vector<int>>& dp){
        if(ind==n) return 0;
        int profit=0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        if(buy) profit=max(-prices[ind]+util(ind+1,0,prices,n,dp),util(ind+1,1,prices,n,dp));
        else profit=max(prices[ind]+util(ind+1,1,prices,n,dp),util(ind+1,0,prices,n,dp));
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return util(0,1,prices,n,dp);
    }
};

class Solution {
public:
//tabulation  
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        dp[n][0]=dp[n][1]=0;//base case;
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                int profit=0;
                if(buy) profit=max(-prices[ind]+dp[ind+1][0],dp[ind+1][1]);
                else profit=max(prices[ind]+dp[ind+1][1],dp[ind+1][0]);
                dp[ind][buy]=profit;
            }
        }
        return dp[0][1];
    }
};

class Solution {
public:
//space optimisation
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> prev(2,0) ,cur(2,0);
         prev[0]=prev[1]=0;//base case;
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                int profit=0;
                if(buy) profit=max(-prices[ind]+prev[0],prev[1]);
                else profit=max(prices[ind]+prev[1],prev[0]);
                cur[buy]=profit;
            }
            prev=cur;
        }
        return prev[1];
    }
};