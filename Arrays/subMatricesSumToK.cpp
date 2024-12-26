class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& nums, int target) {
        //Double prefix sum ...
        int ans=0,n=nums[0].size(),m=nums.size();

        for(int i=0;i<m;i++)
            for(int j=1;j<n;j++)
                nums[i][j]+=nums[i][j-1];
            
        
        
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                unordered_map<int,int>mp;
                int sum=0;
                mp[0]=1;
                for(int k=0;k<m;k++){
                    int cursum=nums[k][j]-(i>0?nums[k][i-1]:0);
                    sum+=cursum;
                    if(mp.find(sum-target)!=mp.end()) ans+=mp[sum-target];
                    mp[sum]++;
                }
            }
        }
        return ans;
    }
};