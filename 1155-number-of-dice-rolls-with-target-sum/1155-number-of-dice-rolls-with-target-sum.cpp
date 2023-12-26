class Solution {
public:
   int dp[31][1001];
    int mod=1e9+7;
    int helper(int n, int sum,int k)
    {
        if(n==0 && sum==0)
            return 1;
        if(n<0 || sum<0)
            return 0;
        if(dp[n][sum]!=-1)return dp[n][sum];
        long ans=0;
        for(int j=1; j<=k; j++)
        {
            ans=ans+helper(n-1,sum-j,k);
            ans%=mod;
        }
        return dp[n][sum]=(int)ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return helper(n,target,k);
    }
};